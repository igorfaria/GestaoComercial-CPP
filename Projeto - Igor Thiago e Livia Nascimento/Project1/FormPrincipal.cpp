#pragma 
#include "FormPrincipal.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ args)
{
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::FormPrincipal form;
	Application::Run(%form);

	return 0;
}