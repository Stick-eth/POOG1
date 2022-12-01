#include "pch.h"
#include "CLmap.h"

System::String^ NS_Comp_Mappage::CLmap::Select(void)
{
	return "SELECT * FROM [bdd_projet].[dbo].[users]";
}
System::String^ NS_Comp_Mappage::CLmap::Insert(void)
{
	return "";
	//INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');
}
System::String^ NS_Comp_Mappage::CLmap::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmap::Update(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmap::SelectLogin(void)
{
	return "SELECT [login],[mdp],[departement] FROM [bdd_projet].[dbo].[users]";
}
System::String^ NS_Comp_Mappage::CLmap::InsertLogin()
{
	return "INSERT INTO [bdd_projet].[dbo].[users] (login, mdp, departement) VALUES('" + this->login + "','" + this->mdp + "', 12) ";
}
System::String^ NS_Comp_Mappage::CLmap::Selectconnection()
{
	return "SELECT [departement] FROM [bdd_projet].[dbo].[users] WHERE [login]='"+this->login+"' AND [mdp]='"+this->mdp+"'";
}
System::String^ NS_Comp_Mappage::CLmap::NombreLigne(void)
{
	return "SELECT COUNT(*) FROM [bdd_projet].[dbo].[users]";
}
void NS_Comp_Mappage::CLmap::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmap::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmap::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmap::setLogin(System::String^ login)
{
	this->login = login;
}
void NS_Comp_Mappage::CLmap::setMdp(System::String^ mdp)
{
	this->mdp = mdp;
}
int NS_Comp_Mappage::CLmap::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmap::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmap::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmap::getLogin(void) { return this->login; }
System::String^ NS_Comp_Mappage::CLmap::getMdp(void) { return this->mdp; }