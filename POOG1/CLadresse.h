#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLadresse
	{
	private:
		int id_adresse;
		int numero;
		System::String^ type_voie;
		System::String^ nom_voie;
		System::String^ code_postal;
		int id_liste_ville;
		System::String^ ville;
	public:
		//Déclaration des setters
		void setid_adresse(int);
		void setnumero(int);
		void settype_voie(System::String^);
		void setnom_voie(System::String^);
		void setcode_postal(System::String^);
		void setid_liste_ville(int);
		void setville(System::String^);
		//Déclaration des getters
		int getid_adresse(void);
		int getnumero(void);
		System::String^ gettype_voie(void);
		System::String^ getnom_voie(void);
		System::String^ getcode_postal(void);
		int getid_liste_ville(void);
		System::String^ getville(void);
	};
}

