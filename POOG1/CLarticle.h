#pragma once
#include"string"
using namespace std;

ref class CLarticle
{
protected:
	int id_article;
	System::String reference;
	System::String designation;
	float quantite_stock;
	int seuil_reaprovisionnement;
	bool reduc_nombre;
	int id_tva;
	int id_prix_ht;
	int id_liste_unite;
	float prix;
	float taux;
	System::String unite;
};

