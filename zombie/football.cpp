#include "stdafx.h"
#include "resource.h"

CFootball::CFootball():CSceneObject(OBJECT_FOOTBALL,20,20)
{

}

CFootball::~CFootball()
{

}

void CFootball::Draw(HINSTANCE hInstance,HDC hdc)
{
	HDC hMemDc = CreateCompatibleDC(hdc);
	HBITMAP hbmpTree = LoadBitmap(hInstance,MAKEINTRESOURCE(IDB_FOOTBALL));
	SelectObject(hMemDc,hbmpTree);
	BitBlt(hdc,m_ptPosition.x,m_ptPosition.y,m_iWidth,m_iHeigth,
		hMemDc,0,0,SRCCOPY);
	DeleteDC(hMemDc);
	DeleteObject(hbmpTree);
}

int CFootball::IsOnObject(POINT ptPos)
{
	return ON_NOTHING;
}

bool CFootball::IsBulletOn(CBullet *pBullet)
{
	return false;
}
