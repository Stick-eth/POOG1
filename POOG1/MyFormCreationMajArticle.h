#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreationMajArticle
	/// </summary>
	public ref class MyFormCreationMajArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormCreationMajArticle(bool etat)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			if (etat == true)
			{
				this->LabelSelectionArticle->Visible = false;
				this->ComboboxSelectionArticle->Visible = false;
				this->ButtonMaj->Visible = false;
				this->Text = "MyFormeCreationArticle";
			}
			else
			{
				this->ButtonCreer->Visible = false;
				this->Text = "MyFormeMajArticle";
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCreationMajArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonCreer;
	protected:
	private: System::Windows::Forms::TextBox^ TexteboxCouleur;
	private: System::Windows::Forms::TextBox^ TexteboxUniteMesure;
	private: System::Windows::Forms::TextBox^ TexteboxSeuilReaprovisionement;
	private: System::Windows::Forms::TextBox^ TexteboxQuantiteEnStock;
	private: System::Windows::Forms::TextBox^ TexteboxPrixHT;
	private: System::Windows::Forms::TextBox^ TexteboxDesignation;
	private: System::Windows::Forms::TextBox^ TexteboxReference;
	private: System::Windows::Forms::Label^ LabelNature;
	private: System::Windows::Forms::CheckedListBox^ CheckedlistboxNature;
	private: System::Windows::Forms::Label^ LabelCouleur;
	private: System::Windows::Forms::Label^ LabelUniteMesure;
	private: System::Windows::Forms::Label^ LabelPrixHT;
	private: System::Windows::Forms::Label^ LabelReductionGrandVolumes;
	private: System::Windows::Forms::Label^ LabelSeuilReaprovisionement;
	private: System::Windows::Forms::Label^ LabelQuantiteEnStock;
	private: System::Windows::Forms::Label^ LabelDesignation;
	private: System::Windows::Forms::Label^ LabelReference;
	private: System::Windows::Forms::Label^ LabelSelectionArticle;
	private: System::Windows::Forms::ComboBox^ ComboboxSelectionArticle;
	private: System::Windows::Forms::Button^ ButtonMaj;
	private: System::Windows::Forms::RadioButton^ RadiobuttonReducGrandVolumeNon;
	private: System::Windows::Forms::RadioButton^ RadiobuttonReducGrandVolumeOui;

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
			this->ButtonCreer = (gcnew System::Windows::Forms::Button());
			this->TexteboxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxUniteMesure = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxSeuilReaprovisionement = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxQuantiteEnStock = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxDesignation = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxReference = (gcnew System::Windows::Forms::TextBox());
			this->LabelNature = (gcnew System::Windows::Forms::Label());
			this->CheckedlistboxNature = (gcnew System::Windows::Forms::CheckedListBox());
			this->LabelCouleur = (gcnew System::Windows::Forms::Label());
			this->LabelUniteMesure = (gcnew System::Windows::Forms::Label());
			this->LabelPrixHT = (gcnew System::Windows::Forms::Label());
			this->LabelReductionGrandVolumes = (gcnew System::Windows::Forms::Label());
			this->LabelSeuilReaprovisionement = (gcnew System::Windows::Forms::Label());
			this->LabelQuantiteEnStock = (gcnew System::Windows::Forms::Label());
			this->LabelDesignation = (gcnew System::Windows::Forms::Label());
			this->LabelReference = (gcnew System::Windows::Forms::Label());
			this->LabelSelectionArticle = (gcnew System::Windows::Forms::Label());
			this->ComboboxSelectionArticle = (gcnew System::Windows::Forms::ComboBox());
			this->ButtonMaj = (gcnew System::Windows::Forms::Button());
			this->RadiobuttonReducGrandVolumeNon = (gcnew System::Windows::Forms::RadioButton());
			this->RadiobuttonReducGrandVolumeOui = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// ButtonCreer
			// 
			this->ButtonCreer->Location = System::Drawing::Point(647, 331);
			this->ButtonCreer->Name = L"ButtonCreer";
			this->ButtonCreer->Size = System::Drawing::Size(250, 143);
			this->ButtonCreer->TabIndex = 12;
			this->ButtonCreer->Text = L"Créer Article";
			this->ButtonCreer->UseVisualStyleBackColor = true;
			this->ButtonCreer->Click += gcnew System::EventHandler(this, &MyFormCreationMajArticle::ButtonCreer_Click);
			// 
			// TexteboxCouleur
			// 
			this->TexteboxCouleur->Location = System::Drawing::Point(282, 280);
			this->TexteboxCouleur->Name = L"TexteboxCouleur";
			this->TexteboxCouleur->Size = System::Drawing::Size(258, 22);
			this->TexteboxCouleur->TabIndex = 10;
			// 
			// TexteboxUniteMesure
			// 
			this->TexteboxUniteMesure->Location = System::Drawing::Point(282, 248);
			this->TexteboxUniteMesure->Name = L"TexteboxUniteMesure";
			this->TexteboxUniteMesure->Size = System::Drawing::Size(258, 22);
			this->TexteboxUniteMesure->TabIndex = 9;
			// 
			// TexteboxSeuilReaprovisionement
			// 
			this->TexteboxSeuilReaprovisionement->Location = System::Drawing::Point(282, 174);
			this->TexteboxSeuilReaprovisionement->Name = L"TexteboxSeuilReaprovisionement";
			this->TexteboxSeuilReaprovisionement->Size = System::Drawing::Size(258, 22);
			this->TexteboxSeuilReaprovisionement->TabIndex = 6;
			// 
			// TexteboxQuantiteEnStock
			// 
			this->TexteboxQuantiteEnStock->Location = System::Drawing::Point(282, 141);
			this->TexteboxQuantiteEnStock->Name = L"TexteboxQuantiteEnStock";
			this->TexteboxQuantiteEnStock->Size = System::Drawing::Size(258, 22);
			this->TexteboxQuantiteEnStock->TabIndex = 5;
			// 
			// TexteboxPrixHT
			// 
			this->TexteboxPrixHT->Location = System::Drawing::Point(282, 112);
			this->TexteboxPrixHT->Name = L"TexteboxPrixHT";
			this->TexteboxPrixHT->Size = System::Drawing::Size(258, 22);
			this->TexteboxPrixHT->TabIndex = 4;
			// 
			// TexteboxDesignation
			// 
			this->TexteboxDesignation->Location = System::Drawing::Point(282, 83);
			this->TexteboxDesignation->Name = L"TexteboxDesignation";
			this->TexteboxDesignation->Size = System::Drawing::Size(258, 22);
			this->TexteboxDesignation->TabIndex = 3;
			// 
			// TexteboxReference
			// 
			this->TexteboxReference->Location = System::Drawing::Point(282, 48);
			this->TexteboxReference->Name = L"TexteboxReference";
			this->TexteboxReference->Size = System::Drawing::Size(258, 22);
			this->TexteboxReference->TabIndex = 2;
			// 
			// LabelNature
			// 
			this->LabelNature->AutoSize = true;
			this->LabelNature->Location = System::Drawing::Point(211, 331);
			this->LabelNature->Name = L"LabelNature";
			this->LabelNature->Size = System::Drawing::Size(53, 16);
			this->LabelNature->TabIndex = 29;
			this->LabelNature->Text = L"Nature :";
			// 
			// CheckedlistboxNature
			// 
			this->CheckedlistboxNature->FormattingEnabled = true;
			this->CheckedlistboxNature->Location = System::Drawing::Point(282, 331);
			this->CheckedlistboxNature->Name = L"CheckedlistboxNature";
			this->CheckedlistboxNature->Size = System::Drawing::Size(236, 140);
			this->CheckedlistboxNature->TabIndex = 11;
			// 
			// LabelCouleur
			// 
			this->LabelCouleur->AutoSize = true;
			this->LabelCouleur->Location = System::Drawing::Point(205, 286);
			this->LabelCouleur->Name = L"LabelCouleur";
			this->LabelCouleur->Size = System::Drawing::Size(59, 16);
			this->LabelCouleur->TabIndex = 27;
			this->LabelCouleur->Text = L"Couleur :";
			// 
			// LabelUniteMesure
			// 
			this->LabelUniteMesure->AutoSize = true;
			this->LabelUniteMesure->Location = System::Drawing::Point(172, 254);
			this->LabelUniteMesure->Name = L"LabelUniteMesure";
			this->LabelUniteMesure->Size = System::Drawing::Size(92, 16);
			this->LabelUniteMesure->TabIndex = 26;
			this->LabelUniteMesure->Text = L"Unité mesure :";
			// 
			// LabelPrixHT
			// 
			this->LabelPrixHT->AutoSize = true;
			this->LabelPrixHT->Location = System::Drawing::Point(207, 112);
			this->LabelPrixHT->Name = L"LabelPrixHT";
			this->LabelPrixHT->Size = System::Drawing::Size(57, 16);
			this->LabelPrixHT->TabIndex = 25;
			this->LabelPrixHT->Text = L"Prix HT :";
			// 
			// LabelReductionGrandVolumes
			// 
			this->LabelReductionGrandVolumes->AutoSize = true;
			this->LabelReductionGrandVolumes->Location = System::Drawing::Point(56, 216);
			this->LabelReductionGrandVolumes->Name = L"LabelReductionGrandVolumes";
			this->LabelReductionGrandVolumes->Size = System::Drawing::Size(208, 16);
			this->LabelReductionGrandVolumes->TabIndex = 24;
			this->LabelReductionGrandVolumes->Text = L"Réduction sur les grand volumes :";
			// 
			// LabelSeuilReaprovisionement
			// 
			this->LabelSeuilReaprovisionement->AutoSize = true;
			this->LabelSeuilReaprovisionement->Location = System::Drawing::Point(87, 177);
			this->LabelSeuilReaprovisionement->Name = L"LabelSeuilReaprovisionement";
			this->LabelSeuilReaprovisionement->Size = System::Drawing::Size(177, 16);
			this->LabelSeuilReaprovisionement->TabIndex = 23;
			this->LabelSeuilReaprovisionement->Text = L"Seuil de réaprovisionement :";
			// 
			// LabelQuantiteEnStock
			// 
			this->LabelQuantiteEnStock->AutoSize = true;
			this->LabelQuantiteEnStock->Location = System::Drawing::Point(149, 144);
			this->LabelQuantiteEnStock->Name = L"LabelQuantiteEnStock";
			this->LabelQuantiteEnStock->Size = System::Drawing::Size(115, 16);
			this->LabelQuantiteEnStock->TabIndex = 22;
			this->LabelQuantiteEnStock->Text = L"Quantité en stock :";
			// 
			// LabelDesignation
			// 
			this->LabelDesignation->AutoSize = true;
			this->LabelDesignation->Location = System::Drawing::Point(179, 83);
			this->LabelDesignation->Name = L"LabelDesignation";
			this->LabelDesignation->Size = System::Drawing::Size(85, 16);
			this->LabelDesignation->TabIndex = 21;
			this->LabelDesignation->Text = L"Désignation :";
			// 
			// LabelReference
			// 
			this->LabelReference->AutoSize = true;
			this->LabelReference->Location = System::Drawing::Point(188, 48);
			this->LabelReference->Name = L"LabelReference";
			this->LabelReference->Size = System::Drawing::Size(76, 16);
			this->LabelReference->TabIndex = 20;
			this->LabelReference->Text = L"Référence :";
			// 
			// LabelSelectionArticle
			// 
			this->LabelSelectionArticle->AutoSize = true;
			this->LabelSelectionArticle->Location = System::Drawing::Point(149, 6);
			this->LabelSelectionArticle->Name = L"LabelSelectionArticle";
			this->LabelSelectionArticle->Size = System::Drawing::Size(127, 16);
			this->LabelSelectionArticle->TabIndex = 39;
			this->LabelSelectionArticle->Text = L"Sélectionner l\'article";
			// 
			// ComboboxSelectionArticle
			// 
			this->ComboboxSelectionArticle->FormattingEnabled = true;
			this->ComboboxSelectionArticle->Location = System::Drawing::Point(282, 6);
			this->ComboboxSelectionArticle->Name = L"ComboboxSelectionArticle";
			this->ComboboxSelectionArticle->Size = System::Drawing::Size(258, 24);
			this->ComboboxSelectionArticle->TabIndex = 1;
			// 
			// ButtonMaj
			// 
			this->ButtonMaj->Location = System::Drawing::Point(647, 331);
			this->ButtonMaj->Name = L"ButtonMaj";
			this->ButtonMaj->Size = System::Drawing::Size(250, 143);
			this->ButtonMaj->TabIndex = 12;
			this->ButtonMaj->Text = L"Mettre à jour l\'Article";
			this->ButtonMaj->UseVisualStyleBackColor = true;
			this->ButtonMaj->Click += gcnew System::EventHandler(this, &MyFormCreationMajArticle::ButtonMaj_Click);
			// 
			// RadiobuttonReducGrandVolumeNon
			// 
			this->RadiobuttonReducGrandVolumeNon->AutoSize = true;
			this->RadiobuttonReducGrandVolumeNon->Location = System::Drawing::Point(291, 214);
			this->RadiobuttonReducGrandVolumeNon->Name = L"RadiobuttonReducGrandVolumeNon";
			this->RadiobuttonReducGrandVolumeNon->Size = System::Drawing::Size(53, 20);
			this->RadiobuttonReducGrandVolumeNon->TabIndex = 7;
			this->RadiobuttonReducGrandVolumeNon->TabStop = true;
			this->RadiobuttonReducGrandVolumeNon->Text = L"Non";
			this->RadiobuttonReducGrandVolumeNon->UseVisualStyleBackColor = true;
			// 
			// RadiobuttonReducGrandVolumeOui
			// 
			this->RadiobuttonReducGrandVolumeOui->AutoSize = true;
			this->RadiobuttonReducGrandVolumeOui->Location = System::Drawing::Point(350, 214);
			this->RadiobuttonReducGrandVolumeOui->Name = L"RadiobuttonReducGrandVolumeOui";
			this->RadiobuttonReducGrandVolumeOui->Size = System::Drawing::Size(48, 20);
			this->RadiobuttonReducGrandVolumeOui->TabIndex = 8;
			this->RadiobuttonReducGrandVolumeOui->TabStop = true;
			this->RadiobuttonReducGrandVolumeOui->Text = L"Oui";
			this->RadiobuttonReducGrandVolumeOui->UseVisualStyleBackColor = true;
			// 
			// MyFormCreationMajArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 544);
			this->Controls->Add(this->RadiobuttonReducGrandVolumeOui);
			this->Controls->Add(this->RadiobuttonReducGrandVolumeNon);
			this->Controls->Add(this->ButtonMaj);
			this->Controls->Add(this->ComboboxSelectionArticle);
			this->Controls->Add(this->LabelSelectionArticle);
			this->Controls->Add(this->ButtonCreer);
			this->Controls->Add(this->TexteboxCouleur);
			this->Controls->Add(this->TexteboxUniteMesure);
			this->Controls->Add(this->TexteboxSeuilReaprovisionement);
			this->Controls->Add(this->TexteboxQuantiteEnStock);
			this->Controls->Add(this->TexteboxPrixHT);
			this->Controls->Add(this->TexteboxDesignation);
			this->Controls->Add(this->TexteboxReference);
			this->Controls->Add(this->LabelNature);
			this->Controls->Add(this->CheckedlistboxNature);
			this->Controls->Add(this->LabelCouleur);
			this->Controls->Add(this->LabelUniteMesure);
			this->Controls->Add(this->LabelPrixHT);
			this->Controls->Add(this->LabelReductionGrandVolumes);
			this->Controls->Add(this->LabelSeuilReaprovisionement);
			this->Controls->Add(this->LabelQuantiteEnStock);
			this->Controls->Add(this->LabelDesignation);
			this->Controls->Add(this->LabelReference);
			this->Name = L"MyFormCreationMajArticle";
			this->Text = L"MyFormCreationMajArticle";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationMajArticle::MyFormCreationMajArticle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonMaj_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ButtonCreer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyFormCreationMajArticle_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
