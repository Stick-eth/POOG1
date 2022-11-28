#include <MyForm.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //POOG1 is your project name
    POOG1::MyForm form;
    Application::Run(% form);
}