#include "pch.h"

namespace Comp_Mappage
{

	System::String^ CLpersonnel::Select(int id)
	{
		return "EXECUTE SelPersonnel @par1" + id;
	}

	System::String^ CLpersonnel::Insert(void)
	{
		return "EXECUTE InsPersonnel @nom " + this->getnom() + " @prenom " + this->getprenom() + " @id_personnel " + this->getid_personnel() + " @id_adresse " + this->getid_adresse() + " @id_superieur" + this->getid_superieur();
	}

	System::String^ CLpersonnel::Delete(int id)
	{
		return "EXECUTE SupprPersonnel @par1 " + id;
	}

	System::String^ CLpersonnel::Update()
	{
		return "";
	}



	CLpersonnel::CLpersonnel(int a, System::String^ b, System::String^ c, int d, int e, int f)
	{
		setid_personne(a);
		setnom(b);
		setprenom(c);
		setid_personnel(d);
		setid_adresse(e);
		setid_superieur(f);
	}

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

	//Définition des getters

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
}
