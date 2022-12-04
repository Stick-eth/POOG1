#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLpersonnel : CLpersonne
	{
	private:
		int id_personnel;
		// year_month_day date_embauche;
		int id_superieur;
		int id_adresse;
	public:
		//Virtualisation et Constructeur
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;
		CLpersonnel(int, System::String^, System::String^, int, int, int);

		//déclaration setters
		void setid_personnel(int);
		//void setdate_embauche(std::chrono::year_month_day);
		void setid_superieur(int);
		void setid_adresse(int);

		//déclaration getters
		int getid_personnel(void);
		//int getdate_embauche(void);
		int getid_superieur(void);
		int getid_adresse(void);
	};
}

