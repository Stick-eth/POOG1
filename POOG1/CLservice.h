#pragma once
#include "pch.h"
using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLservice
	{
	protected:
		/*Comp_Mappage::CLpersonne^ personne;
		Comp_Mappage::CLpersonnel^ personnel;
		Comp_Mappage::CLclient^ client;
		Comp_Mappage::CLadresse^ adresse;
		Comp_Mappage::CLarticle^ article;
		Comp_Mappage::CLcommande^ commande;
		Comp_Mappage::CLremise^ remise;*/
	public:
		virtual void Creer() = 0;
		virtual void Modifier() = 0;
		virtual void Supprimer() = 0;
		virtual void Afficher() = 0;
	};

}

