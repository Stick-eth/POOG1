#pragma once
#include "CLadresse.h"
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceAdresse
	{
	private:
		CLcad^ oCad;
		Comp_Mappage::CLadresse^ adresse;
	public:
		CLserviceAdresse();
		void CreerAdresse(int b, System::String^ c, System::String^ d, System::String^ e, System::String^ f);
		void ModifierAdresse(int a, int  b, System::String^ c, System::String^ d, System::String^ e, System::String^ f);
		System::Data::DataSet^ AfficherAdresse(int a);
	};
}

