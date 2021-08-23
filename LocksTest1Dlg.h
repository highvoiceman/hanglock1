
// LocksTest1Dlg.h : header file
//

#pragma once


// CLocksTest1Dlg dialog
class CLocksTest1Dlg : public CDialogEx
{
// Construction
public:
	CLocksTest1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOCKSTEST1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	
public:
	CCriticalSection m_Lock;
	CMutex m_Mutex;
	afx_msg void OnLockClicked();
	afx_msg void OnLockInThread();
	HANDLE m_thread;
};
