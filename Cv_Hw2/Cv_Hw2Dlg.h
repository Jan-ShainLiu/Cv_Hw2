
// Cv_Hw2Dlg.h : ���Y��
//

#pragma once


// CCv_Hw2Dlg ��ܤ��
class CCv_Hw2Dlg : public CDialogEx
{
// �غc
public:
	CCv_Hw2Dlg(CWnd* pParent = NULL);	// �зǫغc�禡

// ��ܤ�����
	enum { IDD = IDD_CV_HW2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩


// �{���X��@
protected:
	HICON m_hIcon;

	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBackground();
	afx_msg void OnBnClickedPreprocessing();
	afx_msg void OnBnClickedTracking();
	afx_msg void OnBnClickedEigen();
	afx_msg void OnBnClickedRecognition();
	afx_msg void OnBnClickedDetection();
	afx_msg void OnBnClickedDetectionRecognition();
};
