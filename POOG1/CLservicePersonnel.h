#pragma once
#include "CLservice.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLservicePersonnel:CLservice
	{
	private:
		Comp_Mappage::CLpersonnel^ personnel;
	public:
		virtual System::String^ Creer(System::String^, System::String^, int, int, int) override;
		virtual System::String^ Modifier() override;
		virtual System::String^ Supprimer(int) override;
		virtual System::String^ Afficher(int) override;
	};
}

