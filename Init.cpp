// Init.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "SWStudentMaker.h"
#include "Init.h"
#include "afxdialogex.h"


// Init ��ȭ �����Դϴ�.

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


// Init �޽��� ó�����Դϴ�.


BOOL Init::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	
	jung_button.SetCheck(1);

	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
