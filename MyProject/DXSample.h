#pragma once
#include <windows.h>

class DXSample
{
public:
	DXSample(UINT width, UINT height);
	virtual ~DXSample() = default;
	virtual BOOL Initialize(HWND hwnd, UINT width, UINT height) = 0;
	virtual bool Update() = 0;
	virtual bool Render() = 0;
	virtual bool Destroy() = 0;
	virtual bool OnResize(UINT width, UINT height) = 0;
	
	UINT GetHeight();
	UINT GetWidth();

protected:
	UINT m_height, m_width;
};