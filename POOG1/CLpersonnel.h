#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLpersonnel : CLpersonne
	{
	private:
		int id_personnel;
		int id_superieur;
		int id_adresse;
		System::String^ mdp;
		int id_role;
		System::String^ dateemb;
	public:
		//Virtualisation et Constructeur
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;
		System::String^ LoginProc(void);
		CLpersonnel();

		//déclaration setters
		void setid_personnel(int);
		void setdateemb(System::String^);
		void setid_superieur(int);
		void setmdp(System::String^);
		void setid_role(int);
		void setid_adresse(int);

		//déclaration getters
		int getid_personnel(void);
		int getid_superieur(void);
		System::String^ getmdp(void);
		int getid_role(void);
		int getid_adresse(void);
		System::String^ getdateemb(void);
	};
}

