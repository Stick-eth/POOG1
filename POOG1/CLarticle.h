#pragma once
#include "CLmaps.h"

namespace Comp_Mappage
{
	ref class CLarticle :public CLmaps
	{
	private:
		int id_article;
		System::String reference;
		System::String designation;
		float prix;
		float quantite_stock;
		int seuil;
		// PAS SUR ENCORE int reduc_nombre;
		System::String unite;
		char couleur;
		System::String nature;
	public:
		// Déclaration des setters
		void setid_article(int);
		void setreference(System::String);
		void setdesignation(System::String);
		void setprix(float);
		void setquantite_stock(float);
		void setseuil(int);
		// PAS SUR ENCORE void setreduc(int);
		void setunite(System::String);
		void setcouleur(char);
		void setnature(System::String);
	};
}