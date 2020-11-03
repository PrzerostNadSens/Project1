#include "MyForm.h"

using namespace System;
//using namespace System::Windows::Forms;
using namespace Project1;

[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//szyfr::pole_glowne forma;
	Application::Run(gcnew MyForm());
	return 0;
}