#pragma once
#include "string"
namespace Comp_Mappage {

	ref class CLcommande
	{
	public:
		void setid_client(int);
		void setreference(System::String^);
		//void setdate_livraison(std::chrono::year_month_day);
		void setremise_globale_exceptionnel(float);
		int getid_client(void);
		void setmontant(float);
		void setmoyen(System::String^);
		void setquantite(float);
		void setremise_unitaire_exceptionnel(float);
		void setid_article(int);
		System::String^ getreference(void);
		//std::chrono::year_month_day getdate_livraison(void);
		float getremise_globale_exceptionnel(void);
		int getid_client(int);
		float getmontant(void);
		System::String^ getmoyen(void);
		float getquantite(void);
		float getremise_unitaire_exceptionnel(void);
		int getid_article(void);


	protected:
		int id_client;
		System::String^ reference;
		// std::chrono::year_month_day date_livraison;
		float remise_globale_exceptionnel;
		int id_client;
		float montant;
		System::String^ moyen;
		float quantite;
		float remise_unitaire_exceptionnel;
		int id_article;

	};
}

