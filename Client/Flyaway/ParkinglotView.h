﻿#pragma once



// CParkinglotView 폼 보기

class CParkinglotView : public CFormView
{
	DECLARE_DYNCREATE(CParkinglotView)

protected:
	CParkinglotView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CParkinglotView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CParkinglotView };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString url;
	CComboBox m_Combo;
	CListCtrl m_ParkinglotListView;
	virtual void OnInitialUpdate();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnCbnSelchangeComboSend();
protected:
	afx_msg LRESULT OnDataUpdate(WPARAM wParam, LPARAM lParam);
};


