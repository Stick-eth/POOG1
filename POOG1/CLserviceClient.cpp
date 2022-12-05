#include "pch.h"
#include "CLserviceClient.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	CLserviceClient::CLserviceClient()
	{
		this->client = gcnew CLclient();
		this->oCad = gcnew CLcad();
	}

	void CLserviceClient::CreerYeah(System::String^ a,System::String^ b,System::String^ c,System::String^ d,int e, int f)
	{
		this->client->setnom(System::Convert::ToString(a));
		this->client->setprenom(System::Convert::ToString(b));
		this->client->setemail(System::Convert::ToString(c));
		this->client->setdaten(System::Convert::ToString(d));
		this->client->setid_adressef(e);
		this->client->setid_adressel(f);
		this->oCad->actionRows(this->client->Insert());
	}

	void CLserviceClient::Modifier(System::String^ a, System::String^ b, System::String^ c, System::String^ d, int e, int f, int g)
	{
		this->client->setnom(a);
		this->client->setprenom(b);
		this->client->setemail(c);
		this->client->setdaten(d);
		this->client->setid_adressef(e);
		this->client->setid_adressel(f);
		this->client->setid_personne(g);
		this->oCad->actionRows(this->client->Update());
	}

	void CLserviceClient::Supprimer(int id)
	{
		this->client->setid_personne(id);
		this->oCad->actionRows(this->client->Delete());
	}

	System::Data::DataSet^ CLserviceClient::Afficher(int id)
	{
		this->client->setid_personne(id);
		return this->oCad->getRows(this->client->Select(),"CeClient");
	}
}
