#pragma once
#include "pch.h"
#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>

using namespace Microsoft::WRL;

class DXWidget
{
	struct Vertex
	{
		DirectX::XMFLOAT3 pos;
		DirectX::XMFLOAT2 tex;
	};
	struct PS_Constant_Buffer
	{
		DirectX::XMINT4 frameMarkers;
	};
public:
	DXWidget(HWND hwnd, UINT imgHeight = 1080, UINT imgWidth = 1920);
	~DXWidget();

	void Render(bool rightEye, int textureIdx);
	void Render2D(bool rightEye, int textureIdx);
	void Present();

	void UpdateImageSize(UINT width, UINT height);
	void UpdateWindowSize(UINT width = 0, UINT height = 0);
	void UpdateDisplayMode(int mode);
	void SetTexturesNum(int n);

	// for texture2DIdx, the even number denotes the left image, while the odd number denotes the right.
	void CreateShaderResourceLeftSide(cv::Mat& frame, const int texture2DIdx);
	void CreateShaderResourceRightSide(cv::Mat& frame, const int texture2DIdx);
	void SetComparison(bool cmp);
	

private:
	void CreateDeviceResources();								// device, device context
	void CreateWindowSizeDependentResources();					// swapchain, viewport
	void CreateImageSizeDependentResources();
	void UpdateStereoEnabledStatus();							// whether the hardware support stereo
	void CreateDeviceDependentResources();						// vertex shader, pixel shader, input layout, vertices, sampler
	void CreateVertexBuffer();
	void LoadTexture(cv::Mat& img, ComPtr<ID3D11Texture2D> texture2D, int depth);
	void BindDeviceResources();
	void Release();



private:
	HWND m_hwnd;
	UINT m_width;						// the width of the window
	UINT m_height;						// the height of the window
	UINT m_imageWidth;
	UINT m_imageHeight;
	UINT m_windowWidth;
	UINT m_windowHeight;
	bool m_stereoEnabled;
	bool m_isCompared;					// whether two image are aligned side by side for comparison

	UINT m_numVertices;
	int	 m_texturesNum;					// the number of textures in a textureArray. a texture contains the left and right images.
	int m_displayMode;

private:
	// Direct3D 对象
	ComPtr<ID3D11Device3>			m_d3dDevice;
	ComPtr<ID3D11DeviceContext3>	m_d3dContext;
	ComPtr<IDXGISwapChain3>			m_swapChain;

	// Direct3D 渲染对象
	ComPtr<ID3D11RenderTargetView1>	m_d3dRenderTargetView;
	ComPtr<ID3D11RenderTargetView1> m_d3dRenderTargetViewRight;
	D3D11_VIEWPORT					m_screenViewport;

	D3D_FEATURE_LEVEL				m_d3dFeatureLevel;

	// direct3D resources of geometry
	ComPtr<ID3D11InputLayout>	m_inputLayout;
	ComPtr<ID3D11Buffer>		m_vertexBuffer;
	ComPtr<ID3D11VertexShader>	m_vertexShader;
	ComPtr<ID3D11PixelShader>	m_pixelShader;

	ComPtr<ID3D11Texture2D>			 m_texture2DLeftSide;				
	ComPtr<ID3D11Texture2D>			 m_texture2DRightSide;
	ComPtr<ID3D11ShaderResourceView> m_texture2DViewLeftSide;	
	ComPtr<ID3D11ShaderResourceView> m_texture2DViewRightSide;

	ComPtr<ID3D11SamplerState>		m_sampler;

	ComPtr<ID3D11Buffer>			m_constantBuffer;
	
};

