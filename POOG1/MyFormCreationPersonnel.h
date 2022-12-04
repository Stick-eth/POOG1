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
	private: System::Windows::Forms::Label^ LabelMotDePasse;






	private: System::Windows::Forms::Label^ LabelAdresse;


	private: System::Windows::Forms::Label^ LabelNumero;
	private: System::Windows::Forms::Label^ LabelTypeVoie;
	private: System::Windows::Forms::Label^ LabelNomVoie;
	private: System::Windows::Forms::Label^ LabelVille;
	private: System::Windows::Forms::Label^ LabelCodePostal;

	private: System::Windows::Forms::TextBox^ TexteboxAdresseNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseTypeVoie;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseNomVoie;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseCodePostal;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseVille;
	private: System::Windows::Forms::Button^ ButtonCreerPersonnel;
	private: System::Windows::Forms::TextBox^ TexteboxMotDePasse;
	private: System::Windows::Forms::Label^ LabelSuperieur;
	private: System::Windows::Forms::ComboBox^ ComboboxSuperieur;
	private: System::Windows::Forms::Label^ LabelSelectionPersonnel;
	private: System::Windows::Forms::ComboBox^ ComboboxSelectionPersonnel;
	private: System::Windows::Forms::Button^ ButtonModifierPersonnel;




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
			this->LabelMotDePasse = (gcnew System::Windows::Forms::Label());
			this->ButtonCreerPersonnel = (gcnew System::Windows::Forms::Button());
			this->LabelAdresse = (gcnew System::Windows::Forms::Label());
			this->TexteboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->LabelNom = (gcnew System::Windows::Forms::Label());
			this->LabelEmail = (gcnew System::Windows::Forms::Label());
			this->LabelPrenom = (gcnew System::Windows::Forms::Label());
			this->TexteboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseNumero = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseNomVoie = (gcnew System::Windows::Forms::TextBox());
			this->LabelTypeVoie = (gcnew System::Windows::Forms::Label());
			this->LabelNomVoie = (gcnew System::Windows::Forms::Label());
			this->LabelNumero = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseTypeVoie = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseVille = (gcnew System::Windows::Forms::TextBox());
			this->LabelCodePostal = (gcnew System::Windows::Forms::Label());
			this->LabelVille = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxMotDePasse = (gcnew System::Windows::Forms::TextBox());
			this->LabelSuperieur = (gcnew System::Windows::Forms::Label());
			this->ComboboxSuperieur = (gcnew System::Windows::Forms::ComboBox());
			this->LabelSelectionPersonnel = (gcnew System::Windows::Forms::Label());
			this->ComboboxSelectionPersonnel = (gcnew System::Windows::Forms::ComboBox());
			this->ButtonModifierPersonnel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelMotDePasse
			// 
			this->LabelMotDePasse->AutoSize = true;
			this->LabelMotDePasse->Location = System::Drawing::Point(68, 182);
			this->LabelMotDePasse->Name = L"LabelMotDePasse";
			this->LabelMotDePasse->Size = System::Drawing::Size(89, 16);
			this->LabelMotDePasse->TabIndex = 2;
			this->LabelMotDePasse->Text = L"Mot de passe";
			// 
			// ButtonCreerPersonnel
			// 
			this->ButtonCreerPersonnel->Location = System::Drawing::Point(263, 474);
			this->ButtonCreerPersonnel->Name = L"ButtonCreerPersonnel";
			this->ButtonCreerPersonnel->Size = System::Drawing::Size(167, 87);
			this->ButtonCreerPersonnel->TabIndex = 15;
			this->ButtonCreerPersonnel->Text = L"Créer le personnel";
			this->ButtonCreerPersonnel->UseVisualStyleBackColor = true;
			// 
			// LabelAdresse
			// 
			this->LabelAdresse->AutoSize = true;
			this->LabelAdresse->Location = System::Drawing::Point(300, 266);
			this->LabelAdresse->Name = L"LabelAdresse";
			this->LabelAdresse->Size = System::Drawing::Size(58, 16);
			this->LabelAdresse->TabIndex = 18;
			this->LabelAdresse->Text = L"Adresse";
			// 
			// TexteboxPrenom
			// 
			this->TexteboxPrenom->Location = System::Drawing::Point(211, 113);
			this->TexteboxPrenom->Name = L"TexteboxPrenom";
			this->TexteboxPrenom->Size = System::Drawing::Size(265, 22);
			this->TexteboxPrenom->TabIndex = 2;
			// 
			// LabelNom
			// 
			this->LabelNom->AutoSize = true;
			this->LabelNom->Location = System::Drawing::Point(121, 83);
			this->LabelNom->Name = L"LabelNom";
			this->LabelNom->Size = System::Drawing::Size(36, 16);
			this->LabelNom->TabIndex = 4;
			this->LabelNom->Text = L"Nom";
			// 
			// LabelEmail
			// 
			this->LabelEmail->AutoSize = true;
			this->LabelEmail->Location = System::Drawing::Point(116, 145);
			this->LabelEmail->Name = L"LabelEmail";
			this->LabelEmail->Size = System::Drawing::Size(41, 16);
			this->LabelEmail->TabIndex = 22;
			this->LabelEmail->Text = L"Email";
			// 
			// LabelPrenom
			// 
			this->LabelPrenom->AutoSize = true;
			this->LabelPrenom->Location = System::Drawing::Point(103, 116);
			this->LabelPrenom->Name = L"LabelPrenom";
			this->LabelPrenom->Size = System::Drawing::Size(54, 16);
			this->LabelPrenom->TabIndex = 23;
			this->LabelPrenom->Text = L"Prénom";
			// 
			// TexteboxEmail
			// 
			this->TexteboxEmail->Location = System::Drawing::Point(211, 142);
			this->TexteboxEmail->Name = L"TexteboxEmail";
			this->TexteboxEmail->Size = System::Drawing::Size(265, 22);
			this->TexteboxEmail->TabIndex = 3;
			// 
			// TexteboxNom
			// 
			this->TexteboxNom->Location = System::Drawing::Point(211, 83);
			this->TexteboxNom->Name = L"TexteboxNom";
			this->TexteboxNom->Size = System::Drawing::Size(265, 22);
			this->TexteboxNom->TabIndex = 25;
			// 
			// TexteboxAdresseNumero
			// 
			this->TexteboxAdresseNumero->Location = System::Drawing::Point(211, 299);
			this->TexteboxAdresseNumero->Name = L"TexteboxAdresseNumero";
			this->TexteboxAdresseNumero->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseNumero->TabIndex = 31;
			// 
			// TexteboxAdresseNomVoie
			// 
			this->TexteboxAdresseNomVoie->Location = System::Drawing::Point(211, 358);
			this->TexteboxAdresseNomVoie->Name = L"TexteboxAdresseNomVoie";
			this->TexteboxAdresseNomVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseNomVoie->TabIndex = 30;
			// 
			// LabelTypeVoie
			// 
			this->LabelTypeVoie->AutoSize = true;
			this->LabelTypeVoie->Location = System::Drawing::Point(79, 332);
			this->LabelTypeVoie->Name = L"LabelTypeVoie";
			this->LabelTypeVoie->Size = System::Drawing::Size(68, 16);
			this->LabelTypeVoie->TabIndex = 29;
			this->LabelTypeVoie->Text = L"Type voie";
			// 
			// LabelNomVoie
			// 
			this->LabelNomVoie->AutoSize = true;
			this->LabelNomVoie->Location = System::Drawing::Point(82, 364);
			this->LabelNomVoie->Name = L"LabelNomVoie";
			this->LabelNomVoie->Size = System::Drawing::Size(65, 16);
			this->LabelNomVoie->TabIndex = 28;
			this->LabelNomVoie->Text = L"Nom voie";
			// 
			// LabelNumero
			// 
			this->LabelNumero->AutoSize = true;
			this->LabelNumero->Location = System::Drawing::Point(82, 302);
			this->LabelNumero->Name = L"LabelNumero";
			this->LabelNumero->Size = System::Drawing::Size(55, 16);
			this->LabelNumero->TabIndex = 27;
			this->LabelNumero->Text = L"Numéro";
			// 
			// TexteboxAdresseTypeVoie
			// 
			this->TexteboxAdresseTypeVoie->Location = System::Drawing::Point(211, 329);
			this->TexteboxAdresseTypeVoie->Name = L"TexteboxAdresseTypeVoie";
			this->TexteboxAdresseTypeVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseTypeVoie->TabIndex = 26;
			// 
			// TexteboxAdresseVille
			// 
			this->TexteboxAdresseVille->Location = System::Drawing::Point(211, 388);
			this->TexteboxAdresseVille->Name = L"TexteboxAdresseVille";
			this->TexteboxAdresseVille->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseVille->TabIndex = 37;
			// 
			// LabelCodePostal
			// 
			this->LabelCodePostal->AutoSize = true;
			this->LabelCodePostal->Location = System::Drawing::Point(70, 421);
			this->LabelCodePostal->Name = L"LabelCodePostal";
			this->LabelCodePostal->Size = System::Drawing::Size(81, 16);
			this->LabelCodePostal->TabIndex = 35;
			this->LabelCodePostal->Text = L"Code Postal";
			// 
			// LabelVille
			// 
			this->LabelVille->AutoSize = true;
			this->LabelVille->Location = System::Drawing::Point(93, 391);
			this->LabelVille->Name = L"LabelVille";
			this->LabelVille->Size = System::Drawing::Size(33, 16);
			this->LabelVille->TabIndex = 33;
			this->LabelVille->Text = L"Ville";
			// 
			// TexteboxAdresseCodePostal
			// 
			this->TexteboxAdresseCodePostal->Location = System::Drawing::Point(211, 418);
			this->TexteboxAdresseCodePostal->Name = L"TexteboxAdresseCodePostal";
			this->TexteboxAdresseCodePostal->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseCodePostal->TabIndex = 32;
			// 
			// TexteboxMotDePasse
			// 
			this->TexteboxMotDePasse->Location = System::Drawing::Point(211, 182);
			this->TexteboxMotDePasse->Name = L"TexteboxMotDePasse";
			this->TexteboxMotDePasse->Size = System::Drawing::Size(265, 22);
			this->TexteboxMotDePasse->TabIndex = 38;
			// 
			// LabelSuperieur
			// 
			this->LabelSuperieur->AutoSize = true;
			this->LabelSuperieur->Location = System::Drawing::Point(28, 222);
			this->LabelSuperieur->Name = L"LabelSuperieur";
			this->LabelSuperieur->Size = System::Drawing::Size(145, 16);
			this->LabelSuperieur->TabIndex = 39;
			this->LabelSuperieur->Text = L"Choissisez le supérieur";
			// 
			// ComboboxSuperieur
			// 
			this->ComboboxSuperieur->FormattingEnabled = true;
			this->ComboboxSuperieur->Location = System::Drawing::Point(211, 222);
			this->ComboboxSuperieur->Name = L"ComboboxSuperieur";
			this->ComboboxSuperieur->Size = System::Drawing::Size(265, 24);
			this->ComboboxSuperieur->TabIndex = 40;
			// 
			// LabelSelectionPersonnel
			// 
			this->LabelSelectionPersonnel->AutoSize = true;
			this->LabelSelectionPersonnel->Location = System::Drawing::Point(231, 9);
			this->LabelSelectionPersonnel->Name = L"LabelSelectionPersonnel";
			this->LabelSelectionPersonnel->Size = System::Drawing::Size(218, 16);
			this->LabelSelectionPersonnel->TabIndex = 41;
			this->LabelSelectionPersonnel->Text = L"Selectionner la personne a modifier";
			// 
			// ComboboxSelectionPersonnel
			// 
			this->ComboboxSelectionPersonnel->FormattingEnabled = true;
			this->ComboboxSelectionPersonnel->Location = System::Drawing::Point(222, 28);
			this->ComboboxSelectionPersonnel->Name = L"ComboboxSelectionPersonnel";
			this->ComboboxSelectionPersonnel->Size = System::Drawing::Size(246, 24);
			this->ComboboxSelectionPersonnel->TabIndex = 42;
			// 
			// ButtonModifierPersonnel
			// 
			this->ButtonModifierPersonnel->Location = System::Drawing::Point(457, 474);
			this->ButtonModifierPersonnel->Name = L"ButtonModifierPersonnel";
			this->ButtonModifierPersonnel->Size = System::Drawing::Size(167, 87);
			this->ButtonModifierPersonnel->TabIndex = 43;
			this->ButtonModifierPersonnel->Text = L"Modifier le personnel";
			this->ButtonModifierPersonnel->UseVisualStyleBackColor = true;
			// 
			// MyFormCreationClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1267, 584);
			this->Controls->Add(this->ButtonModifierPersonnel);
			this->Controls->Add(this->ComboboxSelectionPersonnel);
			this->Controls->Add(this->LabelSelectionPersonnel);
			this->Controls->Add(this->ComboboxSuperieur);
			this->Controls->Add(this->LabelSuperieur);
			this->Controls->Add(this->TexteboxMotDePasse);
			this->Controls->Add(this->TexteboxAdresseVille);
			this->Controls->Add(this->LabelCodePostal);
			this->Controls->Add(this->LabelVille);
			this->Controls->Add(this->TexteboxAdresseCodePostal);
			this->Controls->Add(this->TexteboxAdresseNumero);
			this->Controls->Add(this->TexteboxAdresseNomVoie);
			this->Controls->Add(this->LabelTypeVoie);
			this->Controls->Add(this->LabelNomVoie);
			this->Controls->Add(this->LabelNumero);
			this->Controls->Add(this->TexteboxAdresseTypeVoie);
			this->Controls->Add(this->TexteboxNom);
			this->Controls->Add(this->TexteboxEmail);
			this->Controls->Add(this->LabelPrenom);
			this->Controls->Add(this->LabelEmail);
			this->Controls->Add(this->LabelNom);
			this->Controls->Add(this->TexteboxPrenom);
			this->Controls->Add(this->LabelAdresse);
			this->Controls->Add(this->ButtonCreerPersonnel);
			this->Controls->Add(this->LabelMotDePasse);
			this->Name = L"MyFormCreationClient";
			this->Text = L"MyFormCreationPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationClient::MyFormCreationClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyFormCreationClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
