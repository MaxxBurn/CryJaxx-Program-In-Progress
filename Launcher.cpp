#include "Launcher.h"
#include <sstream>
wxIMPLEMENT_APP(Launcher);

Launcher::Launcher()
{

}
Launcher::~Launcher()
{

}
bool Launcher :: OnInit()
{	
	m_frame1 = new cMain();
	m_frame1->Show();
	return true;
}