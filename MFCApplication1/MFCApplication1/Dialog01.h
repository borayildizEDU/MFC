#pragma once


// Dialog01 dialog

class Dialog01 : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog01)

public:
	Dialog01(CWnd* pParent = NULL);   // standard constructor
	virtual ~Dialog01();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult);
};
