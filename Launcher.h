#pragma once
#include "wx/wx.h"
#include "cMain.h"
#include "resource.h"


class Launcher : public wxApp
{
public:
	Launcher();
	~Launcher();
	
private:
	cMain* m_frame1 = nullptr;
public:
	virtual bool OnInit();
};

