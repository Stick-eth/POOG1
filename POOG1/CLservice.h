#pragma once
#include "pch.h"
using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLservice
	{
	protected:
		CLcad^ oCad;
	public:
		CLservice(void);
		virtual void Creer() = 0;
		virtual void Modifier() = 0;
		virtual void Supprimer() = 0;
		virtual void Afficher() = 0;
	};

}

