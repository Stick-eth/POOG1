#pragma once
#include "CLpersonne.h"

namespace Comp_Mappage
{
	// using namespace std::chrono;

	ref class CLclient : CLpersonne
	{
	private:
		int id_client;
		// year_month day date_naissance;
		int id_adressef;
		int id_adressel;
		System::String^ daten;
	public:
		CLclient();
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;
		//setters
		void setid_client(int);
		//void setdate_naissance(year_month_day);
		void setid_adressef(int);
		void setid_adressel(int);
		void setdaten(System::String^);
		//getters
		int getid_client(void);
		// year_month_day getdate_naissance(void);
		int getid_adressef(void);
		int getid_adressel(void);
		System::String^ getdaten(void);
	};
}

