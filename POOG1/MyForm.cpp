#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


void IHMPROJETPOO::MyForm::CacherTab()
{
    this->TabcontrolGestionClient->Visible = false;
    this->TabcontrolGestionPersonnel->Visible = false;
    this->TabcontrolGestionArticle->Visible = false;
    this->TabcontrolGestionCommande->Visible = false;
}

void IHMPROJETPOO::MyForm::AfficherTabClient()
{
    this->TabcontrolGestionClient->Visible = true;
}

void IHMPROJETPOO::MyForm::AfficherTabPersonnel()
{
    this->TabcontrolGestionPersonnel->Visible = true;
}

void IHMPROJETPOO::MyForm::AfficherTabArticle()
{
    this->TabcontrolGestionArticle->Visible = true;
}

void IHMPROJETPOO::MyForm::AfficherTabCommande()
{
    this->TabcontrolGestionCommande->Visible = true;
}

void IHMPROJETPOO::MyForm::AjouterTexteComboBox(System::Windows::Forms::ComboBox^ ListeDeroulante, System::Data::DataSet^ comboset)
{

    this->oDs = comboset;

    ListeDeroulante->BeginUpdate();
    for (int i = 0; i < this->oDs->Tables["listeCombobox"]->Rows->Count; i++) {
        System::String^ tmp = "";
        for (int j = 0; j < this->oDs->Tables["listeCombobox"]->Columns->Count; j++)
            tmp = tmp + this->oDs->Tables["listeCombobox"]->Rows[i]->ItemArray[j]->ToString()+" ";
        
        ListeDeroulante->Items->Add(tmp);
        //fonctionne mais c'est un format de naze
    }
    ListeDeroulante->EndUpdate();
}
