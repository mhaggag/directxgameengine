#pragma once
#include "Graphics.h"
#include "SpriteBatch.h"
#include "WICTextureLoader.h"
#include "AnimatedSprite.h"
#include "RenderStateHelper.h"
#include "SpriteFont.h"

class GameApp
{
public:
	GameApp();
	~GameApp();
	void Game_Init(HWND handle);
	void Game_Render();
	void Game_Update();
	void Game_CleanUp();

	void OnMouseDown(WPARAM btnState, int x, int y, HWND handle);
	void OnMouseUp(WPARAM btnState, int x, int y);
	void OnMouseMove(WPARAM btnState, int x, int y);
	float Clamp(float x, float low, float high);
public:
	cGraphics m_Graphics;
	cGrid    m_Grid;

	std::shared_ptr<DirectX::SpriteBatch> m_Sprite;
	std::shared_ptr<DirectX::SpriteFont> m_SpriteFont;

	ID3D11ShaderResourceView* m_SpriteTexture;
	RenderStateHelper* mRenderStateHelper;

	float mPhi = 0.1f*DirectX::XM_PI;
	float mTheta = 1.5f*DirectX::XM_PI;
	float mRadius = 200;
	POINT mLastMousePos;

};