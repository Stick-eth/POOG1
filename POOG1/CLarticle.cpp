#include "pch.h"

namespace Comp_Mappage
{
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

	/*
	void CLarticle::setreduc(int newred)
	{
		this->reduc_nombre = newred
	}
	*/

	void CLarticle::setunite(System::String^ newuni)
	{
		this->unite = newuni;
	}

	void CLarticle::setcouleur(char newc)
	{
		this->couleur = newc;
	}

	void CLarticle::setnature(System::String^ newnat)
	{
		this->nature = newnat;
	}

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

	System::String^ CLarticle::getunite(void)
	{
		return this->unite;
	}

	char CLarticle::getcouleur(void)
	{
		return this->couleur;
	}

	System::String^ CLarticle::getnature(void)
	{
		return this->nature;
	}
}
