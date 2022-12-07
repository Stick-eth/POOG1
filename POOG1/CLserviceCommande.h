#pragma once
#include "pch.h"
#include "CLcommande.h"
using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceCommande:CLservice
	{
	private :
		CLcommande^ commande;
	public:
		virtual void Creer(System::String^ a, System::String^ b, System::String^ c, int d) override;
		virtual void Modifier(int id,System::String^ a, System::String^ b, System::String^ c, int d) override;
		virtual void Supprimer(int id) override;
		virtual System::Data::DataSet^ Afficher(int id) override;
	};
}

