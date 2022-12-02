#include "CLservicePersonnel.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	System::String^ CLservicePersonnel::Creer(System::String^ b, System::String^ c, int d, int e, int f)
	{
		personnel->setnom(b);
		personnel->setprenom(c);
		personnel->setid_personnel(d);
		personnel->setid_adresse(e);
		personnel->setid_superieur(f);
		= CLpersonnel::Insert()
	}

	System::String^ CLservicePersonnel::Modifier(int a, System::String^ b, System::String^ c, int d, int e, int f)
	{
		personnel->setid_personne(a);
		personnel->setnom(b);
		personnel->setprenom(c);
		personnel->setid_personnel(d);
		personnel->setid_adresse(e);
		personnel->setid_superieur(f);
		// action raw update etc
	}

	System::String^ CLservicePersonnel::Supprimer(int a)
	{
		
	}

	System::String^ CLservicePersonnel::Afficher(int a)
	{
		return "EXECUTE AffPersonnel @id a";
	}

}