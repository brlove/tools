
// MourseButton.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMourseButtonApp: 
// �йش����ʵ�֣������ MourseButton.cpp
//

class CMourseButtonApp : public CWinApp
{
public:
	CMourseButtonApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMourseButtonApp theApp;