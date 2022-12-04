#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceClient:CLservice
	{
	private:
		Comp_Mappage::CLclient^ client;
	public:
		virtual void Creer(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f) override;
		virtual void Modifier(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f, int g) override;
		virtual void Supprimer(int) override;
		virtual void Afficher(int) override;
	};
}