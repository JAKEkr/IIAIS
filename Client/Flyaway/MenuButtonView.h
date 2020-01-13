﻿#pragma once


#include "MainFrm.h"

// CMenuButtonView 폼 보기

class CMenuButtonView : public CFormView
{
	DECLARE_DYNCREATE(CMenuButtonView)

protected:
	CMenuButtonView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CMenuButtonView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MenuButtonView };
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
	CMainFrame* m_pMainFrame;

	virtual void OnInitialUpdate();
	afx_msg void OnBnClickedHomebutton();
	afx_msg void OnBnClickedFlightinfobutton();
	afx_msg void OnBnClickedFacilitybutton();
	afx_msg void OnBnClickedParkinglotbutton();
	afx_msg void OnBnClickedClosebutton();
};


