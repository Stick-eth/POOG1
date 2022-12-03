#include "pch.h"
using namespace Comp_Mappage;

namespace Comp_Services
{
	System::String^ CLservicePersonnel::Creer(System::String^ b, System::String^ c, int d, int e, int f)
	{
		// OPTI : System::String^ sql;
		this->personnel->setnom(b);
		this->personnel->setprenom(c);
		this->personnel->setid_personnel(d);
		this->personnel->setid_adresse(e);
		this->personnel->setid_superieur(f);
		// OPTI : sql = this->personnel->Insert();
		this->oCad->actionRows(this->personnel->Insert());
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
		System::String^ sql;
		sql = this->oMappTB
		CLcad::getRows(CLpersonnel::Select^ "Yes");
	}

}