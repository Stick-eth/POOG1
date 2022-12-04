#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLservicePersonnel:CLservice
	{
	private:
		Comp_Mappage::CLpersonnel^ personnel;
	public:
		virtual void Creer(System::String^ b, System::String^ c, int e, int f, int h, System::String^ g) override;
		virtual void Modifier(System::String^ b, System::String^ c, int d, int e, int f) override;
		virtual void Supprimer(int) override;
		virtual System::Data::DataSet^ Afficher(int) override;
	};
}

