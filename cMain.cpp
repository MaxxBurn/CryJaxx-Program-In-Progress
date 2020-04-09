#include "cMain.h"

BEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(wxID_ANY, cMain::OnButton1)
END_EVENT_TABLE()


cMain::cMain() :wxFrame(nullptr, wxID_ANY, "CryJaxx App", wxPoint(30, 30), wxSize(800, 600))
{
	//Creating background image
	wxPanel* panel = new wxPanel(this, wxID_ANY,wxPoint(0,0),wxSize(800,600));
	wxJPEGHandler* handler = new wxJPEGHandler;
	wxImage::AddHandler(handler);
	image = new wxStaticBitmap(panel, wxID_ANY, wxBitmap(bimg, wxBITMAP_TYPE_JPEG), wxPoint(0, 0), wxSize(800, 600));
	

	//Creating buttons
	m_btn1 = new wxButton(image, 101, "Our Website", wxPoint(10,10), wxSize(150,50),wxBORDER_NONE);
	m_btn2 = new wxButton(image, 102, "Paypal", wxPoint(680, 10), wxSize(100, 20),wxBORDER_NONE);
	m_btn3 = new wxButton(image, 103, "About Us", wxPoint(10, 500), wxSize(150, 50), wxBORDER_NONE);
	brush = new wxBrush( );
	m_btn1->SetBackgroundColour(*wxBLACK);
	m_btn2->SetBackgroundColour(*wxBLACK);
	m_btn3->SetBackgroundColour(*wxBLACK);
	m_btn1->SetForegroundColour(*wxWHITE);
	m_btn2->SetForegroundColour(*wxWHITE);
	m_btn3->SetForegroundColour(*wxWHITE);

	//Creating the playlist
	playlist = new wxListCtrl(image, 200, wxPoint(560, 250), wxSize(200, 300), wxLC_REPORT);
	wxListItem title, s2, s3;
	title.SetId(0);
	s2.SetId(1);
	s2.SetText(_("Song#1"));
	s3.SetId(2);
	title.SetText(_("Songs"));
	title.SetWidth(50);
	playlist->InsertColumn(0,title);
	playlist->InsertItem(s2);
	
}
cMain :: ~cMain()	
{
}
void cMain::OnButton1(wxCommandEvent& evt)
{
	
	switch (evt.GetId())
	{
	case 101:
		ShellExecuteA(NULL, "open", "https://cryjaxx.com/", NULL, NULL, SW_SHOWNORMAL);
		break;
	case 102:
		ShellExecuteA(NULL, "open", "https://www.paypal.me/CryJaxx", NULL, NULL, SW_SHOWNORMAL);

	case 103:
		ShellExecuteA(NULL, "open", html, NULL, NULL, SW_SHOWNORMAL);
		break;
	}
	
}




