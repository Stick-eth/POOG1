#include "pch.h"

namespace Comp_Mappage
{
	void CLpersonne::setid_personne(int newid)
	{
		this->id_personne = newid;
	}

	void CLpersonne::setnom(System::String^ newname)
	{
		this->nom = newname;
	}

	void CLpersonne::setprenom(System::String^ newsurname)
	{
		this->prenom = newsurname;
	}

	int CLpersonne::getid_personne(void)
	{
		return this->id_personne;
	}

	System::String^ CLpersonne::getnom(void)
	{
		return this->nom;
	}

	System::String^ CLpersonne::getprenom(void)
	{
		return this->prenom;
	}
}