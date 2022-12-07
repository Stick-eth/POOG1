#pragma once
#include "CLmaps.h"

namespace Comp_Mappage
{
	ref class CLarticle:public CLmaps
	{
	private:
		int id_article;
		System::String^ reference;
		System::String^ designation;
		float prix;
		float quantite_stock;
		int seuil;
		int reduc_nombre;
		int id_unite;
		int id_couleur;
		int id_nature;
	public:
		//Déclaration des procédures SQL
		virtual System::String^ Insert() override;
		virtual System::String^ Select() override;
		virtual System::String^ Delete() override;
		virtual System::String^ Update() override;

		// Déclaration des setters
		void setid_article(int);
		void setreference(System::String^);
		void setdesignation(System::String^);
		void setprix(float);
		void setquantite(float);
		void setseuil(int);
		void setreduc(int);
		void setunite(int);
		void setcouleur(int);
		void setnature(int);

		//Déclaration des getters
		int getid_article(void);
		System::String^ getreference(void);
		System::String^ getdesignation(void);
		float getprix(void);
		float getquantite(void);
		int getseuil(void);
		int getreduc(void);
		int getunite(void);
		int getcouleur(void);
		int getnature(void);
	};
}