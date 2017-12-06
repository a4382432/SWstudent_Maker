// Enrollment.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "SWStudentMaker.h"
#include "Enrollment.h"
#include "afxdialogex.h"

// Enrollment ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Enrollment, CDialog)
Enrollment::Enrollment(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
	, enrollment_str(_T(""))
	//, cart_list(0)
	
//	, subject_combo(_T(""))
//, subject_combo(0)
//, enroll_list(0)
{
	grade = 1;
	season = 1;
	
	//Ÿ�Գѹ�: �ù� 1, �˰� 2, ���� 3, ���� 4
	//�ɷ�ġ : �г��̶� ���� 2�г��̸� +2
	subject[1][1][1].subjectName = _T("Ȯ���� ���");
	subject[1][1][1].subjectAbilityType = 4;
	subject[1][1][1].subjectAbilityPoint = 1;

	subject[1][1][2].subjectName = _T("���α׷��� ���� �� �ǽ�");
	subject[1][1][2].subjectAbilityType = 1;
	subject[1][1][2].subjectAbilityPoint = 1;

	subject[1][1][3].subjectName = _T("������ �ý��� ����");
	subject[1][1][3].subjectAbilityType = 2;
	subject[1][1][3].subjectAbilityPoint = 1;

	subject[1][1][4].subjectName = _T("���� �����");
	subject[1][1][4].subjectAbilityType = 3;
	subject[1][1][4].subjectAbilityPoint = 1;

	subject[1][2][1].subjectName = _T("�̻����");
	subject[1][2][1].subjectAbilityType = 4;
	subject[1][2][1].subjectAbilityPoint = 1;

	subject[1][2][2].subjectName = _T("���α׷��� ���� �� �ǽ�");
	subject[1][2][2].subjectAbilityType = 1;
	subject[1][2][2].subjectAbilityPoint = 1;

	subject[1][2][3].subjectName=_T("â���� ���м���");
	subject[1][2][3].subjectAbilityType = 3;
	subject[1][2][3].subjectAbilityPoint = 1;

	subject[1][2][4].subjectName = _T("���Ͻý��� �����");
	subject[1][2][4].subjectAbilityType = 3;
	subject[1][2][4].subjectAbilityPoint = 1;


	subject[2][1][1].subjectName = _T("�������");
	subject[2][1][1].subjectAbilityType = 4;
	subject[2][1][1].subjectAbilityPoint = 2;

	subject[2][1][2].subjectName = _T("��ü���� ���α׷��� �� �ǽ�");
	subject[2][1][2].subjectAbilityType = 1;
	subject[2][1][2].subjectAbilityPoint = 2;

	subject[2][1][3].subjectName = _T("�ڷᱸ��");
	subject[2][1][3].subjectAbilityType = 2;
	subject[2][1][3].subjectAbilityPoint = 2;

	subject[2][1][4].subjectName = _T("��ǻ�ͱ���");
	subject[2][1][4].subjectAbilityType = 2;
	subject[2][1][4].subjectAbilityPoint = 2;

	subject[2][1][5].subjectName = _T("�׸��� �����");
	subject[2][1][5].subjectAbilityType = 3;
	subject[2][1][5].subjectAbilityPoint = 2;


	subject[2][2][1].subjectName = _T("��� ��ǻ�� ����");
	subject[2][2][1].subjectAbilityType = 4;
	subject[2][2][1].subjectAbilityPoint = 2;

	subject[2][2][2].subjectName = _T("������ ���α׷��� �� �ǽ�");
	subject[2][2][2].subjectAbilityType = 1;
	subject[2][2][2].subjectAbilityPoint = 2;

	subject[2][2][3].subjectName = _T("�˰���");
	subject[2][2][3].subjectAbilityType = 2;
	subject[2][2][3].subjectAbilityPoint = 2;

	subject[2][2][4].subjectName = _T("������ ��Ű� ��Ʈ��ũ");
	subject[2][2][4].subjectAbilityType = 2;
	subject[2][2][4].subjectAbilityPoint = 2;

	subject[2][2][5].subjectName = _T("MFC���α׷� ����");
	subject[2][2][5].subjectAbilityType = 3;
	subject[2][2][5].subjectAbilityPoint = 2;

	subject[3][1][1].subjectName = _T("����Ʈ�������");
	subject[3][1][1].subjectAbilityType = 4;
	subject[3][1][1].subjectAbilityPoint = 3;

	subject[3][1][1].subjectName = _T("�����ͺ��̽�");
	subject[3][1][1].subjectAbilityType = 2;
	subject[3][1][1].subjectAbilityPoint = 3;

	subject[3][1][2].subjectName = _T("�ΰ�����");
	subject[3][1][2].subjectAbilityType = 2;
	subject[3][1][2].subjectAbilityPoint = 3;

	subject[3][1][3].subjectName = _T("���α׷��־��");
	subject[3][1][3].subjectAbilityType = 1;
	subject[3][1][3].subjectAbilityPoint = 3;

	subject[3][1][4].subjectName = _T("�ý��� ���α׷���");
	subject[3][1][4].subjectAbilityType = 1;
	subject[3][1][4].subjectAbilityPoint = 3;

	subject[3][1][5].subjectName = _T("��Ʈ��ũ ���α׷���");
	subject[3][1][5].subjectAbilityType = 1;
	subject[3][1][5].subjectAbilityPoint = 3;

	subject[3][1][6].subjectName = _T("������Ʈ1");
	subject[3][1][6].subjectAbilityType = 3;
	subject[3][1][6].subjectAbilityPoint = 3;

	subject[3][1][7].subjectName = _T("���α׷��־�� ������Ʈ");
	subject[3][1][7].subjectAbilityType = 3;
	subject[3][1][7].subjectAbilityPoint = 3;

	subject[3][1][8].subjectName = _T("�ý��� ���α׷��� ������Ʈ");
	subject[3][1][8].subjectAbilityType = 3;
	subject[3][1][8].subjectAbilityPoint = 3;

	subject[3][1][9].subjectName = _T("��Ʈ��ũ ���α׷��� ������Ʈ");
	subject[3][1][9].subjectAbilityType = 3;
	subject[3][1][9].subjectAbilityPoint = 3;


	subject[3][2][1].subjectName = _T("����Ʈ���� �м� �� ����");
	subject[3][2][1].subjectAbilityType = 1;
	subject[3][2][1].subjectAbilityPoint = 3;

	subject[3][2][2].subjectName = _T("�����ͺ��̽� ����");
	subject[3][2][2].subjectAbilityType = 2;
	subject[3][2][2].subjectAbilityPoint = 3;

	subject[3][2][3].subjectName = _T("������ ���̾�");
	subject[3][2][3].subjectAbilityType = 2;
	subject[3][2][3].subjectAbilityPoint = 3;

	subject[3][2][4].subjectName = _T("�ü��");
	subject[3][2][4].subjectAbilityType = 2;
	subject[3][2][4].subjectAbilityPoint = 3;

	subject[3][2][5].subjectName = _T("��Ʈ��ũ ����");
	subject[3][2][5].subjectAbilityType = 1;
	subject[3][2][5].subjectAbilityPoint = 3;

	subject[3][2][6].subjectName = _T("������Ʈ2");
	subject[3][2][6].subjectAbilityType = 3;
	subject[3][2][6].subjectAbilityPoint = 3;

	subject[4][1][1].subjectName = _T("������ ��ǻ��");
	subject[4][1][1].subjectAbilityType = 2;
	subject[4][1][1].subjectAbilityPoint = 4;

	subject[4][1][2].subjectName = _T("��ǻ�� ����");
	subject[4][1][2].subjectAbilityType = 2;
	subject[4][1][2].subjectAbilityPoint = 4;

	subject[4][1][3].subjectName = _T("�����Ϸ�");
	subject[4][1][3].subjectAbilityType = 1;
	subject[4][1][3].subjectAbilityPoint = 4;

	subject[4][1][4].subjectName = _T("�Ӻ���� ����Ʈ����");
	subject[4][1][4].subjectAbilityType = 1;
	subject[4][1][4].subjectAbilityPoint = 4;

	subject[4][1][5].subjectName = _T("�ý��� ����");
	subject[4][1][5].subjectAbilityType = 1;
	subject[4][1][5].subjectAbilityPoint = 4;

	subject[4][1][6].subjectName = _T("ĸ���� ������1");
	subject[4][1][6].subjectAbilityType = 3;
	subject[4][1][6].subjectAbilityPoint = 4;

	subject[4][1][7].subjectName = _T("���� ������Ʈ1");
	subject[4][1][7].subjectAbilityType = 3;
	subject[4][1][7].subjectAbilityPoint = 4;

	subject[4][1][8].subjectName = _T("sw���Ͻ�1");
	subject[4][1][8].subjectAbilityType = 3;
	subject[4][1][8].subjectAbilityPoint = 4;


	subject[4][2][1].subjectName = _T("Ŭ���� ��ǻ��");
	subject[4][2][1].subjectAbilityType = 3;
	subject[4][2][1].subjectAbilityPoint = 4;

	subject[4][2][2].subjectName = _T("UI/UX ���� �� �ǽ�");
	subject[4][2][2].subjectAbilityType = 3;
	subject[4][2][2].subjectAbilityPoint = 4;

	subject[4][2][3].subjectName = _T("�ȷ�-�������Ƚǹ�");
	subject[4][2][3].subjectAbilityType = 1;
	subject[4][2][3].subjectAbilityPoint = 4;

	subject[4][2][4].subjectName = _T("Technoprenueur Lab");
	subject[4][2][4].subjectAbilityType = 3;
	subject[4][2][4].subjectAbilityPoint = 4;

	subject[4][2][5].subjectName = _T("SW ���Ͻ�2");
	subject[4][2][5].subjectAbilityType = 3;
	subject[4][2][5].subjectAbilityPoint = 4;
}

Enrollment::~Enrollment()
{
}

void Enrollment::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ENROLL_STR, enrollment_str);
	//	DDX_LBIndex(pDX, IDC_CART_LIST, cart_list);
	//	DDX_LBIndex(pDX, IDC_ENROLL_LIST, enroll_list);
	//DDX_CBString(pDX, IDC_SUBJECT_COMBO, subject_combo);
	//DDX_CBIndex(pDX, IDC_SUBJECT_COMBO, subject_combo);
	DDX_Control(pDX, IDC_SUBJECT_COMBO, subject_combo);
	DDX_Control(pDX, IDC_CART_LIST, cart_list);
	//DDX_Control(pDX, IDC_ENROLL_LIST, enroll_list);
	//DDX_LBIndex(pDX, IDC_ENROLL_LIST, enroll_list);
	DDX_Control(pDX, IDC_ENROLL_LIST, enroll_list);
}


BEGIN_MESSAGE_MAP(Enrollment, CDialog)
//	ON_CBN_EDITUPDATE(IDC_SUBJECT_COMBO, &Enrollment::OnCbnEditupdateSubjectCombo)
ON_BN_CLICKED(IDC_SUBJECT_SELECT, &Enrollment::OnBnClickedSubjectSelect)
ON_BN_CLICKED(IDC_ADD_BUTTON, &Enrollment::OnBnClickedAddButton)
END_MESSAGE_MAP()


// Enrollment �޽��� ó�����Դϴ�.


BOOL Enrollment::OnInitDialog()
{
	CDialog::OnInitDialog();

	if (grade == 1 && season == 1) 
		for (int i = 1; i <= sizeof(subject[1][1]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[1][1][i].subjectName);
	else if(grade==1 && season==2)
		for (int i = 1; i <= sizeof(subject[1][2]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[1][2][i].subjectName);
	else if (grade == 2 && season == 1)
		for (int i = 1; i <= sizeof(subject[2][1]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[2][1][i].subjectName);
	else if (grade == 2 && season == 2)
		for (int i = 1; i <= sizeof(subject[2][2]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[2][2][i].subjectName);
	else if (grade == 3 && season == 1)
		for (int i = 1; i <= sizeof(subject[3][1]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[3][1][i].subjectName);
	else if (grade == 3 && season == 2)
		for (int i = 1; i <= sizeof(subject[3][2]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[3][2][i].subjectName);
	else if (grade == 4 && season == 1)
		for (int i = 1; i <= sizeof(subject[4][1]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[4][1][i].subjectName);
	else if (grade == 4 && season == 2)
		for (int i = 1; i <= sizeof(subject[4][2]) / sizeof(Subject); i++)
			subject_combo.AddString(subject[4][2][i].subjectName);
	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void Enrollment::OnBnClickedSubjectSelect()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	int nIndex = subject_combo.GetCurSel();
	
	if (nIndex != LB_ERR) {
		CString str;
		subject_combo.GetLBText(nIndex, str);
		cart_list.AddString(str);
	}
}


void Enrollment::OnBnClickedAddButton()
{
	int nIndex = cart_list.GetCurSel();

	if (nIndex != LB_ERR) {
		CString str;
		cart_list.GetText(nIndex, str);
		cart_list.DeleteString(nIndex);
		cart_list.SetCurSel(nIndex);
		enroll_list.AddString(str);
	}
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}
