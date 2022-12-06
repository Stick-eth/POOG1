#include "CLadresse.h"
#include "CLserviceAdresse.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	void CLserviceAdresse::CreerAdresse(int b, System::String^ c, System::String^ d, System::String^ e, System::String^ f)
	{
		this->adresse->setnumero(b);
		this->adresse->settype_voie(c);
		this->adresse->setnom_voie(d);
		this->adresse->setcode_postal(e);
		this->adresse->setville(f);
		this->oCad->actionRows(this->adresse->Insert());
	}
	void CLserviceAdresse::ModifierAdresse(int a, int  b, System::String^ c, System::String^ d, System::String^ e, int g, System::String^ f)
	{
		this->adresse->setid_adresse(a);
		this->adresse->setnumero(b);
		this->adresse->settype_voie(c);
		this->adresse->setnom_voie(d);
		this->adresse->setcode_postal(e);
		this->adresse->setid_liste_ville(g);
		this->adresse->setville(f);
		this->oCad->actionRows(this->adresse->Update());
	}

	void CLserviceAdresse::SupprimerAdresse(int a) {
		this->adresse->setid_adresse(a);
		this->oCad->actionRows(this->adresse->Delete());
	}

	System::Data::DataSet CLserviceAdresse::AfficherAdresse(int a)
	{
		this->adresse->setid_adresse(a);
		return this->oCad->getRows(this->adresse->Select())
	}
};

