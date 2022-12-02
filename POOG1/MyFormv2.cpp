#include "MyFormv2.h"
#include "pch.h"

void POOG1::MyFormv2::CacherBouttonClient(void)
{
    this->CreerClient->Visible = false;
    this->MajClient->Visible = false;
    this->SupprimerClient->Visible = false;
    this->AfficherClient->Visible = false;
}

void POOG1::MyFormv2::AfficherBouttonClient(void)
{
    this->CreerClient->Visible = true;
    this->MajClient->Visible = true;
    this->SupprimerClient->Visible = true;
    this->AfficherClient->Visible = true;
}

void POOG1::MyFormv2::CacherBouttonPersonnel(void) {
    this->CreerPersonnel->Visible = false;
    this->MajPersonnel->Visible = false;
    this->SupprimerPersonnel->Visible = false;
    this->AfficherPersonnel->Visible = false;
}

void POOG1::MyFormv2::AfficherBouttonPersonnel(void) {
    this->CreerPersonnel->Visible = true;
    this->MajPersonnel->Visible = true;
    this->SupprimerPersonnel->Visible = true;
    this->AfficherPersonnel->Visible = true;
}

void POOG1::MyFormv2::CacherBouttonCommande(void) {
    this->CreerCommande->Visible = false;
    this->MajCommande->Visible = false;
    this->SupprimerCommande->Visible = false;
    this->AfficherCommande->Visible = false;
}

void POOG1::MyFormv2::AfficherBouttonCommande(void) {
    this->CreerCommande->Visible = true;
    this->MajCommande->Visible = true;
    this->SupprimerCommande->Visible = true;
    this->AfficherCommande->Visible = true;
}

void POOG1::MyFormv2::CacherBouttonArticle(void) {
    this->CreerArticle->Visible = false;
    this->MajArticle->Visible = false;
    this->SupprimerArticle->Visible = false;
    this->AfficherArticle->Visible = false;
}

void POOG1::MyFormv2::AfficherBouttonArticle(void) {
    this->CreerArticle->Visible = true;
    this->MajArticle->Visible = true;
    this->SupprimerArticle->Visible = true;
    this->AfficherArticle->Visible = true;
}

void POOG1::MyFormv2::CacherTousBoutton(void)
{
    CacherBouttonClient();
    CacherBouttonPersonnel();
    CacherBouttonCommande();
    CacherBouttonArticle();
}
