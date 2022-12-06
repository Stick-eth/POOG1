#include "pch.h"
#include "CLpersonne.h"

namespace Comp_Mappage
{
	System::String^ CLpersonne::Select(void)
	{
		return "Rien";
	}

	System::String^ CLpersonne::Update(void)
	{
		return "Rien";
	}


	System::String^ CLpersonne::Delete(void)
	{
		return "Rien";
	}

	System::String^ CLpersonne::Insert(void)
	{
		return "Rien";
	}

	CLpersonne::CLpersonne()
	{
		setnom("test");
		setprenom("test");
		setemail("test");
	}
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

	void CLpersonne::setemail(System::String^ newemail)
	{
		this->email = newemail;
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
	System::String^ CLpersonne::getemail(void)
	{
		return this->email;
	}
}