#include "StepTimer.h"

StepTimer::StepTimer(int frameRate) :
	m_framesPerSecond(0),
	m_framesThisSecond(0),
	m_qpcSecondCounter(0),
	m_frameRate(frameRate),
	m_frameShUpdated(true),
	m_frames(0),
	m_frameEscape(1 / m_frameRate),
	m_correctPeriod(1)
{
	QueryPerformanceFrequency(&m_qpcFrequency);
	QueryPerformanceCounter(&m_qpcLastTime);
}


StepTimer::~StepTimer()
{
}

void StepTimer::GetAdjFrameCount()
{
	LARGE_INTEGER currentTime;
	QueryPerformanceCounter(&currentTime);

	// correct frame rate every 120 frames
	if ((int(m_frames) % m_correctPeriod) == 0) {
		m_frames = 1;
		m_qpcStartTime = currentTime;
		m_correctPeriod = m_correctPeriod * 2 > 3600 ? 3600 : m_correctPeriod * 2;
	}
	
	double timeDaLta0 = (currentTime.QuadPart - m_qpcStartTime.QuadPart) / static_cast<double>(m_qpcFrequency.QuadPart);
	if (timeDaLta0 >= (m_frames - 1)*m_frameEscape) {
		m_frameShUpdated = true;
	}

	UINT64 timeDelta = currentTime.QuadPart - m_qpcLastTime.QuadPart;
	m_qpcLastTime = currentTime;
	m_qpcSecondCounter += timeDelta;

	m_framesThisSecond++;

	if (m_qpcSecondCounter >= static_cast<UINT64>(m_qpcFrequency.QuadPart))
	{
		m_framesPerSecond = m_framesThisSecond;
		m_framesThisSecond = 0;
		m_qpcSecondCounter %= m_qpcFrequency.QuadPart;
	}
}


