// CDlg_AddAddr.cpp: 구현 파일
//

#include "pch.h"
#include "AddrBook.h"
#include "afxdialogex.h"
#include "Dlg_AddAddr.h"


// CDlg_AddAddr 대화 상자

IMPLEMENT_DYNAMIC(CDlg_AddAddr, CDialogEx)

CDlg_AddAddr::CDlg_AddAddr(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ADD_ADDR, pParent)
	, m_strName(_T(""))
	, m_strPhone(_T(""))
{

}

CDlg_AddAddr::~CDlg_AddAddr()
{
}

void CDlg_AddAddr::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_NAME, m_ctrName);
	DDX_Control(pDX, IDC_EDIT_PHONE, m_ctrPhone);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strName);
	DDX_Text(pDX, IDC_EDIT_PHONE, m_strPhone);
}


BEGIN_MESSAGE_MAP(CDlg_AddAddr, CDialogEx)
END_MESSAGE_MAP()


// CDlg_AddAddr 메시지 처리기
