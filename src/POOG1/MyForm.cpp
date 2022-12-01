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
    this->oDs = this->oSvc->voirListeLogin();
    this->comboBox1->BeginUpdate();
    for (int i = 0; i < this->oDs->Tables["Rsl"]->Rows->Count; i++) {
        this->comboBox1->Items->Add(this->oDs->Tables["Rsl"]->Rows[i]->ItemArray[0]);
        //pas fini on met que 1 info dans la combobox il faudrai en mettre plusieur
    }
    this->comboBox1->EndUpdate();
}
