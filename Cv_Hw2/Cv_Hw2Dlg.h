
// Cv_Hw2Dlg.h : 標頭檔
//

#pragma once


// CCv_Hw2Dlg 對話方塊
class CCv_Hw2Dlg : public CDialogEx
{
// 建構
public:
	CCv_Hw2Dlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_CV_HW2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
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
