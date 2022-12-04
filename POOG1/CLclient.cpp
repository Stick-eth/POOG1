#include "pch.h"

using namespace Comp_Mappage;

//Défintion des appels de procédures stockées

System::String^ CLclient::Select(void)
{
	return "EXECUTE SelClient @id_personne " + this->getid_personne();
}

System::String^ CLclient::Insert(void)
{
	return "EXECUTE InsClient @nom " + this->getnom() + " @prenom " + this->getprenom() + " @date_naissance " + this->getdaten() + " @id_adresse " + this->getid_adressef() + " @id_adresse_1 " + this->getid_adressel() + " @email " + this->getemail();
}

System::String^ CLclient::Update(void)
{
	return "EXECUTE UpdClient @id_personne " + this->getid_personne() + " @date " + this->getdaten() + " @id_adresse " + this->getid_adressef() + " @id_adresse_1 " + this->getid_adressel() + " @prenom " + this->getprenom() + " @nom " + this->getnom() + " @email " + this->getemail();
}

System::String^ CLclient::Delete(void)
{
	return "EXECUTE SupprClient @par1" + this->getid_client();
}

//Définition des setters

void CLclient::setid_client(int newid)
{
	this->id_client = newid;
}

void CLclient::setid_adressef(int newadressef)
{
	this->id_adressef = newadressef;
}

void CLclient::setid_adressel(int newadressel)
{
	this->id_adressel = newadressel;
}

void Comp_Mappage::CLclient::setdaten(System::String^ newdate)
{
	this->daten = newdate;
}

//Définition des getters

int CLclient::getid_client(void)
{
	return this->id_client;
}

int CLclient::getid_adressef(void)
{
	return this->id_adressef;
}

int CLclient::getid_adressel(void)
{
	return this->id_adressel;
}

System::String^ Comp_Mappage::CLclient::getdaten(void)
{
	return this->daten;
}
