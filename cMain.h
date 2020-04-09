#pragma once

#include <wx/clrpicker.h>
#include "wx/wx.h"
#include <string.h>
#include "stdlib.h"
#include <wx/listctrl.h>
#include <wx/string.h>


class cMain : public wxFrame 
{
public:
	cMain();
	~cMain();
public:
	

	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxStaticBitmap* image;
	LPCSTR html = "..\\Cryjaxx\\Cryjaxx.html";
	LPCSTR bimg = "..\\Cryjaxx\\Casino-love.jpg";
	wxListCtrl* playlist = nullptr;
	wxBrush* brush = nullptr;
	
	


private:
	void OnButton1(wxCommandEvent& evt);
	DECLARE_EVENT_TABLE();

};



