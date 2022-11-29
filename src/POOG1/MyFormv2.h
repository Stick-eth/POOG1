#pragma once
#include "pch.h"

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormv2 : public System::Windows::Forms::Form
	{
	public:

		MyFormv2(int t_departement)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			if (t_departement == 1)
			{
				this->GestionArticle->Visible = false;
			}

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormv2()
		{
			if (components)
			{
				delete components;
			}
		}

		void CacherBouttonClient(void);
		void AfficherBouttonClient(void);
		void CacherBouttonPersonnel(void);
		void AfficherBouttonPersonnel(void);
		void CacherBouttonCommande(void);
		void AfficherBouttonCommande(void);
		void CacherBouttonArticle(void);
		void AfficherBouttonArticle(void);

		void CacherTousBoutton(void);

	private: System::Windows::Forms::Button^ GestionClient;
	private: System::Windows::Forms::Button^ GestionPersonnel;
	private: System::Windows::Forms::Button^ GestionCommande;
	private: System::Windows::Forms::Button^ GestionArticle;
	private: System::Windows::Forms::Button^ GestionStats;
	private: System::Windows::Forms::Label^ LabelTest;
	private: System::Windows::Forms::Button^ CreerClient;
	private: System::Windows::Forms::Button^ MajClient;
	private: System::Windows::Forms::Button^ SupprimerClient;
	private: System::Windows::Forms::Button^ AfficherClient;
	private: System::Windows::Forms::Button^ CreerPersonnel;
	private: System::Windows::Forms::Button^ MajPersonnel;
	private: System::Windows::Forms::Button^ SupprimerPersonnel;
	private: System::Windows::Forms::Button^ AfficherPersonnel;
	private: System::Windows::Forms::Button^ CreerCommande;
	private: System::Windows::Forms::Button^ MajCommande;
	private: System::Windows::Forms::Button^ SupprimerCommande;
	private: System::Windows::Forms::Button^ AfficherCommande;
	private: System::Windows::Forms::Button^ CreerArticle;
	private: System::Windows::Forms::Button^ MajArticle;
	private: System::Windows::Forms::Button^ SupprimerArticle;
	private: System::Windows::Forms::Button^ AfficherArticle;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GestionClient = (gcnew System::Windows::Forms::Button());
			this->GestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->GestionCommande = (gcnew System::Windows::Forms::Button());
			this->GestionArticle = (gcnew System::Windows::Forms::Button());
			this->GestionStats = (gcnew System::Windows::Forms::Button());
			this->CreerClient = (gcnew System::Windows::Forms::Button());
			this->MajClient = (gcnew System::Windows::Forms::Button());
			this->SupprimerClient = (gcnew System::Windows::Forms::Button());
			this->AfficherClient = (gcnew System::Windows::Forms::Button());
			this->CreerPersonnel = (gcnew System::Windows::Forms::Button());
			this->MajPersonnel = (gcnew System::Windows::Forms::Button());
			this->SupprimerPersonnel = (gcnew System::Windows::Forms::Button());
			this->AfficherPersonnel = (gcnew System::Windows::Forms::Button());
			this->CreerCommande = (gcnew System::Windows::Forms::Button());
			this->MajCommande = (gcnew System::Windows::Forms::Button());
			this->SupprimerCommande = (gcnew System::Windows::Forms::Button());
			this->AfficherCommande = (gcnew System::Windows::Forms::Button());
			this->CreerArticle = (gcnew System::Windows::Forms::Button());
			this->MajArticle = (gcnew System::Windows::Forms::Button());
			this->SupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->AfficherArticle = (gcnew System::Windows::Forms::Button());
			this->LabelTest = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// GestionClient
			// 
			this->GestionClient->Location = System::Drawing::Point(12, 12);
			this->GestionClient->Name = L"GestionClient";
			this->GestionClient->Size = System::Drawing::Size(200, 100);
			this->GestionClient->TabIndex = 0;
			this->GestionClient->Text = L"Gestion Client";
			this->GestionClient->UseVisualStyleBackColor = true;
			this->GestionClient->Click += gcnew System::EventHandler(this, &MyFormv2::GestionClient_Click);
			// 
			// GestionPersonnel
			// 
			this->GestionPersonnel->Location = System::Drawing::Point(12, 118);
			this->GestionPersonnel->Name = L"GestionPersonnel";
			this->GestionPersonnel->Size = System::Drawing::Size(200, 100);
			this->GestionPersonnel->TabIndex = 1;
			this->GestionPersonnel->Text = L"Gestion Personnel";
			this->GestionPersonnel->UseVisualStyleBackColor = true;
			this->GestionPersonnel->Click += gcnew System::EventHandler(this, &MyFormv2::GestionPersonnel_Click);
			// 
			// GestionCommande
			// 
			this->GestionCommande->Location = System::Drawing::Point(12, 224);
			this->GestionCommande->Name = L"GestionCommande";
			this->GestionCommande->Size = System::Drawing::Size(200, 100);
			this->GestionCommande->TabIndex = 2;
			this->GestionCommande->Text = L"Gestion Commande";
			this->GestionCommande->UseVisualStyleBackColor = true;
			this->GestionCommande->Click += gcnew System::EventHandler(this, &MyFormv2::GestionCommande_Click);
			// 
			// GestionArticle
			// 
			this->GestionArticle->Location = System::Drawing::Point(12, 330);
			this->GestionArticle->Name = L"GestionArticle";
			this->GestionArticle->Size = System::Drawing::Size(200, 100);
			this->GestionArticle->TabIndex = 3;
			this->GestionArticle->Text = L"Gestion Article";
			this->GestionArticle->UseVisualStyleBackColor = true;
			this->GestionArticle->Click += gcnew System::EventHandler(this, &MyFormv2::GestionArticle_Click);
			// 
			// GestionStats
			// 
			this->GestionStats->Location = System::Drawing::Point(12, 436);
			this->GestionStats->Name = L"GestionStats";
			this->GestionStats->Size = System::Drawing::Size(200, 100);
			this->GestionStats->TabIndex = 4;
			this->GestionStats->Text = L"Gestion Stats";
			this->GestionStats->UseVisualStyleBackColor = true;
			this->GestionStats->Click += gcnew System::EventHandler(this, &MyFormv2::GestionStats_Click);
			// 
			// CreerClient
			// 
			this->CreerClient->Location = System::Drawing::Point(230, 12);
			this->CreerClient->Name = L"CreerClient";
			this->CreerClient->Size = System::Drawing::Size(200, 100);
			this->CreerClient->TabIndex = 0;
			this->CreerClient->Text = L"Creer un Client";
			this->CreerClient->UseVisualStyleBackColor = true;
			this->CreerClient->Visible = false;
			this->CreerClient->Click += gcnew System::EventHandler(this, &MyFormv2::CreerClient_Click);
			// 
			// MajClient
			// 
			this->MajClient->Location = System::Drawing::Point(230, 118);
			this->MajClient->Name = L"MajClient";
			this->MajClient->Size = System::Drawing::Size(200, 100);
			this->MajClient->TabIndex = 1;
			this->MajClient->Text = L"Mettre à jour un Client";
			this->MajClient->UseVisualStyleBackColor = true;
			this->MajClient->Visible = false;
			// 
			// SupprimerClient
			// 
			this->SupprimerClient->Location = System::Drawing::Point(230, 224);
			this->SupprimerClient->Name = L"SupprimerClient";
			this->SupprimerClient->Size = System::Drawing::Size(200, 100);
			this->SupprimerClient->TabIndex = 2;
			this->SupprimerClient->Text = L"Supprimer un Client";
			this->SupprimerClient->UseVisualStyleBackColor = true;
			this->SupprimerClient->Visible = false;
			// 
			// AfficherClient
			// 
			this->AfficherClient->Location = System::Drawing::Point(230, 330);
			this->AfficherClient->Name = L"AfficherClient";
			this->AfficherClient->Size = System::Drawing::Size(200, 100);
			this->AfficherClient->TabIndex = 3;
			this->AfficherClient->Text = L"Afficher un Client";
			this->AfficherClient->UseVisualStyleBackColor = true;
			this->AfficherClient->Visible = false;
			// 
			// CreerPersonnel
			// 
			this->CreerPersonnel->Location = System::Drawing::Point(230, 12);
			this->CreerPersonnel->Name = L"CreerPersonnel";
			this->CreerPersonnel->Size = System::Drawing::Size(200, 100);
			this->CreerPersonnel->TabIndex = 0;
			this->CreerPersonnel->Text = L"Creer un Personnel";
			this->CreerPersonnel->UseVisualStyleBackColor = true;
			this->CreerPersonnel->Visible = false;
			// 
			// MajPersonnel
			// 
			this->MajPersonnel->Location = System::Drawing::Point(230, 118);
			this->MajPersonnel->Name = L"MajPersonnel";
			this->MajPersonnel->Size = System::Drawing::Size(200, 100);
			this->MajPersonnel->TabIndex = 1;
			this->MajPersonnel->Text = L"Mettre à jour un Personnel";
			this->MajPersonnel->UseVisualStyleBackColor = true;
			this->MajPersonnel->Visible = false;
			//  
			// SupprimerPersonnel
			// 
			this->SupprimerPersonnel->Location = System::Drawing::Point(230, 224);
			this->SupprimerPersonnel->Name = L"SupprimerPersonnel";
			this->SupprimerPersonnel->Size = System::Drawing::Size(200, 100);
			this->SupprimerPersonnel->TabIndex = 2;
			this->SupprimerPersonnel->Text = L"Supprimer un Personnel";
			this->SupprimerPersonnel->UseVisualStyleBackColor = true;
			this->SupprimerPersonnel->Visible = false;
			// 
			// AfficherPersonnel
			// 
			this->AfficherPersonnel->Location = System::Drawing::Point(230, 330);
			this->AfficherPersonnel->Name = L"AfficherPersonnel";
			this->AfficherPersonnel->Size = System::Drawing::Size(200, 100);
			this->AfficherPersonnel->TabIndex = 3;
			this->AfficherPersonnel->Text = L"Afficher un Personnel";
			this->AfficherPersonnel->UseVisualStyleBackColor = true;
			this->AfficherPersonnel->Visible = false;
			// 
			// CreerCommande
			// 
			this->CreerCommande->Location = System::Drawing::Point(230, 12);
			this->CreerCommande->Name = L"CreerCommande";
			this->CreerCommande->Size = System::Drawing::Size(200, 100);
			this->CreerCommande->TabIndex = 0;
			this->CreerCommande->Text = L"Creer un Commande";
			this->CreerCommande->UseVisualStyleBackColor = true;
			this->CreerCommande->Visible = false;
			// 
			// MajCommande
			// 
			this->MajCommande->Location = System::Drawing::Point(230, 118);
			this->MajCommande->Name = L"MajCommande";
			this->MajCommande->Size = System::Drawing::Size(200, 100);
			this->MajCommande->TabIndex = 1;
			this->MajCommande->Text = L"Mettre à jour un Commande";
			this->MajCommande->UseVisualStyleBackColor = true;
			this->MajCommande->Visible = false;
			//  
			// SupprimerCommande
			// 
			this->SupprimerCommande->Location = System::Drawing::Point(230, 224);
			this->SupprimerCommande->Name = L"SupprimerCommande";
			this->SupprimerCommande->Size = System::Drawing::Size(200, 100);
			this->SupprimerCommande->TabIndex = 2;
			this->SupprimerCommande->Text = L"Supprimer un Commande";
			this->SupprimerCommande->UseVisualStyleBackColor = true;
			this->SupprimerCommande->Visible = false;
			// 
			// AfficherCommande
			// 
			this->AfficherCommande->Location = System::Drawing::Point(230, 330);
			this->AfficherCommande->Name = L"AfficherCommande";
			this->AfficherCommande->Size = System::Drawing::Size(200, 100);
			this->AfficherCommande->TabIndex = 3;
			this->AfficherCommande->Text = L"Afficher un Commande";
			this->AfficherCommande->UseVisualStyleBackColor = true;
			this->AfficherCommande->Visible = false;
			// 
			// CreerArticle
			// 
			this->CreerArticle->Location = System::Drawing::Point(230, 12);
			this->CreerArticle->Name = L"CreerArticle";
			this->CreerArticle->Size = System::Drawing::Size(200, 100);
			this->CreerArticle->TabIndex = 0;
			this->CreerArticle->Text = L"Creer un Article";
			this->CreerArticle->UseVisualStyleBackColor = true;
			this->CreerArticle->Visible = false;
			// 
			// MajArticle
			// 
			this->MajArticle->Location = System::Drawing::Point(230, 118);
			this->MajArticle->Name = L"MajArticle";
			this->MajArticle->Size = System::Drawing::Size(200, 100);
			this->MajArticle->TabIndex = 1;
			this->MajArticle->Text = L"Mettre à jour un Article";
			this->MajArticle->UseVisualStyleBackColor = true;
			this->MajArticle->Visible = false;
			//  
			// SupprimerArticle
			// 
			this->SupprimerArticle->Location = System::Drawing::Point(230, 224);
			this->SupprimerArticle->Name = L"SupprimerArticle";
			this->SupprimerArticle->Size = System::Drawing::Size(200, 100);
			this->SupprimerArticle->TabIndex = 2;
			this->SupprimerArticle->Text = L"Supprimer un Article";
			this->SupprimerArticle->UseVisualStyleBackColor = true;
			this->SupprimerArticle->Visible = false;
			// 
			// AfficherArticle
			// 
			this->AfficherArticle->Location = System::Drawing::Point(230, 330);
			this->AfficherArticle->Name = L"AfficherArticle";
			this->AfficherArticle->Size = System::Drawing::Size(200, 100);
			this->AfficherArticle->TabIndex = 3;
			this->AfficherArticle->Text = L"Afficher un Article";
			this->AfficherArticle->UseVisualStyleBackColor = true;
			this->AfficherArticle->Visible = false;
			// 
			// LabelTest
			// 
			this->LabelTest->AutoSize = true;
			this->LabelTest->Location = System::Drawing::Point(71, 556);
			this->LabelTest->Name = L"LabelTest";
			this->LabelTest->Size = System::Drawing::Size(68, 16);
			this->LabelTest->TabIndex = 5;
			this->LabelTest->Text = L"LabelTest";
			// 
			// MyFormv2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 593);
			this->Controls->Add(this->LabelTest);
			this->Controls->Add(this->GestionStats);
			this->Controls->Add(this->GestionArticle);
			this->Controls->Add(this->GestionCommande);
			this->Controls->Add(this->GestionPersonnel);
			this->Controls->Add(this->GestionClient);
			this->Controls->Add(this->AfficherClient);
			this->Controls->Add(this->SupprimerClient);
			this->Controls->Add(this->MajClient);
			this->Controls->Add(this->CreerClient);
			this->Controls->Add(this->AfficherPersonnel);
			this->Controls->Add(this->SupprimerPersonnel);
			this->Controls->Add(this->MajPersonnel);
			this->Controls->Add(this->CreerPersonnel);
			this->Controls->Add(this->AfficherCommande);
			this->Controls->Add(this->SupprimerCommande);
			this->Controls->Add(this->MajCommande);
			this->Controls->Add(this->CreerCommande);
			this->Controls->Add(this->AfficherArticle);
			this->Controls->Add(this->SupprimerArticle);
			this->Controls->Add(this->MajArticle);
			this->Controls->Add(this->CreerArticle);
			this->Name = L"MyFormv2";
			this->Text = L"MyFormv2";
			this->Load += gcnew System::EventHandler(this, &MyFormv2::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionClient->Text;
		CacherTousBoutton();
		AfficherBouttonClient();
	}
	private: System::Void GestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionPersonnel->Text;
		CacherTousBoutton();
		AfficherBouttonPersonnel();
	}
	private: System::Void GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionCommande->Text;
		CacherTousBoutton();
		AfficherBouttonCommande();
	}
	private: System::Void GestionArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionArticle->Text;
		CacherTousBoutton();
		AfficherBouttonArticle();
	}
	private: System::Void GestionStats_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionStats->Text;
		CacherTousBoutton();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CreerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormCreationClient^ S1 = gcnew MyFormCreationClient();
		S1->Show();
	}
};
}
