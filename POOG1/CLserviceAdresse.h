#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceAdresse:CLservice
	{
	private:
		Comp_Mappage::CLadresse^ adresse;
	public:
		/*
		virtual void Creer() override;
		virtual void Modifier() override;
		virtual void Supprimer() override;
		virtual System::Data::DataSet^ Afficher() override;
		*/
	};
}