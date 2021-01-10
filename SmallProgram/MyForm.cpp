#include "MyForm.h"
using namespace System::Windows::Forms;
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SmallProgram::MyForm form;
	Application::Run(% form);
	return 0;
}
