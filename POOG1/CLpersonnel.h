#pragma once
#pragma once
#include "CLpersonne.h"
ref class CLpersonnel : CLpersonne
{
private:
	int id_personnel;
	// year_month_day date_embauche;
	int id_superieur;
	int id_adresse;
public:
	//déclaration setters
	void setid_personnel(int);
	//void setdate_embauche(std::chrono::year_month_day);
	void setid_superieur(int);
	void setid_adresse(int);
	//déclaration getters
	int getid_personnel(void);
	int getdate_embauche(void);
	int getid_superieur(void);
	int getid_adresse(void);
};

