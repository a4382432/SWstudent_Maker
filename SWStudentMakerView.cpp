
// SWStudentMakerView.cpp : CSWStudentMakerView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "SWStudentMaker.h"
#endif

#include "SWStudentMakerDoc.h"
#include "SWStudentMakerView.h"
#include "Enrollment.h"
#include "Init.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSWStudentMakerView

IMPLEMENT_DYNCREATE(CSWStudentMakerView, CFormView)

BEGIN_MESSAGE_MAP(CSWStudentMakerView, CFormView)
END_MESSAGE_MAP()

// CSWStudentMakerView 생성/소멸

CSWStudentMakerView::CSWStudentMakerView()
	: CFormView(IDD_SWSTUDENTMAKER_FORM)
	, semester_str(_T(""))
	, subject_combo(0)
	, schedule_list(0)
	, health_str(_T(""))
	, money_str(_T(""))
	, programming_str(_T(""))
	, algorithm_str(_T(""))
	, project_str(_T(""))
	, math_str(_T(""))
	, name_str(_T(""))
	, gpa_str(_T(""))
	, speciality_str(_T(""))
	, sociality_str(_T(""))
{
	// TODO: 여기에 생성 코드를 추가합니다.
	Enrollment enrollment;
	Init init;
	int result = init.DoModal();//이름 받고 정/수시에 따라 기본 능력이 다름
	int result2 = enrollment.DoModal();//다이얼로그 확인만 하는용...
	CString semester;
	
	grade = 1;
	season = 1;
	week = 1;
	
	health = 100;
	money = 100;
	sociality = 100;
	

	programming = 50;
	algorithm = 50;
	project = 50;
	math = 50;

	CString name=init.name_str;
	name_str.Format(_T("이름: %s"), name);
	
	semester.Format(_T("%d학년 %d학기 %d주차"), grade, season, week);
	semester_str = semester;
	
	health_str.Format(_T("체력: %d"), health);
	money_str.Format(_T("돈: %d"), money);
	sociality_str.Format(_T("사회성: %d"), sociality);
	programming_str.Format(_T("프로그래밍: %d"), programming);
	algorithm_str.Format(_T("알고리즘: %d"), algorithm);
	project_str.Format(_T("프로젝트: %d"), project);
	math_str.Format(_T("수학: %d"), math);
}

CSWStudentMakerView::~CSWStudentMakerView()
{
}

void CSWStudentMakerView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_SEMESTER, semester_str);
	DDX_CBIndex(pDX, IDC_SUBJECT_COMBO, subject_combo);
	DDX_Control(pDX, IDC_SUBJECT_SELECT, subject_button);
	DDX_Control(pDX, IDC_PARTTIME, parttime_button);
	DDX_Control(pDX, IDC_BREAKTIME, breaktime_button);
	DDX_Control(pDX, IDC_ACTION, action_button);
	DDX_LBIndex(pDX, IDC_SCHEDULE, schedule_list);
	DDX_Text(pDX, IDC_HEALTH, health_str);
	DDX_Text(pDX, IDC_MONEY, money_str);
	//DDX_Control(pDX, IDC_SOCIALITY, sociality_str);
	DDX_Text(pDX, IDC_PROGRAMMING, programming_str);
	DDX_Text(pDX, IDC_ALGORITHM, algorithm_str);
	DDX_Text(pDX, IDC_PROJECT, project_str);
	DDX_Text(pDX, IDC_MATH, math_str);
	DDX_Control(pDX, IDC_PICTURE, picture);
	DDX_Text(pDX, IDC_NAME, name_str);
	DDX_Text(pDX, IDC_GPA, gpa_str);
	DDX_Text(pDX, IDC_SPECIALITY, speciality_str);
	DDX_Control(pDX, IDC_CANCEL, cancel_button);
	DDX_Text(pDX, IDC_SOCIALITY, sociality_str);
}

BOOL CSWStudentMakerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CFormView::PreCreateWindow(cs);
}

void CSWStudentMakerView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
	Init init;
	
}


// CSWStudentMakerView 진단

#ifdef _DEBUG
void CSWStudentMakerView::AssertValid() const
{
	CFormView::AssertValid();
}

void CSWStudentMakerView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CSWStudentMakerDoc* CSWStudentMakerView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSWStudentMakerDoc)));
	return (CSWStudentMakerDoc*)m_pDocument;
}
#endif //_DEBUG


// CSWStudentMakerView 메시지 처리기
