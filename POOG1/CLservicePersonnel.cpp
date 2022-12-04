#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	void CLservicePersonnel::Creer(System::String^ b, System::String^ c, int e, int f,int h,System::String^ g)
	{
		// OPTI : System::String^ sql;
		this->personnel->setnom(b);
		this->personnel->setprenom(c);
		this->personnel->setid_adresse(e);
		this->personnel->setid_superieur(f);
		this->personnel->setid_role(h);
		this->personnel->setmdp(g);
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
		this->personnel->setid_personne(a);
		this->oCad->actionRows(this->personnel->Delete());
	}

	
	System::Data::DataSet^ CLservicePersonnel::Afficher(int id)
	{
		this->personnel->setid_personnel(id);
		return this->oCad->getRows(this->personnel->Select(), "CePersonnel");
	}
	
}