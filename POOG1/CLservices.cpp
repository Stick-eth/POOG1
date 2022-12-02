#include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapp = gcnew NS_Comp_Mappage::CLmap();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapp->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMapp->setNom(nom);
	this->oMapp->setPrenom(prenom);
	sql = this->oMapp->Insert();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::voirListeLogin()
{
	System::String^ sql;

	sql = this->oMapp->SelectLogin();
	return this->oCad->getRows(sql, "Rsl");
}

void NS_Comp_Svc::CLservices::ajouterLogin(System::String^login, System::String^mdp)
{
	System::String^ sql;

	this->oMapp->setLogin(login);
	this->oMapp->setMdp(mdp);

	sql = this->oMapp->InsertLogin();
	this->oCad->actionRows(sql);
}


System::Data::DataSet^ NS_Comp_Svc::CLservices::seConnecter(System::String^ login, System::String^ mdp)
{
	System::String^ sql;

	this->oMapp->setLogin(login);
	this->oMapp->setMdp(mdp);

	sql = this->oMapp->Selectconnection();
	return this->oCad->getRows(sql, "Rsl");
}



