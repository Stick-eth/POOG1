#include "CLpersonnel.h"

//D�finition des setters

void CLpersonnel::setid_personnel(int newid)
{
	this->id_personnel = newid;
}

void CLpersonnel::setid_superieur(int newid)
{
	this->id_superieur = newid;
}

void CLpersonnel::setid_adresse(int newid)
{
	this->id_adresse = newid;
}

//D�finition des getters

int CLpersonnel::getid_personnel()
{
	return this->id_personnel;
}

int CLpersonnel::getid_superieur()
{
	return this->id_superieur;
}

int CLpersonnel::getid_adresse()
{
	return this->id_adresse;
}

