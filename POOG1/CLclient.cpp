#include "pch.h"

using namespace Comp_Mappage;

//Définition des setters

System::String^ CLclient::Select(void)
{
	// PROCEDURE STOCKEE
	return "";
}

System::String^ CLclient::Insert(void)
{
	// PROCEDURE STOCKEE
	return "";
}

System::String^ CLclient::Update(void)
{
	// PROCEDURE STOCKEE
	return "";
}

System::String^ CLclient::Delete(void)
{
	// PROCEDURE STOCKEE
	return "";
}

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
