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
		//D�claration setters
		void setid_personne(int newid);
		void setnom(System::String^ newnom);
		void setprenom(System::String^ newprenom);
		void setemail(System::String^ newemail);
		//D�claration getters
		int getid_personne(void);
		System::String^ getnom(void);
		System::String^ getprenom(void);
		System::String^ getemail(void);
	};
}

