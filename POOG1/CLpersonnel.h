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
		System::String^ mdp;
		int id_role;
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
		void setmdp(System::String^);
		void setid_role(int);
		void setid_adresse(int);

		//déclaration getters
		int getid_personnel(void);
		//int getdate_embauche(void);
		int getid_superieur(void);
		System::String^ getmdp(void);
		int getid_role(void);
		int getid_adresse(void);

	};
}

