// stream_out_mosaic_bridge.h : main header file for the stream_out_mosaic_bridge DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cstream_out_mosaic_bridgeApp
// See stream_out_mosaic_bridge.cpp for the implementation of this class
//

class Cstream_out_mosaic_bridgeApp : public CWinApp
{
public:
	Cstream_out_mosaic_bridgeApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
