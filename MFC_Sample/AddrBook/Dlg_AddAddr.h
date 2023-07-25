#pragma once
#include "afxdialogex.h"


// CDlg_AddAddr 대화 상자

class CDlg_AddAddr : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg_AddAddr)

public:
	CDlg_AddAddr(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlg_AddAddr();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_ADDR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_ctrName;
	CEdit m_ctrPhone;
	CString m_strName;
	CString m_strPhone;
};
