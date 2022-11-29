#pragma once
#include "CLmaps.h"
namespace Comp_Mappage
{
	ref class CLpersonne :public CLmaps
	{
	protected:
		int id_personne;
		System::String nom;
		System::String prenom;
	public:
		void setid_personne(int newid);
		void setnom(System::String newnom);
		void setprenom(System::String newprenom);
		int getid_personne(void);
		System::String getnom(void);
		System::String getprenom(void);
	};
}

