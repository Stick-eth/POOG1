#include "pch.h"
#include "CLarticle.h"

namespace Comp_Mappage
{
	//Définition des commandes SQL
	System::String^ CLarticle::Insert()
	{
		return "EXECUTE InsArticle @reference " + this->getreference() + " @designation " + this->getdesignation() + " @prix_ht " + this->getprix() + "@quantite_stock" + this->getquantite() + "@seuil_reapprovisionnement " + this->getseuil() + " @reduc_nombre " + this->getreduc() + " @id_unite " + this->getunite() + " @id_couleur " + this->getcouleur() + " @id_nature " + this->getnature();
	}

	System::String^ CLarticle::Update()
	{
		return "EXECUTE UpdArticle @id_article " + this->getid_article() + " @reference " + this->getreference() + " @designation " + this->getdesignation() + " @prix_ht " + this->getprix() + "@quantite_stock" + this->getquantite() + "@seuil_reapprovisionnement " + this->getseuil() + " @reduc_nombre " + this->getreduc() + " @id_unite " + this->getunite() + " @id_couleur " + this->getcouleur() + " @id_nature " + this->getnature();
	}

	System::String^ CLarticle::Delete()
	{
		return "EXECUTE SupprArticle @id_article " + this->getid_article();
	}

	System::String^ CLarticle::Select()
	{
		return "EXECUTE SelArticle @id_article " + this->getid_article();
	}

	//Définition setters

	void CLarticle::setid_article(int newid)
	{
		this->id_article = newid;
	}

	void CLarticle::setreference(System::String^ newref)
	{
		this->reference = newref;
	}

	void CLarticle::setdesignation(System::String^ newdeg)
	{
		this->designation = newdeg;
	}

	void CLarticle::setprix(float newprix)
	{
		this->prix = newprix;
	}

	void CLarticle::setquantite(float newq)
	{
		this->quantite_stock = newq;
	}

	void CLarticle::setseuil(int newseuil)
	{
		this->seuil = newseuil;
	}

	void CLarticle::setreduc(int newred)
	{
		this->reduc_nombre = newred;
	}

	void CLarticle::setunite(int newuni)
	{
		this->id_unite = newuni;
	}

	void CLarticle::setcouleur(int newc)
	{
		this->id_couleur = newc;
	}

	void CLarticle::setnature(int newnat)
	{
		this->id_nature = newnat;
	}

	//Définition des getters

	int CLarticle::getid_article(void)
	{
		return this->id_article;
	}

	System::String^ CLarticle::getreference(void)
	{
		return this->reference;
	}

	System::String^ CLarticle::getdesignation(void)
	{
		return this->designation;
	}

	float CLarticle::getprix(void)
	{
		return this->prix;
	}

	float CLarticle::getquantite(void)
	{
		return this->quantite_stock;
	}

	int CLarticle::getseuil(void)
	{
		return this->seuil;
	}

	int CLarticle::getreduc(void)
	{
		return this->reduc_nombre;
	}

	int CLarticle::getunite(void)
	{
		return this->id_unite;
	}

	int CLarticle::getcouleur(void)
	{
		return this->id_couleur;
	}

	int CLarticle::getnature(void)
	{
		return this->id_nature;
	}
}
