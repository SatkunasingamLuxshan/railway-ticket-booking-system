#include "MyForm1.h"
using namespace::System;
using namespace::System::Windows::Forms;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	trainticket::MyForm1 form;
	Application::Run(% form);

}
