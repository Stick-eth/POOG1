#include "CLadresse.h"

// CA FONCTIONNE PAS
void CLadresse::setid_adresse(int newadr)
{
	this->id_adresse = newadr;
}

void CLadresse::setnumero(int newnum)
{
	this->numero = newnum;
}

void CLadresse::settype_voie(System::String newtype)
{
	this->type_voie = newtype;
}

void CLadresse::setnom_voie(System::String newnom)
{
	this->nom_voie = newnom;
}

void CLadresse::setcode_postal(System::String newcode) : code_postal(newcode) {}

void CLadresse::setid_liste_ville(int newidlist)
{
	this->id_liste_ville = newidlist;
}

void CLadresse::setville(System::String newville)
{
	this->ville = newville;
}