
// SWStudentMakerView.h : CSWStudentMakerView 클래스의 인터페이스
//

#pragma once
#include "afxwin.h"
class Init;
class Enrollment;
class CSWStudentMakerView : public CFormView
{
protected: // serialization에서만 만들어집니다.
	CSWStudentMakerView();
	DECLARE_DYNCREATE(CSWStudentMakerView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SWSTUDENTMAKER_FORM };
#endif

// 특성입니다.
public:
	CSWStudentMakerDoc* GetDocument() const;
	int grade;
	int season;//학기
	int week;

	int health;
	int money;
	int sociality;

	int programming;
	int algorithm;
	int project;
	int math;
// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.

// 구현입니다.
public:
	virtual ~CSWStudentMakerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString semester_str;
//	int subject_combo;
	CButton subject_button;
	CButton parttime_button;
	CButton breaktime_button;
	CButton action_button;
	int schedule_list;
	CString health_str;
	CString money_str;
	//CStatic sociality_str;
	CString programming_str;
	CString algorithm_str;
	CString project_str;
	CString math_str;
	CStatic picture;
	CString name_str;
	CString gpa_str;
	CString speciality_str;
	CButton cancel_button;
	CString sociality_str;
	CComboBox subject_combo;
};

#ifndef _DEBUG  // SWStudentMakerView.cpp의 디버그 버전
inline CSWStudentMakerDoc* CSWStudentMakerView::GetDocument() const
   { return reinterpret_cast<CSWStudentMakerDoc*>(m_pDocument); }
#endif

