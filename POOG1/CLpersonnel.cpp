#include "pch.h"

namespace Comp_Mappage
{
	//Définition du constructeur

	CLpersonnel::CLpersonnel() : CLpersonne::CLpersonne()
	{
		setdateemb("0000-00-00");
		setid_superieur(0);
		setmdp("1234");
		setid_role(0);
		setid_adresse(0);
	}

	//Définition des appels de procédure stockées

	System::String^ CLpersonnel::Select(void)
	{
		return "EXECUTE AffPersonnel @id_personnel =" + this->getid_personnel();
	}

	System::String^ CLpersonnel::Insert(void)
	{
		return "EXECUTE InsPersonnel @date_embauche ='" + this->getdateemb() + "', @id_superieur = " + this->getid_superieur() + ", @mot_de_passe =" + this->getmdp() + ", @Id_role =" + this->getid_role() + ", @id_adresse =" + this->getid_adresse() + ", @email ='" + this->getemail() + "', @nom = " + this->getnom() + ",@prenom = " + this->getprenom();
	}

	System::String^ CLpersonnel::Delete(void)
	{
		return "EXECUTE SupprPersonnel @par1 =" + this->getid_personnel();
	}

	System::String^ CLpersonnel::Update()
	{
		return "EXECUTE UpdPersonnel @id_personne ='" + this->getid_personne() + "', @date_embauche ='" + this->getdateemb() + "', @id_superieur = " + this->getid_superieur() + ", @mot_de_passe ='" + this->getmdp() + "', @id_adresse =" + this->getid_adresse() + ", @email ='" + this->getemail() + "', @nom = '" + this->getnom() + "',@prenom = '" + this->getprenom() + "'";
	}

	System::String^ CLpersonnel::LoginProc()
	{
		return "EXECUTE LoginPersonnel @email ='" + this->getemail() + "', @password ='" + this->getmdp()+"'";
	}

	//Définition des setters

	void CLpersonnel::setid_personnel(int newid)
	{
		this->id_personnel = newid;
	}

	void CLpersonnel::setdateemb(System::String^ newdate)
	{
		this->dateemb = newdate;
	}

	void CLpersonnel::setid_superieur(int newid)
	{
		this->id_superieur = newid;
	}

	void CLpersonnel::setmdp(System::String^ newmdp)
	{
		this->mdp = newmdp;
	}

	void CLpersonnel::setid_role(int newid)
	{
		this->id_role = newid;
	}

	void CLpersonnel::setid_adresse(int newid)
	{
		this->id_adresse = newid;
	}

	//Définition des getters

	int CLpersonnel::getid_personnel()
	{
		return this->id_personnel;
	}

	int CLpersonnel::getid_superieur()
	{
		return this->id_superieur;
	}

	System::String^ CLpersonnel::getmdp(void)
	{
		return this->mdp;
	}

	int CLpersonnel::getid_role(void)
	{
		return this->id_role;
	}

	int CLpersonnel::getid_adresse()
	{
		return this->id_adresse;
	}

	System::String^ CLpersonnel::getdateemb()
	{
		return this->dateemb;
	}
}
