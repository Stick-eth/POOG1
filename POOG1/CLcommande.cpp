#include "pch.h"
#include "CLcommande.h"

namespace Comp_Mappage {

	//PROCEDURES

	System::String^ CLcommande::Insert()
	{
		return "EXECUTE InsCommande @reference" + this->getreference() + " @date_emission " + this->getdate_emission() + "@date_livraison " + this->getdate_livraison() + " @id_client " + this->getid_client();
	}

	System::String^ CLcommande::Update()
	{
		return "EXECUTE UpdCommande @id_commande " + this->getid_commande() + " @reference " + this->getreference() + " @date_emission " + this->getdate_emission() + "@date_livraison " + this->getdate_livraison() + " @id_client " + this->getid_client();
	}

	System::String^ CLcommande::Delete()
	{
		return "EXECUTE SupprCommande @id_commande" + this->getid_commande();
	}

	System::String^ CLcommande::Select()
	{
		return "EXECUTE AffCommande @id_commande" + this->getid_commande();
	}

	//SETTERS

	void CLcommande::setid_commande(int newid)
	{
		this->id_commande = newid;
	}

	void CLcommande::setid_client(int n) {
		this->id_client = n;
	}

	void CLcommande::setreference(System::String^ y) {
		this->reference = y;
	}

	void CLcommande::setremise_globale_exceptionnel(float a) {
		this->remise_globale_exceptionnel = a;
	}

	void CLcommande::setmontant(float z) {
		this->montant = z;
	}
	void CLcommande::setmoyen(System::String^ u) {
		this->moyen = u;
	}
	void CLcommande::setquantite(float e) {
		this->quantite = e;
	}

	void CLcommande::setremise_unitaire_exceptionnel(float o) {
		this->remise_unitaire_exceptionnel = o;
	}

	void CLcommande::setdate_emission(System::String^ newdate)
	{
		this->date_emission = newdate;
	}

	void CLcommande::setdate_livraison(System::String^ newdate)
	{
		this->date_livraison = newdate;
	}

	void CLcommande::setid_article(int b) {
		this->id_article = b;
	}

	//GETTERS

	int CLcommande::getid_commande(void)
	{
		return this->id_commande;
	}

	int CLcommande::getid_client(void) {
		return this->id_client;
	}

	System::String^ CLcommande::getreference(void) {
		return this->reference;
	}
	System::String^ CLcommande::getdate_emission(void)
	{
		return this->date_emission;
	}

	System::String^ CLcommande::getdate_livraison(void)
	{
		return this->date_livraison;
	}

	float CLcommande::getremise_globale_exceptionnel(void) {
		return this->remise_globale_exceptionnel;
	}

	float CLcommande::getmontant(void) {
		return this->montant;
	}
	System::String^ CLcommande::getmoyen(void) {
		return this->moyen;
	}

	float CLcommande::getquantite(void) {
		return this->quantite;
	}
	float CLcommande::getremise_unitaire_exceptionnel(void) {
		return this->remise_unitaire_exceptionnel;
	}
	int CLcommande::getid_article(void) {
		return this->id_article;
	}
}