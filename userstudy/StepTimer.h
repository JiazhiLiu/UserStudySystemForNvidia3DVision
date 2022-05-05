#pragma once
#include <wrl.h>

class StepTimer
{
public:
	StepTimer(int frameRate = 30);
	~StepTimer();

	UINT32 GetFramesPerSecond()
	{
		GetAdjFrameCount();
		return m_framesPerSecond;
	}

	bool GetFrameStatus() { return m_frameShUpdated; }
	// after a new video is updated, please call setFrameStatus()
	void SetFrameStatus() 
	{ 
		m_frameShUpdated = false; 
		m_frames++;
	}

private:
	// get the counts of adjacent frames
	void GetAdjFrameCount();



private:
	// the raw time information in QPC
	LARGE_INTEGER m_qpcFrequency;
	LARGE_INTEGER m_qpcLastTime;
	LARGE_INTEGER m_qpcStartTime;


	UINT32 m_framesPerSecond;
	UINT32 m_framesThisSecond;
	UINT64 m_qpcSecondCounter;	// qpc that frames has cost during one second.

	double m_frameRate;
	bool m_frameShUpdated;		// whether the video frame should be updated.
	double m_frames;			// the number of video frames that has been played.
	double m_frameEscape;
	int m_correctPeriod;		// the period of correcting video frames 
	
};