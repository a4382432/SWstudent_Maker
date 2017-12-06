#pragma once
#include "afxwin.h"


// Enrollment ��ȭ �����Դϴ�.
struct Subject {
	CString subjectName;
	int subjectAbilityType; // �ù�, �˰�, ����, ���� �� ���Ÿ������
	int subjectAbilityPoint; // Ÿ�Կ� ���� �� ����Ʈ �÷����Ǵ���
};
class Enrollment : public CDialog
{
	DECLARE_DYNAMIC(Enrollment)

public:
	Enrollment(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Enrollment();
	int grade;
	int season;
	Subject subject[5][3][10];
	
	//CString subject[5][3][10];//4�г�2�б�10����
// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

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
