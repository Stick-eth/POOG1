#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLpersonne :public CLmaps
	{
	protected:
		int id_personne;
		System::String^ nom;
		System::String^ prenom;
		System::String^ email;
	public:
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;
		CLpersonne::CLpersonne();
		//Déclaration setters
		void setid_personne(int newid);
		void setnom(System::String^ newnom);
		void setprenom(System::String^ newprenom);
		void setemail(System::String^ newemail);
		//Déclaration getters
		int getid_personne(void);
		System::String^ getnom(void);
		System::String^ getprenom(void);
		System::String^ getemail(void);
	};
}

