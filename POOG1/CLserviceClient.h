#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceClient
	{
	public:
		CLserviceClient();
		void CreerYeah(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f) override;
		void Modifier(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f, int g) override;
		void Supprimer(int) override;
		System::Data::DataSet^ Afficher(int) override;
	private:
		CLcad^ oCad;
		Comp_Mappage::CLclient^ client;
	};
}