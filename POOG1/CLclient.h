#pragma once
#include "CLpersonne.h"
#include <chrono>
#include <iostream>

using namespace std::chrono;

ref class CLclient:public CLpersonne
{
private:
	int id_client;
	// year_month day date_naissance;
	int id_adressef;
	int id_adressel;
	int personne;
public:
	//setters
	void setid_client(int);
	//void setdate_naissance(year_month_day);
	void setid_adressef(int);
	void setid_adressel(int);
	//getters
	int getid_client(void);
	// year_month_day getdate_naissance(void);
	int getid_adressef(void);
	int getid_adressel(void);
};

