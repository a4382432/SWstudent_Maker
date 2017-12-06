
// SWStudentMakerView.cpp : CSWStudentMakerView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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

// CSWStudentMakerView ����/�Ҹ�

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
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	Enrollment enrollment;
	Init init;
	int result = init.DoModal();//�̸� �ް� ��/���ÿ� ���� �⺻ �ɷ��� �ٸ�
	int result2 = enrollment.DoModal();//���̾�α� Ȯ�θ� �ϴ¿�...
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
	name_str.Format(_T("�̸�: %s"), name);
	
	semester.Format(_T("%d�г� %d�б� %d����"), grade, season, week);
	semester_str = semester;
	
	health_str.Format(_T("ü��: %d"), health);
	money_str.Format(_T("��: %d"), money);
	sociality_str.Format(_T("��ȸ��: %d"), sociality);
	programming_str.Format(_T("���α׷���: %d"), programming);
	algorithm_str.Format(_T("�˰���: %d"), algorithm);
	project_str.Format(_T("������Ʈ: %d"), project);
	math_str.Format(_T("����: %d"), math);
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
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CFormView::PreCreateWindow(cs);
}

void CSWStudentMakerView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
	Init init;
	
}


// CSWStudentMakerView ����

#ifdef _DEBUG
void CSWStudentMakerView::AssertValid() const
{
	CFormView::AssertValid();
}

void CSWStudentMakerView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CSWStudentMakerDoc* CSWStudentMakerView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSWStudentMakerDoc)));
	return (CSWStudentMakerDoc*)m_pDocument;
}
#endif //_DEBUG


// CSWStudentMakerView �޽��� ó����
