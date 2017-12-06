// Enrollment.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "SWStudentMaker.h"
#include "Enrollment.h"
#include "afxdialogex.h"

// Enrollment 대화 상자입니다.

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
	
	//타입넘버: 플밍 1, 알고 2, 플젝 3, 수학 4
	//능력치 : 학년이랑 같음 2학년이면 +2
	subject[1][1][1].subjectName = _T("확률과 통계");
	subject[1][1][1].subjectAbilityType = 4;
	subject[1][1][1].subjectAbilityPoint = 1;

	subject[1][1][2].subjectName = _T("프로그래밍 기초 및 실습");
	subject[1][1][2].subjectAbilityType = 1;
	subject[1][1][2].subjectAbilityPoint = 1;

	subject[1][1][3].subjectName = _T("리눅스 시스템 관리");
	subject[1][1][3].subjectAbilityType = 2;
	subject[1][1][3].subjectAbilityPoint = 1;

	subject[1][1][4].subjectName = _T("계산기 만들기");
	subject[1][1][4].subjectAbilityType = 3;
	subject[1][1][4].subjectAbilityPoint = 1;

	subject[1][2][1].subjectName = _T("이산수학");
	subject[1][2][1].subjectAbilityType = 4;
	subject[1][2][1].subjectAbilityPoint = 1;

	subject[1][2][2].subjectName = _T("프로그래밍 응용 및 실습");
	subject[1][2][2].subjectAbilityType = 1;
	subject[1][2][2].subjectAbilityPoint = 1;

	subject[1][2][3].subjectName=_T("창의적 공학설계");
	subject[1][2][3].subjectAbilityType = 3;
	subject[1][2][3].subjectAbilityPoint = 1;

	subject[1][2][4].subjectName = _T("파일시스템 만들기");
	subject[1][2][4].subjectAbilityType = 3;
	subject[1][2][4].subjectAbilityPoint = 1;


	subject[2][1][1].subjectName = _T("선형대수");
	subject[2][1][1].subjectAbilityType = 4;
	subject[2][1][1].subjectAbilityPoint = 2;

	subject[2][1][2].subjectName = _T("객체지향 프로그래밍 및 실습");
	subject[2][1][2].subjectAbilityType = 1;
	subject[2][1][2].subjectAbilityPoint = 2;

	subject[2][1][3].subjectName = _T("자료구조");
	subject[2][1][3].subjectAbilityType = 2;
	subject[2][1][3].subjectAbilityPoint = 2;

	subject[2][1][4].subjectName = _T("컴퓨터구조");
	subject[2][1][4].subjectAbilityType = 2;
	subject[2][1][4].subjectAbilityPoint = 2;

	subject[2][1][5].subjectName = _T("그림판 만들기");
	subject[2][1][5].subjectAbilityType = 3;
	subject[2][1][5].subjectAbilityPoint = 2;


	subject[2][2][1].subjectName = _T("고급 컴퓨터 수학");
	subject[2][2][1].subjectAbilityType = 4;
	subject[2][2][1].subjectAbilityPoint = 2;

	subject[2][2][2].subjectName = _T("윈도우 프로그래밍 및 실습");
	subject[2][2][2].subjectAbilityType = 1;
	subject[2][2][2].subjectAbilityPoint = 2;

	subject[2][2][3].subjectName = _T("알고리즘");
	subject[2][2][3].subjectAbilityType = 2;
	subject[2][2][3].subjectAbilityPoint = 2;

	subject[2][2][4].subjectName = _T("데이터 통신과 네트워크");
	subject[2][2][4].subjectAbilityType = 2;
	subject[2][2][4].subjectAbilityPoint = 2;

	subject[2][2][5].subjectName = _T("MFC프로그램 제작");
	subject[2][2][5].subjectAbilityType = 3;
	subject[2][2][5].subjectAbilityPoint = 2;

	subject[3][1][1].subjectName = _T("소프트웨어공학");
	subject[3][1][1].subjectAbilityType = 4;
	subject[3][1][1].subjectAbilityPoint = 3;

	subject[3][1][1].subjectName = _T("데이터베이스");
	subject[3][1][1].subjectAbilityType = 2;
	subject[3][1][1].subjectAbilityPoint = 3;

	subject[3][1][2].subjectName = _T("인공지능");
	subject[3][1][2].subjectAbilityType = 2;
	subject[3][1][2].subjectAbilityPoint = 3;

	subject[3][1][3].subjectName = _T("프로그래밍언어");
	subject[3][1][3].subjectAbilityType = 1;
	subject[3][1][3].subjectAbilityPoint = 3;

	subject[3][1][4].subjectName = _T("시스템 프로그래밍");
	subject[3][1][4].subjectAbilityType = 1;
	subject[3][1][4].subjectAbilityPoint = 3;

	subject[3][1][5].subjectName = _T("네트워크 프로그래밍");
	subject[3][1][5].subjectAbilityType = 1;
	subject[3][1][5].subjectAbilityPoint = 3;

	subject[3][1][6].subjectName = _T("프로젝트1");
	subject[3][1][6].subjectAbilityType = 3;
	subject[3][1][6].subjectAbilityPoint = 3;

	subject[3][1][7].subjectName = _T("프로그래밍언어 프로젝트");
	subject[3][1][7].subjectAbilityType = 3;
	subject[3][1][7].subjectAbilityPoint = 3;

	subject[3][1][8].subjectName = _T("시스템 프로그래밍 프로젝트");
	subject[3][1][8].subjectAbilityType = 3;
	subject[3][1][8].subjectAbilityPoint = 3;

	subject[3][1][9].subjectName = _T("네트워크 프로그래밍 프로젝트");
	subject[3][1][9].subjectAbilityType = 3;
	subject[3][1][9].subjectAbilityPoint = 3;


	subject[3][2][1].subjectName = _T("소프트웨어 분석 및 설계");
	subject[3][2][1].subjectAbilityType = 1;
	subject[3][2][1].subjectAbilityPoint = 3;

	subject[3][2][2].subjectName = _T("데이터베이스 응용");
	subject[3][2][2].subjectAbilityType = 2;
	subject[3][2][2].subjectAbilityPoint = 3;

	subject[3][2][3].subjectName = _T("데이터 사이언스");
	subject[3][2][3].subjectAbilityType = 2;
	subject[3][2][3].subjectAbilityPoint = 3;

	subject[3][2][4].subjectName = _T("운영체제");
	subject[3][2][4].subjectAbilityType = 2;
	subject[3][2][4].subjectAbilityPoint = 3;

	subject[3][2][5].subjectName = _T("네트워크 보안");
	subject[3][2][5].subjectAbilityType = 1;
	subject[3][2][5].subjectAbilityPoint = 3;

	subject[3][2][6].subjectName = _T("프로젝트2");
	subject[3][2][6].subjectAbilityType = 3;
	subject[3][2][6].subjectAbilityPoint = 3;

	subject[4][1][1].subjectName = _T("빅데이터 컴퓨팅");
	subject[4][1][1].subjectAbilityType = 2;
	subject[4][1][1].subjectAbilityPoint = 4;

	subject[4][1][2].subjectName = _T("컴퓨터 비전");
	subject[4][1][2].subjectAbilityType = 2;
	subject[4][1][2].subjectAbilityPoint = 4;

	subject[4][1][3].subjectName = _T("컴파일러");
	subject[4][1][3].subjectAbilityType = 1;
	subject[4][1][3].subjectAbilityPoint = 4;

	subject[4][1][4].subjectName = _T("임베디드 소프트웨어");
	subject[4][1][4].subjectAbilityType = 1;
	subject[4][1][4].subjectAbilityPoint = 4;

	subject[4][1][5].subjectName = _T("시스템 보안");
	subject[4][1][5].subjectAbilityType = 1;
	subject[4][1][5].subjectAbilityPoint = 4;

	subject[4][1][6].subjectName = _T("캡스톤 디자인1");
	subject[4][1][6].subjectAbilityType = 3;
	subject[4][1][6].subjectAbilityPoint = 4;

	subject[4][1][7].subjectName = _T("산학 프로젝트1");
	subject[4][1][7].subjectAbilityType = 3;
	subject[4][1][7].subjectAbilityPoint = 4;

	subject[4][1][8].subjectName = _T("sw인턴십1");
	subject[4][1][8].subjectAbilityType = 3;
	subject[4][1][8].subjectAbilityPoint = 4;


	subject[4][2][1].subjectName = _T("클라우드 컴퓨팅");
	subject[4][2][1].subjectAbilityType = 3;
	subject[4][2][1].subjectAbilityPoint = 4;

	subject[4][2][2].subjectName = _T("UI/UX 설계 및 실습");
	subject[4][2][2].subjectAbilityType = 3;
	subject[4][2][2].subjectAbilityPoint = 4;

	subject[4][2][3].subjectName = _T("안랩-정보보안실무");
	subject[4][2][3].subjectAbilityType = 1;
	subject[4][2][3].subjectAbilityPoint = 4;

	subject[4][2][4].subjectName = _T("Technoprenueur Lab");
	subject[4][2][4].subjectAbilityType = 3;
	subject[4][2][4].subjectAbilityPoint = 4;

	subject[4][2][5].subjectName = _T("SW 인턴십2");
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


// Enrollment 메시지 처리기입니다.


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
	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void Enrollment::OnBnClickedSubjectSelect()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
