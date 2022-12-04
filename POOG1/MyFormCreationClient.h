#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreationClient
	/// </summary>
	public ref class MyFormCreationClient : public System::Windows::Forms::Form
	{
	public:
		MyFormCreationClient(void)
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
		~MyFormCreationClient()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ LabelNom;
	private: System::Windows::Forms::Label^ LabelPrenom;
	private: System::Windows::Forms::Label^ LabelEmail;

	private: System::Windows::Forms::TextBox^ TexteboxNom;
	private: System::Windows::Forms::TextBox^ TexteboxPrenom;
	private: System::Windows::Forms::TextBox^ TexteboxEmail;


	private: System::Windows::Forms::Label^ LabelDateNaissance;
	private: System::Windows::Forms::DateTimePicker^ DatetimePickerNaissance;

	private: System::Windows::Forms::Label^ LabelLivraison;
	private: System::Windows::Forms::Label^ LabelFacturation;


	private: System::Windows::Forms::Label^ LabelNumero;
	private: System::Windows::Forms::Label^ LabelTypeVoie;
	private: System::Windows::Forms::Label^ LabelNomVoie;
	private: System::Windows::Forms::Label^ LabelVille;
	private: System::Windows::Forms::Label^ LabelCodePostal;

	private: System::Windows::Forms::TextBox^ TexteboxFacturationNumero;
	private: System::Windows::Forms::TextBox^ TexteboxFacturationTypeVoie;
	private: System::Windows::Forms::TextBox^ TexteboxFacturationNomVoie;
	private: System::Windows::Forms::TextBox^ TexteboxFacturationCodePostal;
	private: System::Windows::Forms::TextBox^ TexteboxFacturationVille;


	private: System::Windows::Forms::TextBox^ TexteboxLivraisonNumero;
	private: System::Windows::Forms::TextBox^ TexteboxLivraisonTypeVoie;
	private: System::Windows::Forms::TextBox^ TexteboxLivraisonNomVoie;
	private: System::Windows::Forms::TextBox^ TexteboxLivraisonVille;
	private: System::Windows::Forms::TextBox^ TexteboxLivraisonCodePostal;




	private: System::Windows::Forms::Button^ ButtonCreerClient;
	private: System::Windows::Forms::Button^ ButtonCopier;





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
			this->LabelDateNaissance = (gcnew System::Windows::Forms::Label());
			this->DatetimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->ButtonCreerClient = (gcnew System::Windows::Forms::Button());
			this->LabelLivraison = (gcnew System::Windows::Forms::Label());
			this->LabelFacturation = (gcnew System::Windows::Forms::Label());
			this->TexteboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->LabelNom = (gcnew System::Windows::Forms::Label());
			this->LabelEmail = (gcnew System::Windows::Forms::Label());
			this->LabelPrenom = (gcnew System::Windows::Forms::Label());
			this->TexteboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxFacturationNumero = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxFacturationNomVoie = (gcnew System::Windows::Forms::TextBox());
			this->LabelTypeVoie = (gcnew System::Windows::Forms::Label());
			this->LabelNomVoie = (gcnew System::Windows::Forms::Label());
			this->LabelNumero = (gcnew System::Windows::Forms::Label());
			this->TexteboxFacturationTypeVoie = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxFacturationVille = (gcnew System::Windows::Forms::TextBox());
			this->LabelCodePostal = (gcnew System::Windows::Forms::Label());
			this->LabelVille = (gcnew System::Windows::Forms::Label());
			this->TexteboxFacturationCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxLivraisonVille = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxLivraisonCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxLivraisonNumero = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxLivraisonNomVoie = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxLivraisonTypeVoie = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCopier = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelDateNaissance
			// 
			this->LabelDateNaissance->AutoSize = true;
			this->LabelDateNaissance->Location = System::Drawing::Point(57, 128);
			this->LabelDateNaissance->Name = L"LabelDateNaissance";
			this->LabelDateNaissance->Size = System::Drawing::Size(120, 16);
			this->LabelDateNaissance->TabIndex = 2;
			this->LabelDateNaissance->Text = L"Date de naissance";
			// 
			// DatetimePickerNaissance
			// 
			this->DatetimePickerNaissance->Location = System::Drawing::Point(204, 128);
			this->DatetimePickerNaissance->Name = L"DatetimePickerNaissance";
			this->DatetimePickerNaissance->Size = System::Drawing::Size(230, 22);
			this->DatetimePickerNaissance->TabIndex = 4;
			// 
			// ButtonCreerClient
			// 
			this->ButtonCreerClient->Location = System::Drawing::Point(346, 427);
			this->ButtonCreerClient->Name = L"ButtonCreerClient";
			this->ButtonCreerClient->Size = System::Drawing::Size(167, 87);
			this->ButtonCreerClient->TabIndex = 15;
			this->ButtonCreerClient->Text = L"Créer le client";
			this->ButtonCreerClient->UseVisualStyleBackColor = true;
			// 
			// LabelLivraison
			// 
			this->LabelLivraison->AutoSize = true;
			this->LabelLivraison->Location = System::Drawing::Point(606, 215);
			this->LabelLivraison->Name = L"LabelLivraison";
			this->LabelLivraison->Size = System::Drawing::Size(111, 16);
			this->LabelLivraison->TabIndex = 16;
			this->LabelLivraison->Text = L"Adresse livraison";
			// 
			// LabelFacturation
			// 
			this->LabelFacturation->AutoSize = true;
			this->LabelFacturation->Location = System::Drawing::Point(124, 215);
			this->LabelFacturation->Name = L"LabelFacturation";
			this->LabelFacturation->Size = System::Drawing::Size(122, 16);
			this->LabelFacturation->TabIndex = 18;
			this->LabelFacturation->Text = L"Adresse facturation";
			// 
			// TexteboxPrenom
			// 
			this->TexteboxPrenom->Location = System::Drawing::Point(195, 56);
			this->TexteboxPrenom->Name = L"TexteboxPrenom";
			this->TexteboxPrenom->Size = System::Drawing::Size(265, 22);
			this->TexteboxPrenom->TabIndex = 2;
			// 
			// LabelNom
			// 
			this->LabelNom->AutoSize = true;
			this->LabelNom->Location = System::Drawing::Point(105, 26);
			this->LabelNom->Name = L"LabelNom";
			this->LabelNom->Size = System::Drawing::Size(36, 16);
			this->LabelNom->TabIndex = 4;
			this->LabelNom->Text = L"Nom";
			// 
			// LabelEmail
			// 
			this->LabelEmail->AutoSize = true;
			this->LabelEmail->Location = System::Drawing::Point(100, 85);
			this->LabelEmail->Name = L"LabelEmail";
			this->LabelEmail->Size = System::Drawing::Size(41, 16);
			this->LabelEmail->TabIndex = 22;
			this->LabelEmail->Text = L"Email";
			// 
			// LabelPrenom
			// 
			this->LabelPrenom->AutoSize = true;
			this->LabelPrenom->Location = System::Drawing::Point(87, 59);
			this->LabelPrenom->Name = L"LabelPrenom";
			this->LabelPrenom->Size = System::Drawing::Size(54, 16);
			this->LabelPrenom->TabIndex = 23;
			this->LabelPrenom->Text = L"Prénom";
			// 
			// TexteboxEmail
			// 
			this->TexteboxEmail->Location = System::Drawing::Point(195, 85);
			this->TexteboxEmail->Name = L"TexteboxEmail";
			this->TexteboxEmail->Size = System::Drawing::Size(265, 22);
			this->TexteboxEmail->TabIndex = 3;
			// 
			// TexteboxNom
			// 
			this->TexteboxNom->Location = System::Drawing::Point(195, 26);
			this->TexteboxNom->Name = L"TexteboxNom";
			this->TexteboxNom->Size = System::Drawing::Size(265, 22);
			this->TexteboxNom->TabIndex = 25;
			// 
			// TexteboxFacturationNumero
			// 
			this->TexteboxFacturationNumero->Location = System::Drawing::Point(68, 251);
			this->TexteboxFacturationNumero->Name = L"TexteboxFacturationNumero";
			this->TexteboxFacturationNumero->Size = System::Drawing::Size(265, 22);
			this->TexteboxFacturationNumero->TabIndex = 31;
			// 
			// TexteboxFacturationNomVoie
			// 
			this->TexteboxFacturationNomVoie->Location = System::Drawing::Point(68, 310);
			this->TexteboxFacturationNomVoie->Name = L"TexteboxFacturationNomVoie";
			this->TexteboxFacturationNomVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxFacturationNomVoie->TabIndex = 30;
			// 
			// LabelTypeVoie
			// 
			this->LabelTypeVoie->AutoSize = true;
			this->LabelTypeVoie->Location = System::Drawing::Point(387, 284);
			this->LabelTypeVoie->Name = L"LabelTypeVoie";
			this->LabelTypeVoie->Size = System::Drawing::Size(68, 16);
			this->LabelTypeVoie->TabIndex = 29;
			this->LabelTypeVoie->Text = L"Type voie";
			// 
			// LabelNomVoie
			// 
			this->LabelNomVoie->AutoSize = true;
			this->LabelNomVoie->Location = System::Drawing::Point(390, 316);
			this->LabelNomVoie->Name = L"LabelNomVoie";
			this->LabelNomVoie->Size = System::Drawing::Size(65, 16);
			this->LabelNomVoie->TabIndex = 28;
			this->LabelNomVoie->Text = L"Nom voie";
			// 
			// LabelNumero
			// 
			this->LabelNumero->AutoSize = true;
			this->LabelNumero->Location = System::Drawing::Point(390, 254);
			this->LabelNumero->Name = L"LabelNumero";
			this->LabelNumero->Size = System::Drawing::Size(55, 16);
			this->LabelNumero->TabIndex = 27;
			this->LabelNumero->Text = L"Numéro";
			// 
			// TexteboxFacturationTypeVoie
			// 
			this->TexteboxFacturationTypeVoie->Location = System::Drawing::Point(68, 281);
			this->TexteboxFacturationTypeVoie->Name = L"TexteboxFacturationTypeVoie";
			this->TexteboxFacturationTypeVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxFacturationTypeVoie->TabIndex = 26;
			// 
			// TexteboxFacturationVille
			// 
			this->TexteboxFacturationVille->Location = System::Drawing::Point(68, 340);
			this->TexteboxFacturationVille->Name = L"TexteboxFacturationVille";
			this->TexteboxFacturationVille->Size = System::Drawing::Size(265, 22);
			this->TexteboxFacturationVille->TabIndex = 37;
			// 
			// LabelCodePostal
			// 
			this->LabelCodePostal->AutoSize = true;
			this->LabelCodePostal->Location = System::Drawing::Point(378, 373);
			this->LabelCodePostal->Name = L"LabelCodePostal";
			this->LabelCodePostal->Size = System::Drawing::Size(81, 16);
			this->LabelCodePostal->TabIndex = 35;
			this->LabelCodePostal->Text = L"Code Postal";
			// 
			// LabelVille
			// 
			this->LabelVille->AutoSize = true;
			this->LabelVille->Location = System::Drawing::Point(401, 343);
			this->LabelVille->Name = L"LabelVille";
			this->LabelVille->Size = System::Drawing::Size(33, 16);
			this->LabelVille->TabIndex = 33;
			this->LabelVille->Text = L"Ville";
			// 
			// TexteboxFacturationCodePostal
			// 
			this->TexteboxFacturationCodePostal->Location = System::Drawing::Point(68, 370);
			this->TexteboxFacturationCodePostal->Name = L"TexteboxFacturationCodePostal";
			this->TexteboxFacturationCodePostal->Size = System::Drawing::Size(265, 22);
			this->TexteboxFacturationCodePostal->TabIndex = 32;
			// 
			// TexteboxLivraisonVille
			// 
			this->TexteboxLivraisonVille->Location = System::Drawing::Point(530, 340);
			this->TexteboxLivraisonVille->Name = L"TexteboxLivraisonVille";
			this->TexteboxLivraisonVille->Size = System::Drawing::Size(265, 22);
			this->TexteboxLivraisonVille->TabIndex = 47;
			// 
			// TexteboxLivraisonCodePostal
			// 
			this->TexteboxLivraisonCodePostal->Location = System::Drawing::Point(530, 370);
			this->TexteboxLivraisonCodePostal->Name = L"TexteboxLivraisonCodePostal";
			this->TexteboxLivraisonCodePostal->Size = System::Drawing::Size(265, 22);
			this->TexteboxLivraisonCodePostal->TabIndex = 44;
			// 
			// TexteboxLivraisonNumero
			// 
			this->TexteboxLivraisonNumero->Location = System::Drawing::Point(530, 251);
			this->TexteboxLivraisonNumero->Name = L"TexteboxLivraisonNumero";
			this->TexteboxLivraisonNumero->Size = System::Drawing::Size(265, 22);
			this->TexteboxLivraisonNumero->TabIndex = 43;
			// 
			// TexteboxLivraisonNomVoie
			// 
			this->TexteboxLivraisonNomVoie->Location = System::Drawing::Point(530, 310);
			this->TexteboxLivraisonNomVoie->Name = L"TexteboxLivraisonNomVoie";
			this->TexteboxLivraisonNomVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxLivraisonNomVoie->TabIndex = 42;
			// 
			// TexteboxLivraisonTypeVoie
			// 
			this->TexteboxLivraisonTypeVoie->Location = System::Drawing::Point(530, 281);
			this->TexteboxLivraisonTypeVoie->Name = L"TexteboxLivraisonTypeVoie";
			this->TexteboxLivraisonTypeVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxLivraisonTypeVoie->TabIndex = 38;
			// 
			// ButtonCopier
			// 
			this->ButtonCopier->Location = System::Drawing::Point(368, 207);
			this->ButtonCopier->Name = L"ButtonCopier";
			this->ButtonCopier->Size = System::Drawing::Size(102, 33);
			this->ButtonCopier->TabIndex = 48;
			this->ButtonCopier->Text = L"Copier vers";
			this->ButtonCopier->UseVisualStyleBackColor = true;
			this->ButtonCopier->Click += gcnew System::EventHandler(this, &MyFormCreationClient::ButtonCopier_Click);
			// 
			// MyFormCreationClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1267, 584);
			this->Controls->Add(this->ButtonCopier);
			this->Controls->Add(this->TexteboxLivraisonVille);
			this->Controls->Add(this->TexteboxLivraisonCodePostal);
			this->Controls->Add(this->TexteboxLivraisonNumero);
			this->Controls->Add(this->TexteboxLivraisonNomVoie);
			this->Controls->Add(this->TexteboxLivraisonTypeVoie);
			this->Controls->Add(this->TexteboxFacturationVille);
			this->Controls->Add(this->LabelCodePostal);
			this->Controls->Add(this->LabelVille);
			this->Controls->Add(this->TexteboxFacturationCodePostal);
			this->Controls->Add(this->TexteboxFacturationNumero);
			this->Controls->Add(this->TexteboxFacturationNomVoie);
			this->Controls->Add(this->LabelTypeVoie);
			this->Controls->Add(this->LabelNomVoie);
			this->Controls->Add(this->LabelNumero);
			this->Controls->Add(this->TexteboxFacturationTypeVoie);
			this->Controls->Add(this->TexteboxNom);
			this->Controls->Add(this->TexteboxEmail);
			this->Controls->Add(this->LabelPrenom);
			this->Controls->Add(this->LabelEmail);
			this->Controls->Add(this->LabelNom);
			this->Controls->Add(this->TexteboxPrenom);
			this->Controls->Add(this->LabelFacturation);
			this->Controls->Add(this->LabelLivraison);
			this->Controls->Add(this->ButtonCreerClient);
			this->Controls->Add(this->DatetimePickerNaissance);
			this->Controls->Add(this->LabelDateNaissance);
			this->Name = L"MyFormCreationClient";
			this->Text = L"MyFormCreationClient";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationClient::MyFormCreationClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyFormCreationClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void ButtonCopier_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TexteboxLivraisonNumero->Text = this->TexteboxFacturationNumero->Text;
	this->TexteboxLivraisonTypeVoie->Text = this->TexteboxFacturationTypeVoie->Text;
	this->TexteboxLivraisonNomVoie->Text = this->TexteboxFacturationNomVoie->Text;
	this->TexteboxLivraisonVille->Text = this->TexteboxFacturationVille->Text;
	this->TexteboxLivraisonCodePostal->Text = this->TexteboxFacturationCodePostal->Text;
}
};
}
