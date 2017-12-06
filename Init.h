#pragma once
#include "afxwin.h"


// Init 대화 상자입니다.

class Init : public CDialog
{
	DECLARE_DYNAMIC(Init)

public:
	Init(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Init();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString name_str;//이름
	CButton jung_button;//정시
	CButton su_button;//수시
//	CString name;
	

	virtual BOOL OnInitDialog();
//	afx_msg void OnBnClickedRadioJung();
//	afx_msg void OnBnClickedRadioSu();
//	CEdit name_edit;
};
