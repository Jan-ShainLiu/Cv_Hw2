
// Cv_Hw2.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CCv_Hw2App: 
// �аѾ\��@�����O�� Cv_Hw2.cpp
//

class CCv_Hw2App : public CWinApp
{
public:
	CCv_Hw2App();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CCv_Hw2App theApp;