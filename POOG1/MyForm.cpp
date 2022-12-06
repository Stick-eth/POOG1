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
