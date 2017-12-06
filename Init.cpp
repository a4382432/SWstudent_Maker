// Init.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "SWStudentMaker.h"
#include "Init.h"
#include "afxdialogex.h"


// Init 대화 상자입니다.

IMPLEMENT_DYNAMIC(Init, CDialog)

Init::Init(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG2, pParent)
	, name_str(_T(""))
{
	

}

Init::~Init()
{
}

void Init::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME_EDIT, name_str);
	DDX_Control(pDX, IDC_RADIO_JUNG, jung_button);
	//	DDX_Control(pDX, IDC_RADIO_LOGIC, logic_button);
	//DDX_Control(pDX, IDC_NAME_EDIT, name_edit);
}


BEGIN_MESSAGE_MAP(Init, CDialog)
//	ON_BN_CLICKED(IDC_RADIO_JUNG, &Init::OnBnClickedRadioJung)
//	ON_BN_CLICKED(IDC_RADIO_SU, &Init::OnBnClickedRadioSu)
END_MESSAGE_MAP()


// Init 메시지 처리기입니다.


BOOL Init::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	
	jung_button.SetCheck(1);

	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
