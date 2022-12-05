#include "CLserviceCommande.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	void CLserviceCommande::Creer(System::String^ a, System::String^ b, System::String^ c, int d)
	{
		this->commande->setreference(a);
		this->commande->setdate_emission(b);
		this->commande->setdate_livraison(c);
		this->commande->setid_client(d);
		this->oCad->actionRows(this->commande->Insert());
	}

	void CLserviceCommande::Modifier(int id, System::String^ a, System::String^ b, System::String^ c, int d)
	{
		this->commande->setid_commande(id);
		this->commande->setreference(a);
		this->commande->setdate_emission(b);
		this->commande->setdate_livraison(c);
		this->commande->setid_client(d);
		this->oCad->actionRows(this->commande->Update());
	}

	void CLserviceCommande::Supprimer(int id)
	{
		this->commande->setid_commande(id);
		this->oCad->actionRows(this->commande->Delete());
	}

	System::Data::DataSet^ CLserviceCommande::Afficher(int id)
	{
		this->commande->setid_commande(id);
		return this->oCad->getRows(this->commande->Select(),"CetteCommande");
	}
}
