
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
        System::String^ tmp = "";
        for (int j = 0; j < this->oDs->Tables["Rsl"]->Columns->Count; j++)
            tmp = tmp + this->oDs->Tables["Rsl"]->Rows[i]->ItemArray[j]->ToString();

        this->comboBox1->Items->Add(tmp);
        //fonctionne mais c'est un format de naze
    }
    this->comboBox1->EndUpdate();
}
