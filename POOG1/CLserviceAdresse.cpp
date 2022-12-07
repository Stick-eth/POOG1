#include "CLadresse.h"
#include "CLserviceAdresse.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	CLserviceAdresse::CLserviceAdresse()
	{
		this->adresse = gcnew CLadresse();
		this->oCad = gcnew CLcad();
	}
	void CLserviceAdresse::CreerAdresse(int b, System::String^ c, System::String^ d, System::String^ e, System::String^ f)
	{
		this->adresse->setnumero(b);
		this->adresse->settype_voie(c);
		this->adresse->setnom_voie(d);
		this->adresse->setcode_postal(e);
		this->adresse->setville(f);
		this->oCad->actionRows(this->adresse->Insert());
	}
	void CLserviceAdresse::ModifierAdresse(int a, int  b, System::String^ c, System::String^ d, System::String^ e,System::String^ f)
	{
		this->adresse->setid_adresse(a);
		this->adresse->setnumero(b);
		this->adresse->settype_voie(c);
		this->adresse->setnom_voie(d);
		this->adresse->setcode_postal(e);
		this->adresse->setville(f);
		this->oCad->actionRows(this->adresse->Update());
	}

	System::Data::DataSet^ CLserviceAdresse::AfficherAdresse(int a)
	{
		this->adresse->setid_adresse(a);
		return this->oCad->getRows(this->adresse->Select(), "CetteAdresse");
	}
};
