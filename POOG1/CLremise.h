#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLremise : public CLmaps
	{
	private:
		int id_remise;
		System::String^ nom_remise;
		float valeur;
	public:
		//D�claration des setters
		void setid_remise(int);
		void setnom_remise(System::String^);
		void setvaleur(float);
		//D�claration des getters
		int getid_remise(void);
		System::String^ getnom_remise(void);
		float getvaleur(void);
	};
}
