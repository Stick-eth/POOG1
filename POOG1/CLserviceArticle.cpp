#include "CLserviceArticle.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	void CLserviceArticle::Creer(System::String^ a, System::String^ b, float c, float d, int e, int f, int g, int h, int i)
	{
		this->article->setreference(a);
		this->article->setdesignation(b);
		this->article->setprix(c);
		this->article->setquantite(d);
		this->article->setseuil(e);
		this->article->setreduc(f);
		this->article->setunite(g);
		this->article->setcouleur(h);
		this->article->setnature(i);
		this->oCad->actionRows(this->article->Insert());
	}

	void CLserviceArticle::Modifier(int id, System::String^ a, System::String^ b, float c, float d, int e, int f, int g, int h, int i)
	{
		this->article->setid_article(id);
		this->article->setreference(a);
		this->article->setdesignation(b);
		this->article->setprix(c);
		this->article->setquantite(d);
		this->article->setseuil(e);
		this->article->setreduc(f);
		this->article->setunite(g);
		this->article->setcouleur(h);
		this->article->setnature(i);
		this->oCad->actionRows(this->article->Update());
	}

	void CLserviceArticle::Supprimer(int id)
	{
		this->article->setid_article(id);
		this->oCad->actionRows(this->article->Delete());
	}

	System::Data::DataSet^ CLserviceArticle::Afficher(int id)
	{
		this->article->setid_article(id);
		return this->oCad->getRows(this->article->Select(), "CetArticle");
	}
}