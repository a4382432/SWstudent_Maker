
// SWStudentMaker.h : SWStudentMaker ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSWStudentMakerApp:
// �� Ŭ������ ������ ���ؼ��� SWStudentMaker.cpp�� �����Ͻʽÿ�.
//

class CSWStudentMakerApp : public CWinApp
{
public:
	CSWStudentMakerApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSWStudentMakerApp theApp;
