#pragma once
#include "afxwin.h"


// Init ��ȭ �����Դϴ�.

class Init : public CDialog
{
	DECLARE_DYNAMIC(Init)

public:
	Init(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Init();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CString name_str;//�̸�
	CButton jung_button;//����
	CButton su_button;//����
//	CString name;
	

	virtual BOOL OnInitDialog();
//	afx_msg void OnBnClickedRadioJung();
//	afx_msg void OnBnClickedRadioSu();
//	CEdit name_edit;
};
