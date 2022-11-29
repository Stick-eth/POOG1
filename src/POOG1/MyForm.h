#pragma once
#include "MyFormv2.h"

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
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GestionClient;
	private: System::Windows::Forms::Button^ GestionPersonnel;
	private: System::Windows::Forms::Button^ GestionCommande;
	private: System::Windows::Forms::Button^ GestionArticle;
	private: System::Windows::Forms::Button^ GestionStats;
	private: System::Windows::Forms::Label^ LabelTest;
	private: System::Windows::Forms::Button^ OnOffLabel;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->LabelTest = (gcnew System::Windows::Forms::Label());
			this->OnOffLabel = (gcnew System::Windows::Forms::Button());
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
			this->GestionClient->Click += gcnew System::EventHandler(this, &MyForm::GestionClient_Click);
			// 
			// GestionPersonnel
			// 
			this->GestionPersonnel->Location = System::Drawing::Point(12, 118);
			this->GestionPersonnel->Name = L"GestionPersonnel";
			this->GestionPersonnel->Size = System::Drawing::Size(200, 100);
			this->GestionPersonnel->TabIndex = 1;
			this->GestionPersonnel->Text = L"Gestion Personnel";
			this->GestionPersonnel->UseVisualStyleBackColor = true;
			this->GestionPersonnel->Click += gcnew System::EventHandler(this, &MyForm::GestionPersonnel_Click);
			// 
			// GestionCommande
			// 
			this->GestionCommande->Location = System::Drawing::Point(12, 224);
			this->GestionCommande->Name = L"GestionCommande";
			this->GestionCommande->Size = System::Drawing::Size(200, 100);
			this->GestionCommande->TabIndex = 2;
			this->GestionCommande->Text = L"Gestion Commande";
			this->GestionCommande->UseVisualStyleBackColor = true;
			this->GestionCommande->Click += gcnew System::EventHandler(this, &MyForm::GestionCommande_Click);
			// 
			// GestionArticle
			// 
			this->GestionArticle->Location = System::Drawing::Point(12, 330);
			this->GestionArticle->Name = L"GestionArticle";
			this->GestionArticle->Size = System::Drawing::Size(200, 100);
			this->GestionArticle->TabIndex = 3;
			this->GestionArticle->Text = L"Gestion Article";
			this->GestionArticle->UseVisualStyleBackColor = true;
			this->GestionArticle->Click += gcnew System::EventHandler(this, &MyForm::GestionArticle_Click);
			// 
			// GestionStats
			// 
			this->GestionStats->Location = System::Drawing::Point(12, 436);
			this->GestionStats->Name = L"GestionStats";
			this->GestionStats->Size = System::Drawing::Size(200, 100);
			this->GestionStats->TabIndex = 4;
			this->GestionStats->Text = L"Gestion Stats";
			this->GestionStats->UseVisualStyleBackColor = true;
			this->GestionStats->Click += gcnew System::EventHandler(this, &MyForm::GestionStats_Click);
			// 
			// LabelTest
			// 
			this->LabelTest->AutoSize = true;
			this->LabelTest->Location = System::Drawing::Point(360, 181);
			this->LabelTest->Name = L"LabelTest";
			this->LabelTest->Size = System::Drawing::Size(68, 16);
			this->LabelTest->TabIndex = 5;
			this->LabelTest->Text = L"LabelTest";
			// 
			// OnOffLabel
			// 
			this->OnOffLabel->Location = System::Drawing::Point(218, 12);
			this->OnOffLabel->Name = L"OnOffLabel";
			this->OnOffLabel->Size = System::Drawing::Size(200, 100);
			this->OnOffLabel->TabIndex = 6;
			this->OnOffLabel->Text = L"Ouvrir l\'interface V2";
			this->OnOffLabel->UseVisualStyleBackColor = true;
			this->OnOffLabel->Click += gcnew System::EventHandler(this, &MyForm::OnOffLabel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 593);
			this->Controls->Add(this->OnOffLabel);
			this->Controls->Add(this->LabelTest);
			this->Controls->Add(this->GestionStats);
			this->Controls->Add(this->GestionArticle);
			this->Controls->Add(this->GestionCommande);
			this->Controls->Add(this->GestionPersonnel);
			this->Controls->Add(this->GestionClient);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionClient->Text;
	}
	private: System::Void GestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionPersonnel->Text;
	}
	private: System::Void GestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionCommande->Text;
	}
	private: System::Void GestionArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionArticle->Text;
	}
	private: System::Void GestionStats_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->GestionStats->Text;
		MyFormv2^ S1 = gcnew MyFormv2(1);
		S1->Show();
	}
	private: System::Void OnOffLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Visible = !this->LabelTest->Visible;
		MyFormv2^ S1 = gcnew MyFormv2(0);
		S1->Show();
	}



private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
