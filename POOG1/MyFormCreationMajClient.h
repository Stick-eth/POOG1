#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreationMajClient
	/// </summary>
	public ref class MyFormCreationMajClient : public System::Windows::Forms::Form
	{
	public:
		MyFormCreationMajClient(bool etat)
		{
			InitializeComponent();
			
			//TODO: ajoutez ici le code du constructeur
			
			if (etat == true)
			{
				this->LabelSelection->Visible = false;
				this->ComboboxSelection->Visible = false;
				this->ButtonMajClient->Visible = false;
				this->Text = "MyFormCreationClient";
			}
			else
			{
				this->ButtonCreerClient->Visible = false;
				this->Text = "MyFormMajClient";
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCreationMajClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ ComboboxSelection;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseLivraisonVille;
	private: System::Windows::Forms::Label^ LabelAdresseLivraisonCodePostal;
	private: System::Windows::Forms::Label^ LabelAdresseLivraisonVille;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseLivraisonCodePostal;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseLivraisonNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseLivraisonNomVoie;
	private: System::Windows::Forms::Label^ LabelAdresseLivraisonTypeVoie;
	private: System::Windows::Forms::Label^ LabelAdresseLivraisonNomVoie;
	private: System::Windows::Forms::Label^ LabelAdresseLivraisonNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseLivraisonTypeVoie;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseFacturationVille;
	private: System::Windows::Forms::Label^ LabelAdresseFacturationCodePostal;
	private: System::Windows::Forms::Label^ LabelAdresseFacturationVille;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseFacturationCodePostal;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseFacturationNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseFacturationNomVoie;
	private: System::Windows::Forms::Label^ LabelAdresseFacturationTypeVoie;
	private: System::Windows::Forms::Label^ LabelAdresseFacturationNomVoie;
	private: System::Windows::Forms::Label^ LabelAdresseFacturationNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseFacturationTypeVoie;
	private: System::Windows::Forms::TextBox^ TexteboxNom;
	private: System::Windows::Forms::TextBox^ TexteboxEmail;
	private: System::Windows::Forms::Label^ LabelPrenom;
	private: System::Windows::Forms::Label^ LabelEmail;
	private: System::Windows::Forms::Label^ LabelNom;
	private: System::Windows::Forms::TextBox^ TexteboxPrenom;
	private: System::Windows::Forms::Label^ LabelAdresseFacturation;
	private: System::Windows::Forms::Label^ LabelAdresseLivraison;
	private: System::Windows::Forms::Button^ ButtonCreerClient;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissance;
	private: System::Windows::Forms::Label^ LabelDateNaissance;
	private: System::Windows::Forms::Label^ LabelSelection;
	private: System::Windows::Forms::Button^ ButtonMajClient;
	private: System::Windows::Forms::Button^ ButtonCopy;


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
			this->ComboboxSelection = (gcnew System::Windows::Forms::ComboBox());
			this->TexteboxAdresseLivraisonVille = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseLivraisonCodePostal = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseLivraisonVille = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseLivraisonCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseLivraisonNumero = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseLivraisonNomVoie = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseLivraisonTypeVoie = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseLivraisonNomVoie = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseLivraisonNumero = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseLivraisonTypeVoie = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseFacturationVille = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseFacturationCodePostal = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseFacturationVille = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseFacturationCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseFacturationNumero = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseFacturationNomVoie = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseFacturationTypeVoie = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseFacturationNomVoie = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseFacturationNumero = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseFacturationTypeVoie = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->LabelPrenom = (gcnew System::Windows::Forms::Label());
			this->LabelEmail = (gcnew System::Windows::Forms::Label());
			this->LabelNom = (gcnew System::Windows::Forms::Label());
			this->TexteboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseFacturation = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseLivraison = (gcnew System::Windows::Forms::Label());
			this->ButtonCreerClient = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->LabelDateNaissance = (gcnew System::Windows::Forms::Label());
			this->LabelSelection = (gcnew System::Windows::Forms::Label());
			this->ButtonMajClient = (gcnew System::Windows::Forms::Button());
			this->ButtonCopy = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ComboboxSelection
			// 
			this->ComboboxSelection->FormattingEnabled = true;
			this->ComboboxSelection->Location = System::Drawing::Point(258, 6);
			this->ComboboxSelection->Name = L"ComboboxSelection";
			this->ComboboxSelection->Size = System::Drawing::Size(266, 24);
			this->ComboboxSelection->TabIndex = 1;
			// 
			// TexteboxAdresseLivraisonVille
			// 
			this->TexteboxAdresseLivraisonVille->Location = System::Drawing::Point(686, 374);
			this->TexteboxAdresseLivraisonVille->Name = L"TexteboxAdresseLivraisonVille";
			this->TexteboxAdresseLivraisonVille->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseLivraisonVille->TabIndex = 15;
			// 
			// LabelAdresseLivraisonCodePostal
			// 
			this->LabelAdresseLivraisonCodePostal->AutoSize = true;
			this->LabelAdresseLivraisonCodePostal->Location = System::Drawing::Point(588, 407);
			this->LabelAdresseLivraisonCodePostal->Name = L"LabelAdresseLivraisonCodePostal";
			this->LabelAdresseLivraisonCodePostal->Size = System::Drawing::Size(81, 16);
			this->LabelAdresseLivraisonCodePostal->TabIndex = 110;
			this->LabelAdresseLivraisonCodePostal->Text = L"Code Postal";
			// 
			// LabelAdresseLivraisonVille
			// 
			this->LabelAdresseLivraisonVille->AutoSize = true;
			this->LabelAdresseLivraisonVille->Location = System::Drawing::Point(609, 377);
			this->LabelAdresseLivraisonVille->Name = L"LabelAdresseLivraisonVille";
			this->LabelAdresseLivraisonVille->Size = System::Drawing::Size(33, 16);
			this->LabelAdresseLivraisonVille->TabIndex = 109;
			this->LabelAdresseLivraisonVille->Text = L"Ville";
			// 
			// TexteboxAdresseLivraisonCodePostal
			// 
			this->TexteboxAdresseLivraisonCodePostal->Location = System::Drawing::Point(686, 404);
			this->TexteboxAdresseLivraisonCodePostal->Name = L"TexteboxAdresseLivraisonCodePostal";
			this->TexteboxAdresseLivraisonCodePostal->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseLivraisonCodePostal->TabIndex = 16;
			// 
			// TexteboxAdresseLivraisonNumero
			// 
			this->TexteboxAdresseLivraisonNumero->Location = System::Drawing::Point(686, 287);
			this->TexteboxAdresseLivraisonNumero->Name = L"TexteboxAdresseLivraisonNumero";
			this->TexteboxAdresseLivraisonNumero->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseLivraisonNumero->TabIndex = 11;
			// 
			// TexteboxAdresseLivraisonNomVoie
			// 
			this->TexteboxAdresseLivraisonNomVoie->Location = System::Drawing::Point(686, 346);
			this->TexteboxAdresseLivraisonNomVoie->Name = L"TexteboxAdresseLivraisonNomVoie";
			this->TexteboxAdresseLivraisonNomVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseLivraisonNomVoie->TabIndex = 13;
			// 
			// LabelAdresseLivraisonTypeVoie
			// 
			this->LabelAdresseLivraisonTypeVoie->AutoSize = true;
			this->LabelAdresseLivraisonTypeVoie->Location = System::Drawing::Point(588, 320);
			this->LabelAdresseLivraisonTypeVoie->Name = L"LabelAdresseLivraisonTypeVoie";
			this->LabelAdresseLivraisonTypeVoie->Size = System::Drawing::Size(68, 16);
			this->LabelAdresseLivraisonTypeVoie->TabIndex = 105;
			this->LabelAdresseLivraisonTypeVoie->Text = L"Type voie";
			// 
			// LabelAdresseLivraisonNomVoie
			// 
			this->LabelAdresseLivraisonNomVoie->AutoSize = true;
			this->LabelAdresseLivraisonNomVoie->Location = System::Drawing::Point(588, 346);
			this->LabelAdresseLivraisonNomVoie->Name = L"LabelAdresseLivraisonNomVoie";
			this->LabelAdresseLivraisonNomVoie->Size = System::Drawing::Size(65, 16);
			this->LabelAdresseLivraisonNomVoie->TabIndex = 104;
			this->LabelAdresseLivraisonNomVoie->Text = L"Nom voie";
			// 
			// LabelAdresseLivraisonNumero
			// 
			this->LabelAdresseLivraisonNumero->AutoSize = true;
			this->LabelAdresseLivraisonNumero->Location = System::Drawing::Point(597, 290);
			this->LabelAdresseLivraisonNumero->Name = L"LabelAdresseLivraisonNumero";
			this->LabelAdresseLivraisonNumero->Size = System::Drawing::Size(55, 16);
			this->LabelAdresseLivraisonNumero->TabIndex = 103;
			this->LabelAdresseLivraisonNumero->Text = L"Numéro";
			// 
			// TexteboxAdresseLivraisonTypeVoie
			// 
			this->TexteboxAdresseLivraisonTypeVoie->Location = System::Drawing::Point(686, 317);
			this->TexteboxAdresseLivraisonTypeVoie->Name = L"TexteboxAdresseLivraisonTypeVoie";
			this->TexteboxAdresseLivraisonTypeVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseLivraisonTypeVoie->TabIndex = 12;
			// 
			// TexteboxAdresseFacturationVille
			// 
			this->TexteboxAdresseFacturationVille->Location = System::Drawing::Point(225, 371);
			this->TexteboxAdresseFacturationVille->Name = L"TexteboxAdresseFacturationVille";
			this->TexteboxAdresseFacturationVille->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseFacturationVille->TabIndex = 9;
			// 
			// LabelAdresseFacturationCodePostal
			// 
			this->LabelAdresseFacturationCodePostal->AutoSize = true;
			this->LabelAdresseFacturationCodePostal->Location = System::Drawing::Point(108, 404);
			this->LabelAdresseFacturationCodePostal->Name = L"LabelAdresseFacturationCodePostal";
			this->LabelAdresseFacturationCodePostal->Size = System::Drawing::Size(81, 16);
			this->LabelAdresseFacturationCodePostal->TabIndex = 100;
			this->LabelAdresseFacturationCodePostal->Text = L"Code Postal";
			// 
			// LabelAdresseFacturationVille
			// 
			this->LabelAdresseFacturationVille->AutoSize = true;
			this->LabelAdresseFacturationVille->Location = System::Drawing::Point(129, 374);
			this->LabelAdresseFacturationVille->Name = L"LabelAdresseFacturationVille";
			this->LabelAdresseFacturationVille->Size = System::Drawing::Size(33, 16);
			this->LabelAdresseFacturationVille->TabIndex = 99;
			this->LabelAdresseFacturationVille->Text = L"Ville";
			// 
			// TexteboxAdresseFacturationCodePostal
			// 
			this->TexteboxAdresseFacturationCodePostal->Location = System::Drawing::Point(225, 401);
			this->TexteboxAdresseFacturationCodePostal->Name = L"TexteboxAdresseFacturationCodePostal";
			this->TexteboxAdresseFacturationCodePostal->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseFacturationCodePostal->TabIndex = 10;
			// 
			// TexteboxAdresseFacturationNumero
			// 
			this->TexteboxAdresseFacturationNumero->Location = System::Drawing::Point(225, 284);
			this->TexteboxAdresseFacturationNumero->Name = L"TexteboxAdresseFacturationNumero";
			this->TexteboxAdresseFacturationNumero->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseFacturationNumero->TabIndex = 6;
			// 
			// TexteboxAdresseFacturationNomVoie
			// 
			this->TexteboxAdresseFacturationNomVoie->Location = System::Drawing::Point(225, 343);
			this->TexteboxAdresseFacturationNomVoie->Name = L"TexteboxAdresseFacturationNomVoie";
			this->TexteboxAdresseFacturationNomVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseFacturationNomVoie->TabIndex = 8;
			// 
			// LabelAdresseFacturationTypeVoie
			// 
			this->LabelAdresseFacturationTypeVoie->AutoSize = true;
			this->LabelAdresseFacturationTypeVoie->Location = System::Drawing::Point(108, 317);
			this->LabelAdresseFacturationTypeVoie->Name = L"LabelAdresseFacturationTypeVoie";
			this->LabelAdresseFacturationTypeVoie->Size = System::Drawing::Size(68, 16);
			this->LabelAdresseFacturationTypeVoie->TabIndex = 95;
			this->LabelAdresseFacturationTypeVoie->Text = L"Type voie";
			// 
			// LabelAdresseFacturationNomVoie
			// 
			this->LabelAdresseFacturationNomVoie->AutoSize = true;
			this->LabelAdresseFacturationNomVoie->Location = System::Drawing::Point(108, 343);
			this->LabelAdresseFacturationNomVoie->Name = L"LabelAdresseFacturationNomVoie";
			this->LabelAdresseFacturationNomVoie->Size = System::Drawing::Size(65, 16);
			this->LabelAdresseFacturationNomVoie->TabIndex = 94;
			this->LabelAdresseFacturationNomVoie->Text = L"Nom voie";
			// 
			// LabelAdresseFacturationNumero
			// 
			this->LabelAdresseFacturationNumero->AutoSize = true;
			this->LabelAdresseFacturationNumero->Location = System::Drawing::Point(117, 287);
			this->LabelAdresseFacturationNumero->Name = L"LabelAdresseFacturationNumero";
			this->LabelAdresseFacturationNumero->Size = System::Drawing::Size(55, 16);
			this->LabelAdresseFacturationNumero->TabIndex = 93;
			this->LabelAdresseFacturationNumero->Text = L"Numéro";
			// 
			// TexteboxAdresseFacturationTypeVoie
			// 
			this->TexteboxAdresseFacturationTypeVoie->Location = System::Drawing::Point(225, 314);
			this->TexteboxAdresseFacturationTypeVoie->Name = L"TexteboxAdresseFacturationTypeVoie";
			this->TexteboxAdresseFacturationTypeVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseFacturationTypeVoie->TabIndex = 7;
			// 
			// TexteboxNom
			// 
			this->TexteboxNom->Location = System::Drawing::Point(216, 66);
			this->TexteboxNom->Name = L"TexteboxNom";
			this->TexteboxNom->Size = System::Drawing::Size(265, 22);
			this->TexteboxNom->TabIndex = 2;
			// 
			// TexteboxEmail
			// 
			this->TexteboxEmail->Location = System::Drawing::Point(216, 125);
			this->TexteboxEmail->Name = L"TexteboxEmail";
			this->TexteboxEmail->Size = System::Drawing::Size(265, 22);
			this->TexteboxEmail->TabIndex = 4;
			// 
			// LabelPrenom
			// 
			this->LabelPrenom->AutoSize = true;
			this->LabelPrenom->Location = System::Drawing::Point(108, 99);
			this->LabelPrenom->Name = L"LabelPrenom";
			this->LabelPrenom->Size = System::Drawing::Size(54, 16);
			this->LabelPrenom->TabIndex = 89;
			this->LabelPrenom->Text = L"Prénom";
			// 
			// LabelEmail
			// 
			this->LabelEmail->AutoSize = true;
			this->LabelEmail->Location = System::Drawing::Point(99, 125);
			this->LabelEmail->Name = L"LabelEmail";
			this->LabelEmail->Size = System::Drawing::Size(41, 16);
			this->LabelEmail->TabIndex = 88;
			this->LabelEmail->Text = L"Email";
			// 
			// LabelNom
			// 
			this->LabelNom->AutoSize = true;
			this->LabelNom->Location = System::Drawing::Point(108, 69);
			this->LabelNom->Name = L"LabelNom";
			this->LabelNom->Size = System::Drawing::Size(36, 16);
			this->LabelNom->TabIndex = 87;
			this->LabelNom->Text = L"Nom";
			// 
			// TexteboxPrenom
			// 
			this->TexteboxPrenom->Location = System::Drawing::Point(216, 96);
			this->TexteboxPrenom->Name = L"TexteboxPrenom";
			this->TexteboxPrenom->Size = System::Drawing::Size(265, 22);
			this->TexteboxPrenom->TabIndex = 3;
			// 
			// LabelAdresseFacturation
			// 
			this->LabelAdresseFacturation->AutoSize = true;
			this->LabelAdresseFacturation->Location = System::Drawing::Point(281, 247);
			this->LabelAdresseFacturation->Name = L"LabelAdresseFacturation";
			this->LabelAdresseFacturation->Size = System::Drawing::Size(122, 16);
			this->LabelAdresseFacturation->TabIndex = 85;
			this->LabelAdresseFacturation->Text = L"Adresse facturation";
			// 
			// LabelAdresseLivraison
			// 
			this->LabelAdresseLivraison->AutoSize = true;
			this->LabelAdresseLivraison->Location = System::Drawing::Point(764, 247);
			this->LabelAdresseLivraison->Name = L"LabelAdresseLivraison";
			this->LabelAdresseLivraison->Size = System::Drawing::Size(111, 16);
			this->LabelAdresseLivraison->TabIndex = 84;
			this->LabelAdresseLivraison->Text = L"Adresse livraison";
			// 
			// ButtonCreerClient
			// 
			this->ButtonCreerClient->Location = System::Drawing::Point(485, 457);
			this->ButtonCreerClient->Name = L"ButtonCreerClient";
			this->ButtonCreerClient->Size = System::Drawing::Size(167, 87);
			this->ButtonCreerClient->TabIndex = 17;
			this->ButtonCreerClient->Text = L"Créer le client";
			this->ButtonCreerClient->UseVisualStyleBackColor = true;
			this->ButtonCreerClient->Click += gcnew System::EventHandler(this, &MyFormCreationMajClient::ButtonCreerClient_Click);
			// 
			// dateTimePickerNaissance
			// 
			this->dateTimePickerNaissance->Location = System::Drawing::Point(225, 168);
			this->dateTimePickerNaissance->Name = L"dateTimePickerNaissance";
			this->dateTimePickerNaissance->Size = System::Drawing::Size(230, 22);
			this->dateTimePickerNaissance->TabIndex = 5;
			// 
			// LabelDateNaissance
			// 
			this->LabelDateNaissance->AutoSize = true;
			this->LabelDateNaissance->Location = System::Drawing::Point(78, 168);
			this->LabelDateNaissance->Name = L"LabelDateNaissance";
			this->LabelDateNaissance->Size = System::Drawing::Size(120, 16);
			this->LabelDateNaissance->TabIndex = 81;
			this->LabelDateNaissance->Text = L"Date de naissance";
			// 
			// LabelSelection
			// 
			this->LabelSelection->AutoSize = true;
			this->LabelSelection->Location = System::Drawing::Point(100, 9);
			this->LabelSelection->Name = L"LabelSelection";
			this->LabelSelection->Size = System::Drawing::Size(130, 16);
			this->LabelSelection->TabIndex = 80;
			this->LabelSelection->Text = L"Sélectionner le client";
			// 
			// ButtonMajClient
			// 
			this->ButtonMajClient->Location = System::Drawing::Point(485, 457);
			this->ButtonMajClient->Name = L"ButtonMajClient";
			this->ButtonMajClient->Size = System::Drawing::Size(167, 87);
			this->ButtonMajClient->TabIndex = 18;
			this->ButtonMajClient->Text = L"Créer le client";
			this->ButtonMajClient->UseVisualStyleBackColor = true;
			this->ButtonMajClient->Click += gcnew System::EventHandler(this, &MyFormCreationMajClient::ButtonMajClient_Click);
			// 
			// ButtonCopy
			// 
			this->ButtonCopy->Location = System::Drawing::Point(545, 234);
			this->ButtonCopy->Name = L"ButtonCopy";
			this->ButtonCopy->Size = System::Drawing::Size(75, 42);
			this->ButtonCopy->TabIndex = 11;
			this->ButtonCopy->Text = L"Copier Adresse";
			this->ButtonCopy->UseVisualStyleBackColor = true;
			this->ButtonCopy->Click += gcnew System::EventHandler(this, &MyFormCreationMajClient::ButtonCopy_Click);
			// 
			// MyFormCreationMajClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 568);
			this->Controls->Add(this->ButtonCopy);
			this->Controls->Add(this->ButtonMajClient);
			this->Controls->Add(this->ComboboxSelection);
			this->Controls->Add(this->TexteboxAdresseLivraisonVille);
			this->Controls->Add(this->LabelAdresseLivraisonCodePostal);
			this->Controls->Add(this->LabelAdresseLivraisonVille);
			this->Controls->Add(this->TexteboxAdresseLivraisonCodePostal);
			this->Controls->Add(this->TexteboxAdresseLivraisonNumero);
			this->Controls->Add(this->TexteboxAdresseLivraisonNomVoie);
			this->Controls->Add(this->LabelAdresseLivraisonTypeVoie);
			this->Controls->Add(this->LabelAdresseLivraisonNomVoie);
			this->Controls->Add(this->LabelAdresseLivraisonNumero);
			this->Controls->Add(this->TexteboxAdresseLivraisonTypeVoie);
			this->Controls->Add(this->TexteboxAdresseFacturationVille);
			this->Controls->Add(this->LabelAdresseFacturationCodePostal);
			this->Controls->Add(this->LabelAdresseFacturationVille);
			this->Controls->Add(this->TexteboxAdresseFacturationCodePostal);
			this->Controls->Add(this->TexteboxAdresseFacturationNumero);
			this->Controls->Add(this->TexteboxAdresseFacturationNomVoie);
			this->Controls->Add(this->LabelAdresseFacturationTypeVoie);
			this->Controls->Add(this->LabelAdresseFacturationNomVoie);
			this->Controls->Add(this->LabelAdresseFacturationNumero);
			this->Controls->Add(this->TexteboxAdresseFacturationTypeVoie);
			this->Controls->Add(this->TexteboxNom);
			this->Controls->Add(this->TexteboxEmail);
			this->Controls->Add(this->LabelPrenom);
			this->Controls->Add(this->LabelEmail);
			this->Controls->Add(this->LabelNom);
			this->Controls->Add(this->TexteboxPrenom);
			this->Controls->Add(this->LabelAdresseFacturation);
			this->Controls->Add(this->LabelAdresseLivraison);
			this->Controls->Add(this->ButtonCreerClient);
			this->Controls->Add(this->dateTimePickerNaissance);
			this->Controls->Add(this->LabelDateNaissance);
			this->Controls->Add(this->LabelSelection);
			this->Name = L"MyFormCreationMajClient";
			this->Text = L"MyFormCreationMajClient";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationMajClient::MyFormCreationMajClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonCreerClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ButtonMajClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ButtonCopy_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TexteboxAdresseLivraisonNumero->Text = this->TexteboxAdresseFacturationNumero->Text;
		this->TexteboxAdresseLivraisonTypeVoie->Text = this->TexteboxAdresseFacturationTypeVoie->Text;
		this->TexteboxAdresseLivraisonNomVoie->Text = this->TexteboxAdresseFacturationNomVoie->Text;
		this->TexteboxAdresseLivraisonVille->Text = this->TexteboxAdresseFacturationVille->Text;
		this->TexteboxAdresseLivraisonCodePostal->Text = this->TexteboxAdresseFacturationCodePostal->Text;
	}
private: System::Void MyFormCreationMajClient_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
