#pragma once
#include "afxwin.h"


// Enrollment 대화 상자입니다.
struct Subject {
	CString subjectName;
	int subjectAbilityType; // 플밍, 알고, 플젝, 수학 중 어느타입인지
	int subjectAbilityPoint; // 타입에 대해 몇 포인트 플러스되는지
};
class Enrollment : public CDialog
{
	DECLARE_DYNAMIC(Enrollment)

public:
	Enrollment(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Enrollment();
	int grade;
	int season;
	Subject subject[5][3][10];
	
	//CString subject[5][3][10];//4학년2학기10과목
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString enrollment_str;
//	int cart_list;

	virtual BOOL OnInitDialog();
	//CString subject_combo;
	//int subject_combo;
//	afx_msg void OnCbnEditupdateSubjectCombo();
	CComboBox subject_combo;
	afx_msg void OnBnClickedSubjectSelect();
	CListBox cart_list;
	afx_msg void OnBnClickedAddButton();
//	CListBox enroll_list;
	//int enroll_list;
	CListBox enroll_list;
};
