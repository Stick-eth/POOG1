#pragma once
#include "pch.h"

namespace Comp_Mappage {

	ref class CLcommande:CLmaps
	{
	public:
		//déclaration méthodes virtuelles
		virtual System::String^ Select(void) override;
		virtual System::String^ Insert(void) override;
		virtual System::String^ Delete(void) override;
		virtual System::String^ Update(void) override;

		//définition setters

		void setid_commande(int);
		void setid_client(int);
		void setreference(System::String^);
		void setdate_livraison(System::String^);
		void setdate_emission(System::String^);
		void setremise_globale_exceptionnel(float);
		void setmontant(float);
		void setmoyen(System::String^);
		void setquantite(float);
		void setremise_unitaire_exceptionnel(float);
		void setid_article(int);

		//définition getters

		int getid_commande(void);
		int getid_client(void);
		System::String^ getreference(void);
		System::String^ getdate_livraison();
		System::String^ getdate_emission();
		float getremise_globale_exceptionnel(void);
		float getmontant(void);
		System::String^ getmoyen(void);
		float getquantite(void);
		float getremise_unitaire_exceptionnel(void);
		int getid_article(void);


	protected:
		int id_commande;
		int id_client;
		System::String^ reference;
		System::String^ date_livraison;
		System::String^ date_emission;
		float remise_globale_exceptionnel;
		float montant;
		System::String^ moyen;
		float quantite;
		float remise_unitaire_exceptionnel;
		int id_article;

	};
}