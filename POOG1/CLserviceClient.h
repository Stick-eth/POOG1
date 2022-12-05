#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceClient
	{
	public:
		CLserviceClient();
		void CreerClient(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f) override;
		void ModifierClient(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f, int g) override;
		void SupprimerClient(int) override;
		System::Data::DataSet^ AfficherClient(int) override;
	private:
		CLcad^ oCad;
		Comp_Mappage::CLclient^ client;
	};
}