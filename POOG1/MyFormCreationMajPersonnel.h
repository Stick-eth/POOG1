#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreationMajPersonnel
	/// </summary>
	public ref class MyFormCreationMajPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormCreationMajPersonnel(bool etat)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			if (etat == true)
			{
				this->LabelSelectionPersonnel->Visible = false;
				this->ComboboxSelectionPersonnel->Visible = false;
				this->ButtonMajPersonnel->Visible = false;
				this->Text = "MyFormCreationPersonnel";
			}
			else
			{
				this->ButtonCreerPersonnel->Visible = false;
				this->Text = "MyFormMajPersonnel";
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCreationMajPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonMajPersonnel;
	private: System::Windows::Forms::ComboBox^ ComboboxSelectionPersonnel;
	protected:

	private: System::Windows::Forms::TextBox^ TexteboxAdresseVille;
	private: System::Windows::Forms::Label^ LabelAdresseCodePostal;
	private: System::Windows::Forms::Label^ LabelAdresseVille;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseCodePostal;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseNomVoie;
	private: System::Windows::Forms::Label^ LabelAdresseTypeVoie;
	private: System::Windows::Forms::Label^ LabelAdresseNomVoie;
	private: System::Windows::Forms::Label^ LabelAdresseNumero;
	private: System::Windows::Forms::TextBox^ TexteboxAdresseTypeVoie;
	private: System::Windows::Forms::TextBox^ TexteboxNom;
	private: System::Windows::Forms::TextBox^ TexteboxEmail;
	private: System::Windows::Forms::Label^ LabelPrenom;
	private: System::Windows::Forms::Label^ LabelEmail;
	private: System::Windows::Forms::Label^ LabelNom;
	private: System::Windows::Forms::TextBox^ TexteboxPrenom;
	private: System::Windows::Forms::Label^ LabelAdresse;
	private: System::Windows::Forms::Button^ ButtonCreerPersonnel;
	private: System::Windows::Forms::Label^ LabelSelectionPersonnel;
	private: System::Windows::Forms::Label^ LabelMotDePasse;
	private: System::Windows::Forms::TextBox^ TexteboxMotDePasse;
	private: System::Windows::Forms::Label^ LabelSelectionSuperieur;
	private: System::Windows::Forms::ComboBox^ ComboboxSelectionSuperieur;




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
			this->ButtonMajPersonnel = (gcnew System::Windows::Forms::Button());
			this->ComboboxSelectionPersonnel = (gcnew System::Windows::Forms::ComboBox());
			this->TexteboxAdresseVille = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseCodePostal = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseVille = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseNumero = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxAdresseNomVoie = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresseTypeVoie = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseNomVoie = (gcnew System::Windows::Forms::Label());
			this->LabelAdresseNumero = (gcnew System::Windows::Forms::Label());
			this->TexteboxAdresseTypeVoie = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->LabelPrenom = (gcnew System::Windows::Forms::Label());
			this->LabelEmail = (gcnew System::Windows::Forms::Label());
			this->LabelNom = (gcnew System::Windows::Forms::Label());
			this->TexteboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->LabelAdresse = (gcnew System::Windows::Forms::Label());
			this->ButtonCreerPersonnel = (gcnew System::Windows::Forms::Button());
			this->LabelSelectionPersonnel = (gcnew System::Windows::Forms::Label());
			this->LabelMotDePasse = (gcnew System::Windows::Forms::Label());
			this->TexteboxMotDePasse = (gcnew System::Windows::Forms::TextBox());
			this->LabelSelectionSuperieur = (gcnew System::Windows::Forms::Label());
			this->ComboboxSelectionSuperieur = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// ButtonMajPersonnel
			// 
			this->ButtonMajPersonnel->Location = System::Drawing::Point(335, 476);
			this->ButtonMajPersonnel->Name = L"ButtonMajPersonnel";
			this->ButtonMajPersonnel->Size = System::Drawing::Size(167, 87);
			this->ButtonMajPersonnel->TabIndex = 12;
			this->ButtonMajPersonnel->Text = L"Mette à jour le Personnel";
			this->ButtonMajPersonnel->UseVisualStyleBackColor = true;
			// 
			// ComboboxSelectionPersonnel
			// 
			this->ComboboxSelectionPersonnel->FormattingEnabled = true;
			this->ComboboxSelectionPersonnel->Location = System::Drawing::Point(321, 25);
			this->ComboboxSelectionPersonnel->Name = L"ComboboxSelectionPersonnel";
			this->ComboboxSelectionPersonnel->Size = System::Drawing::Size(266, 24);
			this->ComboboxSelectionPersonnel->TabIndex = 1;
			// 
			// TexteboxAdresseVille
			// 
			this->TexteboxAdresseVille->Location = System::Drawing::Point(288, 390);
			this->TexteboxAdresseVille->Name = L"TexteboxAdresseVille";
			this->TexteboxAdresseVille->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseVille->TabIndex = 10;
			// 
			// LabelAdresseCodePostal
			// 
			this->LabelAdresseCodePostal->AutoSize = true;
			this->LabelAdresseCodePostal->Location = System::Drawing::Point(171, 423);
			this->LabelAdresseCodePostal->Name = L"LabelAdresseCodePostal";
			this->LabelAdresseCodePostal->Size = System::Drawing::Size(81, 16);
			this->LabelAdresseCodePostal->TabIndex = 123;
			this->LabelAdresseCodePostal->Text = L"Code Postal";
			// 
			// LabelAdresseVille
			// 
			this->LabelAdresseVille->AutoSize = true;
			this->LabelAdresseVille->Location = System::Drawing::Point(192, 393);
			this->LabelAdresseVille->Name = L"LabelAdresseVille";
			this->LabelAdresseVille->Size = System::Drawing::Size(33, 16);
			this->LabelAdresseVille->TabIndex = 122;
			this->LabelAdresseVille->Text = L"Ville";
			// 
			// TexteboxAdresseCodePostal
			// 
			this->TexteboxAdresseCodePostal->Location = System::Drawing::Point(288, 420);
			this->TexteboxAdresseCodePostal->Name = L"TexteboxAdresseCodePostal";
			this->TexteboxAdresseCodePostal->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseCodePostal->TabIndex = 11;
			// 
			// TexteboxAdresseNumero
			// 
			this->TexteboxAdresseNumero->Location = System::Drawing::Point(288, 303);
			this->TexteboxAdresseNumero->Name = L"TexteboxAdresseNumero";
			this->TexteboxAdresseNumero->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseNumero->TabIndex = 7;
			// 
			// TexteboxAdresseNomVoie
			// 
			this->TexteboxAdresseNomVoie->Location = System::Drawing::Point(288, 362);
			this->TexteboxAdresseNomVoie->Name = L"TexteboxAdresseNomVoie";
			this->TexteboxAdresseNomVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseNomVoie->TabIndex = 9;
			// 
			// LabelAdresseTypeVoie
			// 
			this->LabelAdresseTypeVoie->AutoSize = true;
			this->LabelAdresseTypeVoie->Location = System::Drawing::Point(171, 336);
			this->LabelAdresseTypeVoie->Name = L"LabelAdresseTypeVoie";
			this->LabelAdresseTypeVoie->Size = System::Drawing::Size(68, 16);
			this->LabelAdresseTypeVoie->TabIndex = 121;
			this->LabelAdresseTypeVoie->Text = L"Type voie";
			// 
			// LabelAdresseNomVoie
			// 
			this->LabelAdresseNomVoie->AutoSize = true;
			this->LabelAdresseNomVoie->Location = System::Drawing::Point(171, 362);
			this->LabelAdresseNomVoie->Name = L"LabelAdresseNomVoie";
			this->LabelAdresseNomVoie->Size = System::Drawing::Size(65, 16);
			this->LabelAdresseNomVoie->TabIndex = 120;
			this->LabelAdresseNomVoie->Text = L"Nom voie";
			// 
			// LabelAdresseNumero
			// 
			this->LabelAdresseNumero->AutoSize = true;
			this->LabelAdresseNumero->Location = System::Drawing::Point(180, 306);
			this->LabelAdresseNumero->Name = L"LabelAdresseNumero";
			this->LabelAdresseNumero->Size = System::Drawing::Size(55, 16);
			this->LabelAdresseNumero->TabIndex = 119;
			this->LabelAdresseNumero->Text = L"Numéro";
			// 
			// TexteboxAdresseTypeVoie
			// 
			this->TexteboxAdresseTypeVoie->Location = System::Drawing::Point(288, 333);
			this->TexteboxAdresseTypeVoie->Name = L"TexteboxAdresseTypeVoie";
			this->TexteboxAdresseTypeVoie->Size = System::Drawing::Size(265, 22);
			this->TexteboxAdresseTypeVoie->TabIndex = 8;
			// 
			// TexteboxNom
			// 
			this->TexteboxNom->Location = System::Drawing::Point(279, 85);
			this->TexteboxNom->Name = L"TexteboxNom";
			this->TexteboxNom->Size = System::Drawing::Size(265, 22);
			this->TexteboxNom->TabIndex = 2;
			// 
			// TexteboxEmail
			// 
			this->TexteboxEmail->Location = System::Drawing::Point(279, 144);
			this->TexteboxEmail->Name = L"TexteboxEmail";
			this->TexteboxEmail->Size = System::Drawing::Size(265, 22);
			this->TexteboxEmail->TabIndex = 4;
			// 
			// LabelPrenom
			// 
			this->LabelPrenom->AutoSize = true;
			this->LabelPrenom->Location = System::Drawing::Point(171, 118);
			this->LabelPrenom->Name = L"LabelPrenom";
			this->LabelPrenom->Size = System::Drawing::Size(54, 16);
			this->LabelPrenom->TabIndex = 118;
			this->LabelPrenom->Text = L"Prénom";
			// 
			// LabelEmail
			// 
			this->LabelEmail->AutoSize = true;
			this->LabelEmail->Location = System::Drawing::Point(162, 144);
			this->LabelEmail->Name = L"LabelEmail";
			this->LabelEmail->Size = System::Drawing::Size(41, 16);
			this->LabelEmail->TabIndex = 117;
			this->LabelEmail->Text = L"Email";
			// 
			// LabelNom
			// 
			this->LabelNom->AutoSize = true;
			this->LabelNom->Location = System::Drawing::Point(171, 88);
			this->LabelNom->Name = L"LabelNom";
			this->LabelNom->Size = System::Drawing::Size(36, 16);
			this->LabelNom->TabIndex = 116;
			this->LabelNom->Text = L"Nom";
			// 
			// TexteboxPrenom
			// 
			this->TexteboxPrenom->Location = System::Drawing::Point(279, 115);
			this->TexteboxPrenom->Name = L"TexteboxPrenom";
			this->TexteboxPrenom->Size = System::Drawing::Size(265, 22);
			this->TexteboxPrenom->TabIndex = 3;
			// 
			// LabelAdresse
			// 
			this->LabelAdresse->AutoSize = true;
			this->LabelAdresse->Location = System::Drawing::Point(344, 266);
			this->LabelAdresse->Name = L"LabelAdresse";
			this->LabelAdresse->Size = System::Drawing::Size(58, 16);
			this->LabelAdresse->TabIndex = 115;
			this->LabelAdresse->Text = L"Adresse";
			// 
			// ButtonCreerPersonnel
			// 
			this->ButtonCreerPersonnel->Location = System::Drawing::Point(335, 476);
			this->ButtonCreerPersonnel->Name = L"ButtonCreerPersonnel";
			this->ButtonCreerPersonnel->Size = System::Drawing::Size(167, 87);
			this->ButtonCreerPersonnel->TabIndex = 16;
			this->ButtonCreerPersonnel->Text = L"Créer le Personnel";
			this->ButtonCreerPersonnel->UseVisualStyleBackColor = true;
			// 
			// LabelSelectionPersonnel
			// 
			this->LabelSelectionPersonnel->AutoSize = true;
			this->LabelSelectionPersonnel->Location = System::Drawing::Point(156, 28);
			this->LabelSelectionPersonnel->Name = L"LabelSelectionPersonnel";
			this->LabelSelectionPersonnel->Size = System::Drawing::Size(159, 16);
			this->LabelSelectionPersonnel->TabIndex = 113;
			this->LabelSelectionPersonnel->Text = L"Sélectionner le personnel";
			// 
			// LabelMotDePasse
			// 
			this->LabelMotDePasse->AutoSize = true;
			this->LabelMotDePasse->Location = System::Drawing::Point(162, 174);
			this->LabelMotDePasse->Name = L"LabelMotDePasse";
			this->LabelMotDePasse->Size = System::Drawing::Size(89, 16);
			this->LabelMotDePasse->TabIndex = 124;
			this->LabelMotDePasse->Text = L"Mot de passe";
			// 
			// TexteboxMotDePasse
			// 
			this->TexteboxMotDePasse->Location = System::Drawing::Point(279, 174);
			this->TexteboxMotDePasse->Name = L"TexteboxMotDePasse";
			this->TexteboxMotDePasse->Size = System::Drawing::Size(265, 22);
			this->TexteboxMotDePasse->TabIndex = 5;
			// 
			// LabelSelectionSuperieur
			// 
			this->LabelSelectionSuperieur->AutoSize = true;
			this->LabelSelectionSuperieur->Location = System::Drawing::Point(133, 213);
			this->LabelSelectionSuperieur->Name = L"LabelSelectionSuperieur";
			this->LabelSelectionSuperieur->Size = System::Drawing::Size(140, 16);
			this->LabelSelectionSuperieur->TabIndex = 6;
			this->LabelSelectionSuperieur->Text = L"Selection du supérieur";
			// 
			// ComboboxSelectionSuperieur
			// 
			this->ComboboxSelectionSuperieur->FormattingEnabled = true;
			this->ComboboxSelectionSuperieur->Location = System::Drawing::Point(279, 205);
			this->ComboboxSelectionSuperieur->Name = L"ComboboxSelectionSuperieur";
			this->ComboboxSelectionSuperieur->Size = System::Drawing::Size(266, 24);
			this->ComboboxSelectionSuperieur->TabIndex = 6;
			// 
			// MyFormCreationMajPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 626);
			this->Controls->Add(this->ComboboxSelectionSuperieur);
			this->Controls->Add(this->LabelSelectionSuperieur);
			this->Controls->Add(this->TexteboxMotDePasse);
			this->Controls->Add(this->LabelMotDePasse);
			this->Controls->Add(this->ButtonMajPersonnel);
			this->Controls->Add(this->ComboboxSelectionPersonnel);
			this->Controls->Add(this->TexteboxAdresseVille);
			this->Controls->Add(this->LabelAdresseCodePostal);
			this->Controls->Add(this->LabelAdresseVille);
			this->Controls->Add(this->TexteboxAdresseCodePostal);
			this->Controls->Add(this->TexteboxAdresseNumero);
			this->Controls->Add(this->TexteboxAdresseNomVoie);
			this->Controls->Add(this->LabelAdresseTypeVoie);
			this->Controls->Add(this->LabelAdresseNomVoie);
			this->Controls->Add(this->LabelAdresseNumero);
			this->Controls->Add(this->TexteboxAdresseTypeVoie);
			this->Controls->Add(this->TexteboxNom);
			this->Controls->Add(this->TexteboxEmail);
			this->Controls->Add(this->LabelPrenom);
			this->Controls->Add(this->LabelEmail);
			this->Controls->Add(this->LabelNom);
			this->Controls->Add(this->TexteboxPrenom);
			this->Controls->Add(this->LabelAdresse);
			this->Controls->Add(this->ButtonCreerPersonnel);
			this->Controls->Add(this->LabelSelectionPersonnel);
			this->Name = L"MyFormCreationMajPersonnel";
			this->Text = L"MyFormCreationMajPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationMajPersonnel::MyFormCreationMajPersonnel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCreationMajPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
