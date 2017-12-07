
// SWStudentMakerView.h : CSWStudentMakerView Ŭ������ �������̽�
//

#pragma once
#include "afxwin.h"
class Init;
class Enrollment;
class CSWStudentMakerView : public CFormView
{
protected: // serialization������ ��������ϴ�.
	CSWStudentMakerView();
	DECLARE_DYNCREATE(CSWStudentMakerView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_SWSTUDENTMAKER_FORM };
#endif

// Ư���Դϴ�.
public:
	CSWStudentMakerDoc* GetDocument() const;
	int grade;
	int season;//�б�
	int week;

	int health;
	int money;
	int sociality;

	int programming;
	int algorithm;
	int project;
	int math;
// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.

// �����Դϴ�.
public:
	virtual ~CSWStudentMakerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
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

#ifndef _DEBUG  // SWStudentMakerView.cpp�� ����� ����
inline CSWStudentMakerDoc* CSWStudentMakerView::GetDocument() const
   { return reinterpret_cast<CSWStudentMakerDoc*>(m_pDocument); }
#endif

