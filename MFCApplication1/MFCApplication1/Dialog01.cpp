// Dialog01.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "Dialog01.h"
#include "afxdialogex.h"


// Dialog01 dialog

IMPLEMENT_DYNAMIC(Dialog01, CDialogEx)

Dialog01::Dialog01(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Dialog01::~Dialog01()
{
}

void Dialog01::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dialog01, CDialogEx)
	ON_NOTIFY(NM_CLICK, IDC_SYSLINK1, &Dialog01::OnNMClickSyslink1)
END_MESSAGE_MAP()


// Dialog01 message handlers


void Dialog01::OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult)
{
	PNMLINK pNMLink = (PNMLINK)pNMHDR;

	ShellExecuteW(NULL, L"open", L"https://www.google.com", NULL, NULL, SW_SHOWNORMAL);

	// TODO: Add your control notification handler code here
	*pResult = 0;

}
