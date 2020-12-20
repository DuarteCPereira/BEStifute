
// QueryEx.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CQueryExApp:
// See QueryEx.cpp for the implementation of this class
//

class CQueryExApp : public CWinApp
{
public:
	CQueryExApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CQueryExApp theApp;
