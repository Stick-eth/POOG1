#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLservicePersonnel
	{
	public:
		CLservicePersonnel(void);
		void CreerPersonnel(System::String^ a,System::String^ b, System::String^ c, int e, int f, int h, System::String^ g,System::String^ i);
		void ModifierPersonnel(System::String^ b, System::String^ c, int d, int e, int f);
		void SupprimerPersonnel(int);
		System::Data::DataSet^ AfficherPersonnel(int);
		System::Data::DataSet^ LoginPersonnel(System::String^ temail, System::String^ tpassword);
		System::Data::DataSet^ ComboboxPersonnel();

	private:
		CLcad^ oCad;
		Comp_Mappage::CLpersonnel^ personnel;
	};
}

