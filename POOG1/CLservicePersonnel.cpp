#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	CLservicePersonnel::CLservicePersonnel()
	{
		this->personnel = gcnew CLpersonnel();
		this->oCad = gcnew CLcad();
	}
	void CLservicePersonnel::CreerPersonnel(System::String^ a,System::String^ b, System::String^ c, int e, int f,int h,System::String^ g,System::String^ i)
	{
		this->personnel->setemail(a);
		this->personnel->setnom(b);
		this->personnel->setprenom(c);
		this->personnel->setid_adresse(e);
		this->personnel->setid_superieur(f);
		this->personnel->setid_role(h);
		this->personnel->setmdp(g);
		this->personnel->setdateemb(i);
		this->oCad->actionRows(this->personnel->Insert());
	}

	void CLservicePersonnel::ModifierPersonnel(int z, System::String^ a, System::String^ b, System::String^ c, int e, int f, System::String^ g, System::String^ i)
	{
		this->personnel->setemail(a);
		this->personnel->setnom(b);
		this->personnel->setprenom(c);
		this->personnel->setid_adresse(e);
		this->personnel->setid_superieur(f);
		this->personnel->setmdp(g);
		this->personnel->setdateemb(i);
		this->personnel->setid_personne(z);
		this->oCad->actionRows(this->personnel->Update());
	}

	void CLservicePersonnel::SupprimerPersonnel(int a)
	{
		this->personnel->setid_personnel(a);
		this->oCad->actionRows(this->personnel->Delete());
	}

	
	System::Data::DataSet^ CLservicePersonnel::AfficherPersonnel(int id)
	{
		this->personnel->setid_personnel(id);
		return this->oCad->getRows(this->personnel->Select(), "CePersonnel");
	}

	System::Data::DataSet^ CLservicePersonnel::LoginPersonnel(System::String^ temail, System::String^ tpassword)
	{
		this->personnel->setemail(temail);
		this->personnel->setmdp(tpassword);
		return this->oCad->getRows(this->personnel->LoginProc(), "CeLogin");
	}

	System::Data::DataSet^ CLservicePersonnel::ComboboxPersonnel()
	{
		return this->oCad->getRows("EXECUTE SelIDN", "listeCombobox");
	}

	System::Data::DataSet^ CLservicePersonnel::SelPourModifPersonnel()
	{
		return this->oCad->getRows("EXECUTE SelPersonnelUpd", "SelPersonneUpd");
	}
	
}