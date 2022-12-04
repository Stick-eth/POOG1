#include "pch.h"

// CA FONCTIONNE PAS
namespace Comp_Mappage
{
	void CLadresse::setid_adresse(int newadr)
	{
		this->id_adresse = newadr;
	}

	void CLadresse::setnumero(int newnum)
	{
		this->numero = newnum;
	}

	void CLadresse::settype_voie(System::String^ newtype)
	{
		this->type_voie = newtype;
	}

	void CLadresse::setnom_voie(System::String^ newnom)
	{
		this->nom_voie = newnom;
	}

	void CLadresse::setcode_postal(System::String^ newcode)
	{
		this->code_postal = newcode;
	}

	void CLadresse::setid_liste_ville(int newidlist)
	{
		this->id_liste_ville = newidlist;
	}

	void CLadresse::setville(System::String^ newville)
	{
		this->ville = newville;
	}

	int CLadresse::getid_adresse(void)
	{
		return this->id_adresse;
	}

	int CLadresse::getnumero(void)
	{
		return this->numero;
	}

	System::String^ CLadresse::gettype_voie(void)
	{
		return this->type_voie;
	}

	System::String^ CLadresse::getnom_voie(void)
	{
		return this->nom_voie;
	}

	System::String^ CLadresse::getcode_postal(void)
	{
		return this->code_postal;
	}

	int CLadresse::getid_liste_ville(void)
	{
		return this->id_liste_ville;
	}

	System::String^ CLadresse::getville(void)
	{
		return this->ville;
	}

}