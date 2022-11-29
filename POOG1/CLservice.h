#pragma once
#include "CLpersonnel.h"
#include "CLclient.h"
#include "CLadresse.h"
//#include "CLarticle.h"
//#include "CLcommande.h"
using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLservice
	{
	private:
		Comp_Mappage::CLpersonne^ personne;
		Comp_Mappage::CLpersonnel^ personnel;
		Comp_Mappage::CLclient^ client;
		Comp_Mappage::CLadresse^ adresse;
		// Comp_Mappage::CLarticle^ article;
		// Comp_Mappage::CLcommande^ commande;
		// Comp_Mappage::CLStats^ stats;
	};

}

