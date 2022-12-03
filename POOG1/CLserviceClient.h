#pragma once
#include "CLservice.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceClient:CLservice
	{
	private:
		Comp_Mappage::CLclient^ personnel;
	public:
		virtual void Creer() override;
		virtual void Modifier() override;
		virtual void Supprimer() override;
		virtual void Afficher(int) override;
	};
}