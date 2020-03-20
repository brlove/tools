
// MourseButtonDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMourseButtonDlg �Ի���
class CMourseButtonDlg : public CDialogEx
{
// ����
public:
	CMourseButtonDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOURSEBUTTON_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void StartMouseClick();
    afx_msg void StopMouseClick();
    afx_msg void GetMousePointerAsScreen();
    afx_msg LONG OnHotKey(WPARAM wPARAM, LPARAM lPARAM);
    afx_msg void OnBnClickedRecord();
    afx_msg void OnBnClickedClear();
public:
    HANDLE m_hButton;
    DWORD m_dwThreadId;
    CList<CPoint> m_lstPoint; //��¼����
    DWORD m_dwSleep;
    CButton m_edtInfo;
    BOOL m_cbWhile;
};
