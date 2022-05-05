#pragma once
#include "DXWidget.h"
#include "Image_PS.inc"
#include "Image_VS.inc"

using namespace DirectX;

DXWidget::DXWidget(HWND hwnd, UINT imgHeight, UINT imgWidth) :
	m_hwnd(hwnd),
	m_isCompared(false),
	m_imageHeight(imgHeight),
	m_imageWidth(imgWidth),
	m_windowHeight(0),
	m_windowWidth(0),
	m_texturesNum(1)
{
	CreateDeviceResources();
	m_stereoEnabled = true;
	//UpdateStereoEnabledStatus();
	CreateDeviceDependentResources();
	CreateWindowSizeDependentResources();
	CreateImageSizeDependentResources();
	BindDeviceResources();
	
}

DXWidget::~DXWidget()
{
}

void DXWidget::Render(bool rightEye, int textureIdx)
{
	ComPtr<ID3D11RenderTargetView> currentRenderTargetView;
	currentRenderTargetView = rightEye ? m_d3dRenderTargetViewRight : m_d3dRenderTargetView;

	m_d3dContext->OMSetRenderTargets(1, currentRenderTargetView.GetAddressOf(), nullptr);

	PS_Constant_Buffer frameInfo = { XMINT4(textureIdx, (float)(rightEye), (float)m_displayMode,0.0f) };				// textureIdx, isrightEys
	m_d3dContext->UpdateSubresource(m_constantBuffer.Get(), 0, nullptr, &frameInfo, 0, 0);
	m_d3dContext->PSSetConstantBuffers(0, 1, m_constantBuffer.GetAddressOf());

	// draw the object
	m_d3dContext->Draw(m_numVertices, 0);

}

void DXWidget::Render2D(bool rightEye, int textureIdx)
{
	ComPtr<ID3D11RenderTargetView> currentRenderTargetView;
	currentRenderTargetView = m_d3dRenderTargetView;
	m_d3dContext->OMSetRenderTargets(1, currentRenderTargetView.GetAddressOf(), nullptr);

	PS_Constant_Buffer frameInfo = { XMINT4(textureIdx,(float)rightEye, (float)m_displayMode, 0.0f) };
	m_d3dContext->UpdateSubresource(m_constantBuffer.Get(), 0, nullptr, &frameInfo, 0, 0);
	m_d3dContext->PSSetConstantBuffers(0, 1, m_constantBuffer.GetAddressOf());

	// draw the object
	m_d3dContext->Draw(m_numVertices, 0);
}

void DXWidget::CreateShaderResourceLeftSide(cv::Mat & frame, const int texture2DIdx)
{
	CV_Assert(frame.type() == CV_8UC3);

	LoadTexture(frame, m_texture2DLeftSide, texture2DIdx);
	m_d3dContext->PSSetShaderResources(0, 2, m_texture2DViewLeftSide.GetAddressOf());
}

void DXWidget::CreateShaderResourceRightSide(cv::Mat & frame, const int texture2DIdx)
{
	CV_Assert(frame.type() == CV_8UC3);
	LoadTexture(frame, m_texture2DRightSide, texture2DIdx);
	m_d3dContext->PSSetShaderResources(1, 1, m_texture2DViewRightSide.GetAddressOf());
	// so weird! the second argument of PSSetShaderResources should be 2, but it does't work; however, the value works.
}


void DXWidget::SetComparison(bool cmp)
{
	m_isCompared = cmp;
	BindDeviceResources();
}

void DXWidget::Present()
{
	// present
	DXGI_PRESENT_PARAMETERS parameters = { 0 };
	parameters.DirtyRectsCount = 0;
	parameters.pDirtyRects = nullptr;
	parameters.pScrollRect = nullptr;
	parameters.pScrollOffset = nullptr;
	HRESULT hr = m_swapChain->Present1(1, 0, &parameters);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceResources-present", "error", 0);
}

void DXWidget::UpdateImageSize(UINT width, UINT height)
{
	m_imageHeight = height;
	m_imageWidth = width;
	CreateImageSizeDependentResources();
	BindDeviceResources();
}

void DXWidget::UpdateWindowSize(UINT width, UINT height)
{
	m_windowWidth = width;
	m_windowHeight = height;
	CreateWindowSizeDependentResources();
	BindDeviceResources();
}

void DXWidget::UpdateDisplayMode(int mode)
{
	m_displayMode = mode;
	BindDeviceResources();
}

void DXWidget::SetTexturesNum(int n)
{
	m_texturesNum = n;
	CreateImageSizeDependentResources();
	BindDeviceResources();
}

void DXWidget::CreateDeviceResources()
{
	HRESULT hr;

	// create device and context
	ComPtr<ID3D11Device> device;
	ComPtr<ID3D11DeviceContext> context;

	D3D_FEATURE_LEVEL featureLevels[] =
	{

		D3D_FEATURE_LEVEL_11_1,
		D3D_FEATURE_LEVEL_11_0,
		D3D_FEATURE_LEVEL_10_1,
		D3D_FEATURE_LEVEL_10_0,
		D3D_FEATURE_LEVEL_9_3,
		D3D_FEATURE_LEVEL_9_2,
		D3D_FEATURE_LEVEL_9_1
	};

	hr = D3D11CreateDevice(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		0,
		D3D11_CREATE_DEVICE_BGRA_SUPPORT,
		featureLevels,
		ARRAYSIZE(featureLevels),
		D3D11_SDK_VERSION,
		&device,
		&m_d3dFeatureLevel,
		&context
	);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceResources-D3D11CreateDevice", "error", 0);
	device.As(&m_d3dDevice);
	context.As(&m_d3dContext);
}

void DXWidget::CreateWindowSizeDependentResources()
{
	HRESULT hr;
	// clear context
	ID3D11RenderTargetView* nullViews[] = { nullptr };
	m_d3dContext->OMSetRenderTargets(ARRAYSIZE(nullViews), nullViews, nullptr);
	m_d3dRenderTargetView = nullptr;
	m_d3dRenderTargetViewRight = nullptr;

	if (m_swapChain != nullptr)
	{ // if swapChain exist, resize
		hr = m_swapChain->ResizeBuffers(
			2,
			m_windowWidth,
			m_windowHeight,
			DXGI_FORMAT_B8G8R8A8_UNORM,
			0
		);
		if (FAILED(hr))
			MessageBoxA(0, "DeviceResources-ResizeBuffers", "error", 0);
	}
	else
	{
		// otherwise, create a new swap chain based on the direct3D device and context
		// create a DXGIfactory firstly
		ComPtr<IDXGIDevice3> dxgiDevice;
		m_d3dDevice.As(&dxgiDevice);

		ComPtr<IDXGIAdapter> dxgiAdapter;
		dxgiDevice->GetAdapter(&dxgiAdapter);

		ComPtr<IDXGIFactory4> dxgiFactory;
		dxgiAdapter->GetParent(IID_PPV_ARGS(&dxgiFactory));

		DXGI_SWAP_CHAIN_DESC1 swapChainDesc = { 0 };

		// then crete the swap chain
		swapChainDesc.Width = m_windowWidth;
		swapChainDesc.Height = m_windowHeight;
		swapChainDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;

		swapChainDesc.Stereo = m_stereoEnabled;
		swapChainDesc.SampleDesc.Count = 1;
		swapChainDesc.SampleDesc.Quality = 0;
		swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		swapChainDesc.BufferCount = 2;
		swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
		swapChainDesc.Flags = 0;
		swapChainDesc.Scaling = DXGI_SCALING_STRETCH;
		swapChainDesc.AlphaMode = DXGI_ALPHA_MODE_IGNORE;

		ComPtr<IDXGISwapChain1> swapChain;
		hr = dxgiFactory->CreateSwapChainForHwnd(
			m_d3dDevice.Get(),
			m_hwnd,
			&swapChainDesc,
			nullptr,
			nullptr,
			&swapChain
		);
		if (FAILED(hr))
			MessageBoxA(0, "DeviceResources-createSwapChainForHwnd", "error", 0);
		swapChain.As(&m_swapChain);

		// make sure that only one frame is allowed to queue for rendering in DXGI
		// in order to reduce relays and render once after every VSync
		hr = dxgiDevice->SetMaximumFrameLatency(1);
		if (FAILED(hr))
			MessageBoxA(0, "DeviceResources-SetMaximumFrameLaTency", "error", 0);
	}

	//// create a back buffer that manage back buffer
	ComPtr<ID3D11Texture2D1> backBuffer;
	hr = m_swapChain->GetBuffer(0, IID_PPV_ARGS(&backBuffer));
	if (FAILED(hr))
		MessageBoxA(0, "DeviceResources-GetBuffer", "error", 0);

	CD3D11_RENDER_TARGET_VIEW_DESC1 renderTargetViewDesc(
		D3D11_RTV_DIMENSION_TEXTURE2DARRAY,
		DXGI_FORMAT_B8G8R8A8_UNORM,
		0,
		0,
		1
	);
	hr = m_d3dDevice->CreateRenderTargetView1(
		backBuffer.Get(),
		&renderTargetViewDesc,
		&m_d3dRenderTargetView
	);

	if (FAILED(hr))
		MessageBoxA(0, "DeviceResources-CreateRenderTargetView1", "error", 0);

	if (m_stereoEnabled)
	{
		CD3D11_RENDER_TARGET_VIEW_DESC1 renderTargetRightViewDesc(
			D3D11_RTV_DIMENSION_TEXTURE2DARRAY,
			DXGI_FORMAT_B8G8R8A8_UNORM,
			0,
			1,
			1
		);
		hr = m_d3dDevice->CreateRenderTargetView1(
			backBuffer.Get(),
			&renderTargetRightViewDesc,
			&m_d3dRenderTargetViewRight
		);
		if (FAILED(hr))
			MessageBoxA(0, "DeviceResources-CreateRenderTargetView1", "error", 0);
	}

	// set viewport
	D3D11_TEXTURE2D_DESC backBufferDesc = { 0 };
	backBuffer->GetDesc(&backBufferDesc);
	m_width = backBufferDesc.Width;
	m_height = backBufferDesc.Height;
	m_screenViewport = { 0 };
	m_screenViewport.TopLeftX = 0;
	m_screenViewport.TopLeftY = 0;
	m_screenViewport.Width = backBufferDesc.Width;
	m_screenViewport.Height = backBufferDesc.Height;
	m_d3dContext->RSSetViewports(1, &m_screenViewport);


}

void DXWidget::CreateImageSizeDependentResources()
{
	HRESULT hr;
	m_texture2DLeftSide.Reset();
	m_texture2DRightSide.Reset();
	m_texture2DViewLeftSide.Reset();
	m_texture2DViewRightSide.Reset();

	D3D11_TEXTURE2D_DESC desc_rgba;
	desc_rgba.Width = m_imageWidth;
	desc_rgba.Height = m_imageHeight;
	desc_rgba.MipLevels = 1;
	desc_rgba.ArraySize = m_texturesNum;
	desc_rgba.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	desc_rgba.SampleDesc.Count = 1;
	desc_rgba.SampleDesc.Quality = 0;
	desc_rgba.BindFlags = D3D11_BIND_SHADER_RESOURCE;
	desc_rgba.Usage = D3D11_USAGE_DEFAULT;
	desc_rgba.CPUAccessFlags = 0;// D3D11_CPU_ACCESS_WRITE;
	desc_rgba.MiscFlags = 0;
	hr = m_d3dDevice->CreateTexture2D(&desc_rgba, nullptr, m_texture2DLeftSide.GetAddressOf());
	if (m_isCompared)
		hr = hr | m_d3dDevice->CreateTexture2D(&desc_rgba, nullptr, m_texture2DRightSide.GetAddressOf());
	if (FAILED(hr))
		MessageBoxA(0, "WindwoSizeResource-CreateTexture2D", "error", 0);

	CD3D11_SHADER_RESOURCE_VIEW_DESC desc_view(m_texture2DLeftSide.Get(), D3D11_SRV_DIMENSION_TEXTURE2DARRAY);
	hr = m_d3dDevice->CreateShaderResourceView(m_texture2DLeftSide.Get(), &desc_view, m_texture2DViewLeftSide.GetAddressOf());
	if (m_isCompared)
		hr = hr | m_d3dDevice->CreateShaderResourceView(m_texture2DRightSide.Get(), &desc_view, m_texture2DViewRightSide.GetAddressOf());
	if (FAILED(hr))
		MessageBoxA(0, "WindwoSizeResource-CreateTexture2DShader", "error", 0);

}

void DXWidget::UpdateStereoEnabledStatus()
{
	HRESULT hr;
	// find the DXGI factory
	ComPtr<IDXGIDevice1> dxgiDevice;
	m_d3dDevice.As(&dxgiDevice);

	ComPtr<IDXGIAdapter> dxgiAdapter;
	hr = dxgiDevice->GetAdapter(&dxgiAdapter);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceResources-GetAdapter", "error", 0);

	ComPtr<IDXGIFactory2> dxgiFactory;
	hr = dxgiAdapter->GetParent(IID_PPV_ARGS(&dxgiFactory));
	if (FAILED(hr))
		MessageBoxA(0, "DeviceResources-GetParent", "error", 0);

	m_stereoEnabled = dxgiFactory->IsWindowedStereoEnabled() ? true : false;
}

void DXWidget::CreateDeviceDependentResources()
{
	HRESULT hr;

	hr = m_d3dDevice->CreateVertexShader(
		g_Image_VS,
		sizeof(g_Image_VS),
		nullptr,
		&m_vertexShader
	);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceWidget-CreateVertexShader", "error", 0);

	hr = m_d3dDevice->CreatePixelShader(
		g_Image_PS,
		sizeof(g_Image_PS),
		nullptr,
		&m_pixelShader
	);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceWidget-CreatePixelShader", "error", 0);

	// initialiaze input layout
	static const D3D11_INPUT_ELEMENT_DESC vertexDesc[] =
	{
		{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
		{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0},
	};

	hr = m_d3dDevice->CreateInputLayout(
		vertexDesc,
		ARRAYSIZE(vertexDesc),
		g_Image_VS,
		sizeof(g_Image_VS),
		&m_inputLayout
	);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceWidget-CreateInputLayout", "error", 0);

	// create the sampler
	D3D11_SAMPLER_DESC samplerDescription;
	ZeroMemory(&samplerDescription, sizeof(samplerDescription));
	samplerDescription.Filter = D3D11_FILTER_ANISOTROPIC;
	samplerDescription.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
	samplerDescription.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
	samplerDescription.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
	samplerDescription.MipLODBias = 0.0f;
	samplerDescription.MaxAnisotropy = 4;
	samplerDescription.ComparisonFunc = D3D11_COMPARISON_NEVER;
	samplerDescription.BorderColor[0] = 0.0f;
	samplerDescription.BorderColor[1] = 0.0f;
	samplerDescription.BorderColor[2] = 0.0f;
	samplerDescription.BorderColor[3] = 0.0f;
	samplerDescription.MinLOD = 0;
	samplerDescription.MaxLOD = D3D11_FLOAT32_MAX;

	hr = m_d3dDevice->CreateSamplerState(
		&samplerDescription,
		&m_sampler
	);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceWidget-CreateSamplerState", "error", 0);

	// create ps constant buffer
	PS_Constant_Buffer frameInfo = { XMINT4(0, 0, 0, 0) };
	D3D11_BUFFER_DESC cbDesc;
	cbDesc.ByteWidth = sizeof(frameInfo);
	cbDesc.Usage = D3D11_USAGE_DEFAULT;
	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
	cbDesc.CPUAccessFlags = 0;
	cbDesc.MiscFlags = 0;
	cbDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA InitData;
	InitData.pSysMem = &frameInfo;
	InitData.SysMemPitch = 0;
	InitData.SysMemSlicePitch = 0;

	hr = m_d3dDevice->CreateBuffer(&cbDesc, &InitData, &m_constantBuffer);
	if (FAILED(hr))
		MessageBoxA(0, "DeviceWidget-CreateConstantBuffer", "error", 0);
}

void DXWidget::CreateVertexBuffer()
{
	HRESULT hr;
	m_vertexBuffer.Reset();

	// get the position of the image, trying to keep the size of the image unchanged
	float r_w = static_cast<double>(m_imageWidth / (m_displayMode == 2 ? 2 : 1)) / m_width;
	float r_h = static_cast<double>(m_imageHeight) / (m_displayMode == 1 ? 2 : 1) / m_height;
	float W = 0.0f, H = 0.0f;

	if (m_isCompared)
	{
		if (r_w <= 0.48f && r_h <= 1.0f)
		{
			W = r_w;
			H = r_h;
		}
		else if (r_h > r_w / 0.48)
		{
			W = r_w / r_h;
			H = 1.0f;
		}
		else
		{
			W = 0.48f;
			H = 0.48 * r_h / r_w;
		}
		// create a ID3DBuffer to manage system memory and video memory
		const Vertex vertices[] =
		{
			{ XMFLOAT3(-0.5f - W, H, 0.2f), XMFLOAT2(0.0f, 0.0f) },
			{ XMFLOAT3(-0.5f + W, H, 0.2f), XMFLOAT2(1.0f, 0.0f) },
			{ XMFLOAT3(-0.5f - W, -H, 0.2f), XMFLOAT2(0.0f, 1.0f) },


			{ XMFLOAT3(-0.5f - W, -H, 0.2f), XMFLOAT2(0.0f, 1.0f) },
			{ XMFLOAT3(-0.5f + W, H, 0.2f), XMFLOAT2(1.0f, 0.0f) },
			{ XMFLOAT3(-0.5f + W, -H, 0.2f), XMFLOAT2(1.0f, 1.0f) },

			{ XMFLOAT3(0.5f - W, H, 0.8f), XMFLOAT2(0.0f, 0.0f) },
			{ XMFLOAT3(0.5f + W, H, 0.8f), XMFLOAT2(1.0f, 0.0f) },
			{ XMFLOAT3(0.5f - W, -H, 0.8f), XMFLOAT2(0.0f, 1.0f) },


			{ XMFLOAT3(0.5f - W, -H, 0.8f), XMFLOAT2(0.0f, 1.0f) },
			{ XMFLOAT3(0.5f + W, H, 0.8f), XMFLOAT2(1.0f, 0.0f) },
			{ XMFLOAT3(0.5f + W, -H, 0.8f), XMFLOAT2(1.0f, 1.0f) },
		};
		m_numVertices = sizeof(vertices);
		CD3D11_BUFFER_DESC vertexBufferDesc(m_numVertices, D3D11_BIND_VERTEX_BUFFER);
		D3D11_SUBRESOURCE_DATA vertexBufferData = { 0 };
		vertexBufferData.pSysMem = vertices;
		vertexBufferData.SysMemPitch = 0;
		vertexBufferData.SysMemSlicePitch = 0;

		hr = m_d3dDevice->CreateBuffer(
			&vertexBufferDesc,
			&vertexBufferData,
			&m_vertexBuffer
		);
		if (FAILED(hr))
			MessageBoxA(0, "DeviceWidget-CreateBuffer", "error", 0);
	}
	else
	{
		if (r_w <= 1.0f && r_h <= 1.0f)
		{
			W = r_w;
			H = r_h;
		}
		else if (r_h > r_w)
		{
			W = r_w / r_h;
			H = 1.0f;
		}
		else
		{
			W = 1.0f;
			H = r_h / r_w;
		}
		// create a ID3DBuffer to manage system memory and video memory
		const Vertex vertices[] =
		{
			{ XMFLOAT3(0.0f - W, H, 0.2f), XMFLOAT2(0.0f, 0.0f) },
			{ XMFLOAT3(0.0f + W, H, 0.2f), XMFLOAT2(1.0f, 0.0f) },
			{ XMFLOAT3(0.0f - W, -H, 0.2f), XMFLOAT2(0.0f, 1.0f) },


			{ XMFLOAT3(0.0f - W, -H, 0.2f), XMFLOAT2(0.0f, 1.0f) },
			{ XMFLOAT3(0.0f + W, H, 0.2f), XMFLOAT2(1.0f, 0.0f) },
			{ XMFLOAT3(0.0f + W, -H, 0.2f), XMFLOAT2(1.0f, 1.0f) },
		};

		m_numVertices = sizeof(vertices);
		CD3D11_BUFFER_DESC vertexBufferDesc(m_numVertices, D3D11_BIND_VERTEX_BUFFER);
		D3D11_SUBRESOURCE_DATA vertexBufferData = { 0 };
		vertexBufferData.pSysMem = vertices;
		vertexBufferData.SysMemPitch = 0;
		vertexBufferData.SysMemSlicePitch = 0;

		hr = m_d3dDevice->CreateBuffer(
			&vertexBufferDesc,
			&vertexBufferData,
			&m_vertexBuffer
		);
		if (FAILED(hr))
			MessageBoxA(0, "DeviceWidget-CreateBuffer", "error", 0);
	}
}

void DXWidget::LoadTexture(cv::Mat & img, ComPtr<ID3D11Texture2D> texture2D, int idx)
{
	cv::Mat img_rgba;
	cv::cvtColor(img, img_rgba, cv::COLOR_BGR2RGBA);
	UINT subResource = D3D11CalcSubresource(0, idx, 1);
	m_d3dContext->UpdateSubresource(texture2D.Get(), subResource, nullptr, (void *)img_rgba.data, m_imageWidth * 4, 0);
}

void DXWidget::BindDeviceResources()
{
	CreateVertexBuffer();
	UINT stride = sizeof(Vertex);
	UINT offset = 0;
	m_d3dContext->IASetVertexBuffers(
		0,
		1,
		m_vertexBuffer.GetAddressOf(),
		&stride,
		&offset
	);
	m_d3dContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
	m_d3dContext->IASetInputLayout(m_inputLayout.Get());

	m_d3dContext->VSSetShader(
		m_vertexShader.Get(),
		nullptr,
		0
	);

	m_d3dContext->PSSetShader(
		m_pixelShader.Get(),
		nullptr,
		0
	);

	m_d3dContext->PSSetSamplers(
		0,
		1,
		m_sampler.GetAddressOf()
	);
}

void DXWidget::Release()
{
}


