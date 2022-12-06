#include "CLadresse.h"

namespace Comp_Mappage
{
	//Définition des appels de procédure SQL

	System::String^ CLadresse::Insert()
	{
		return "EXECUTE InsAdresse @numero = " + this->getnumero() + ", @type_voie ='" + this->gettype_voie() + "', @nom_voie ='" + this->getnom_voie() + "', @code_postal = '" + this->getcode_postal() + "', @nomville = '" + this->getville() + "'";
	}

	System::String^ CLadresse::Select()
	{
		return "EXECUTE AffAdresse @id_adresse =" + this->getid_adresse();
	}

	System::String^ CLadresse::Update()
	{
		return "EXECUTE UpdAdresse @numero =" + this->getnumero() + ", @type_voie =" + this->gettype_voie() + ", @nom_voie =" + this->getnom_voie() + ", @code_postal = " + this->getcode_postal() + ", @id_liste_ville = " + this->getid_liste_ville();
	}

	//Définition des setters

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

	System::String^ CLadresse::getville(void)
	{
		return this->ville;
	}

	int CLadresse::getid_liste_ville(void)
	{
		return this->id_liste_ville;
	}

	System::String^ CLadresse::getcode_postal(void)
	{
		return this->code_postal;
	}
	System::String^ CLadresse::getnom_voie(void)
	{
		return this->nom_voie;
	}
	System::String^ CLadresse::gettype_voie(void)
	{
		return this->type_voie;
	}
	int CLadresse::getnumero(void)
	{
		return this->numero;
	}
	int CLadresse::getid_adresse(void)
	{
		return this->id_adresse;
	}
}