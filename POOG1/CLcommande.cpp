#include "pch.h"
#include "CLcommande.h"
namespace Comp_Mappage {

void CLcommande::setid_client(int n){
	this->id_client = n;
}

void CLcommande::setreference(System::String^ y) {
	this->reference = y;
}

void CLcommande::setremise_globale_exceptionnel(float a) {
	this->remise_globale_exceptionnel = a;
}

int CLcommande::getid_client(void) {
	return this->id_client;
}
void CLcommande::setmontant(float z) {
	this-> montant = z;
}
void CLcommande::setmoyen(System::String^ u) {
	this->moyen = u;
}
void CLcommande::setquantite(float e) {
	this->quantite = e;
}

void CLcommande::setremise_unitaire_exceptionnel(float o) {
	this->remise_unitaire_exceptionnel = o;
}

void CLcommande::setid_article(int b) {
	this->id_article = b;
}

System::String^ CLcommande::getreference(void) {
	return this->reference;
}
float CLcommande::getremise_globale_exceptionnel(void) {
	return this->remise_globale_exceptionnel;
}

int CLcommande::getid_client(int) {
	return this->id_client;
}

float CLcommande::getmontant(void) {
	return this->montant;
}
System::String^ CLcommande::getmoyen(void) {
	return this->moyen;
}
float CLcommande::getquantite (void){
	return this->quantite;
}
float CLcommande::getremise_unitaire_exceptionnel(void) {
	return this->remise_unitaire_exceptionnel;
}
int CLcommande::getid_article(void) {
	return this->id_article;
}
}
