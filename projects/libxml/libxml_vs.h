// libxml.h : main header file for the libxml DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClibxmlApp
// See libxml.cpp for the implementation of this class
//

class ClibxmlApp : public CWinApp
{
public:
	ClibxmlApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
