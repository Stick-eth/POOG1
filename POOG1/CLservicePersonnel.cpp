#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	void CLservicePersonnel::Creer(System::String^ b, System::String^ c, int d, int e, int f)
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

	void CLservicePersonnel::Modifier(System::String^ b, System::String^ c, int d, int e, int f)
	{
		this->personnel->setnom(b);
		this->personnel->setprenom(c);
		this->personnel->setid_personnel(d);
		this->personnel->setid_adresse(e);
		this->personnel->setid_superieur(f);
		this->oCad->actionRows(this->personnel->Update());
	}

	void CLservicePersonnel::Supprimer(int a)
	{
		this->personnel->setid_personnel(a);
		this->oCad->actionRows(this->personnel->Delete());
	}

	/*
	!!! JE SAIS PAS CA DOIT RETURN UN STRING OU UN DATASET !!!

	System::String^ CLservicePersonnel::Afficher(int id)
	{
		this->oCad->getRows(this->personnel->Select(), "CePersonnel");

	}
	*/
}