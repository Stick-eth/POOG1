#include "MyForm.h"

// Je fais juste un test pour voir le pull request

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    POOG1::MyForm form;
    Application::Run(% form);
}

void POOG1::MyForm::AjouterTexteCombobox()
{
    this->comboBox1->BeginUpdate();
    for (int i = 0; i < 20; i++) {

    }
    this->comboBox1->EndUpdate();
}
