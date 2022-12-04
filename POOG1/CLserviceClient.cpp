#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	void CLserviceClient::Creer(System::String^ a,System::String^ b,System::String^ c,System::String^ d,int e, int f)
	{
		this->client->setnom(a);
		this->client->setprenom(b);
		this->client->setemail(c);
		this->client->setdaten(d);
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
