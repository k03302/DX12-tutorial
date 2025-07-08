#pragma once

class DXSample
{
public:
	DXSample(int width, int height);
	virtual ~DXSample() = default;
	virtual void Initialize(class HWND hwnd, int width, int height) = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Destroy() = 0;
	virtual void OnResize(int width, int height) = 0;
	
	int GetHeight();
	int GetWidth();

protected:
	int m_height, m_width;
};