#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm2 form;
	Application::Run(%form);
	Environment::Exit(0);
}
