#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreationArticle
	/// </summary>
	public ref class MyFormCreationArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormCreationArticle(void)
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
		~MyFormCreationArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelReference;
	private: System::Windows::Forms::Label^ LabelDesignation;
	private: System::Windows::Forms::Label^ LabelQuantiteEnStock;
	private: System::Windows::Forms::Label^ LabelSeuilReaprovisionement;
	private: System::Windows::Forms::Label^ LabelReductionGrandVolumes;
	private: System::Windows::Forms::Label^ LabelPrixHT;
	private: System::Windows::Forms::Label^ LabelUniteMesure;
	private: System::Windows::Forms::Label^ LabelCouleur;
	private: System::Windows::Forms::Label^ LabelNature;
	private: System::Windows::Forms::CheckedListBox^ CheckedlistboxNature;



	private: System::Windows::Forms::TextBox^ TexteboxReference;
	private: System::Windows::Forms::TextBox^ TexteboxDesignation;
	private: System::Windows::Forms::TextBox^ TexteboxQuantiteEnStock;
	private: System::Windows::Forms::TextBox^ TexteboxSeuilReaprovisionement;
	private: System::Windows::Forms::TextBox^ TexteboxPrixHT;
	private: System::Windows::Forms::TextBox^ TexteboxUniteMesure;
	private: System::Windows::Forms::TextBox^ TexteboxCouleur;
	private: System::Windows::Forms::Button^ ButtonCreerArticle;







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
			this->LabelReference = (gcnew System::Windows::Forms::Label());
			this->LabelDesignation = (gcnew System::Windows::Forms::Label());
			this->LabelQuantiteEnStock = (gcnew System::Windows::Forms::Label());
			this->LabelSeuilReaprovisionement = (gcnew System::Windows::Forms::Label());
			this->LabelReductionGrandVolumes = (gcnew System::Windows::Forms::Label());
			this->LabelPrixHT = (gcnew System::Windows::Forms::Label());
			this->LabelUniteMesure = (gcnew System::Windows::Forms::Label());
			this->LabelCouleur = (gcnew System::Windows::Forms::Label());
			this->CheckedlistboxNature = (gcnew System::Windows::Forms::CheckedListBox());
			this->LabelNature = (gcnew System::Windows::Forms::Label());
			this->TexteboxReference = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxDesignation = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxQuantiteEnStock = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxSeuilReaprovisionement = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxUniteMesure = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCreerArticle = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelReference
			// 
			this->LabelReference->AutoSize = true;
			this->LabelReference->Location = System::Drawing::Point(171, 40);
			this->LabelReference->Name = L"LabelReference";
			this->LabelReference->Size = System::Drawing::Size(76, 16);
			this->LabelReference->TabIndex = 0;
			this->LabelReference->Text = L"Référence :";
			// 
			// LabelDesignation
			// 
			this->LabelDesignation->AutoSize = true;
			this->LabelDesignation->Location = System::Drawing::Point(162, 75);
			this->LabelDesignation->Name = L"LabelDesignation";
			this->LabelDesignation->Size = System::Drawing::Size(85, 16);
			this->LabelDesignation->TabIndex = 1;
			this->LabelDesignation->Text = L"Désignation :";
			// 
			// LabelQuantiteEnStock
			// 
			this->LabelQuantiteEnStock->AutoSize = true;
			this->LabelQuantiteEnStock->Location = System::Drawing::Point(132, 136);
			this->LabelQuantiteEnStock->Name = L"LabelQuantiteEnStock";
			this->LabelQuantiteEnStock->Size = System::Drawing::Size(115, 16);
			this->LabelQuantiteEnStock->TabIndex = 2;
			this->LabelQuantiteEnStock->Text = L"Quantité en stock :";
			// 
			// LabelSeuilReaprovisionement
			// 
			this->LabelSeuilReaprovisionement->AutoSize = true;
			this->LabelSeuilReaprovisionement->Location = System::Drawing::Point(70, 169);
			this->LabelSeuilReaprovisionement->Name = L"LabelSeuilReaprovisionement";
			this->LabelSeuilReaprovisionement->Size = System::Drawing::Size(177, 16);
			this->LabelSeuilReaprovisionement->TabIndex = 3;
			this->LabelSeuilReaprovisionement->Text = L"Seuil de réaprovisionement :";
			// 
			// LabelReductionGrandVolumes
			// 
			this->LabelReductionGrandVolumes->AutoSize = true;
			this->LabelReductionGrandVolumes->Location = System::Drawing::Point(39, 208);
			this->LabelReductionGrandVolumes->Name = L"LabelReductionGrandVolumes";
			this->LabelReductionGrandVolumes->Size = System::Drawing::Size(208, 16);
			this->LabelReductionGrandVolumes->TabIndex = 4;
			this->LabelReductionGrandVolumes->Text = L"Réduction sur les grand volumes :";
			// 
			// LabelPrixHT
			// 
			this->LabelPrixHT->AutoSize = true;
			this->LabelPrixHT->Location = System::Drawing::Point(190, 104);
			this->LabelPrixHT->Name = L"LabelPrixHT";
			this->LabelPrixHT->Size = System::Drawing::Size(57, 16);
			this->LabelPrixHT->TabIndex = 6;
			this->LabelPrixHT->Text = L"Prix HT :";
			// 
			// LabelUniteMesure
			// 
			this->LabelUniteMesure->AutoSize = true;
			this->LabelUniteMesure->Location = System::Drawing::Point(155, 246);
			this->LabelUniteMesure->Name = L"LabelUniteMesure";
			this->LabelUniteMesure->Size = System::Drawing::Size(92, 16);
			this->LabelUniteMesure->TabIndex = 7;
			this->LabelUniteMesure->Text = L"Unité mesure :";
			// 
			// LabelCouleur
			// 
			this->LabelCouleur->AutoSize = true;
			this->LabelCouleur->Location = System::Drawing::Point(188, 278);
			this->LabelCouleur->Name = L"LabelCouleur";
			this->LabelCouleur->Size = System::Drawing::Size(59, 16);
			this->LabelCouleur->TabIndex = 8;
			this->LabelCouleur->Text = L"Couleur :";
			// 
			// CheckedlistboxNature
			// 
			this->CheckedlistboxNature->FormattingEnabled = true;
			this->CheckedlistboxNature->Location = System::Drawing::Point(265, 323);
			this->CheckedlistboxNature->Name = L"CheckedlistboxNature";
			this->CheckedlistboxNature->Size = System::Drawing::Size(236, 140);
			this->CheckedlistboxNature->TabIndex = 9;
			// 
			// LabelNature
			// 
			this->LabelNature->AutoSize = true;
			this->LabelNature->Location = System::Drawing::Point(194, 323);
			this->LabelNature->Name = L"LabelNature";
			this->LabelNature->Size = System::Drawing::Size(53, 16);
			this->LabelNature->TabIndex = 10;
			this->LabelNature->Text = L"Nature :";
			// 
			// TexteboxReference
			// 
			this->TexteboxReference->Location = System::Drawing::Point(265, 40);
			this->TexteboxReference->Name = L"TexteboxReference";
			this->TexteboxReference->Size = System::Drawing::Size(258, 22);
			this->TexteboxReference->TabIndex = 11;
			// 
			// TexteboxDesignation
			// 
			this->TexteboxDesignation->Location = System::Drawing::Point(265, 75);
			this->TexteboxDesignation->Name = L"TexteboxDesignation";
			this->TexteboxDesignation->Size = System::Drawing::Size(258, 22);
			this->TexteboxDesignation->TabIndex = 12;
			// 
			// TexteboxQuantiteEnStock
			// 
			this->TexteboxQuantiteEnStock->Location = System::Drawing::Point(265, 136);
			this->TexteboxQuantiteEnStock->Name = L"TexteboxQuantiteEnStock";
			this->TexteboxQuantiteEnStock->Size = System::Drawing::Size(258, 22);
			this->TexteboxQuantiteEnStock->TabIndex = 14;
			// 
			// TexteboxSeuilReaprovisionement
			// 
			this->TexteboxSeuilReaprovisionement->Location = System::Drawing::Point(265, 168);
			this->TexteboxSeuilReaprovisionement->Name = L"TexteboxSeuilReaprovisionement";
			this->TexteboxSeuilReaprovisionement->Size = System::Drawing::Size(258, 22);
			this->TexteboxSeuilReaprovisionement->TabIndex = 13;
			// 
			// TexteboxPrixHT
			// 
			this->TexteboxPrixHT->Location = System::Drawing::Point(265, 103);
			this->TexteboxPrixHT->Name = L"TexteboxPrixHT";
			this->TexteboxPrixHT->Size = System::Drawing::Size(258, 22);
			this->TexteboxPrixHT->TabIndex = 18;
			// 
			// TexteboxUniteMesure
			// 
			this->TexteboxUniteMesure->Location = System::Drawing::Point(265, 240);
			this->TexteboxUniteMesure->Name = L"TexteboxUniteMesure";
			this->TexteboxUniteMesure->Size = System::Drawing::Size(258, 22);
			this->TexteboxUniteMesure->TabIndex = 17;
			// 
			// TexteboxCouleur
			// 
			this->TexteboxCouleur->Location = System::Drawing::Point(265, 278);
			this->TexteboxCouleur->Name = L"TexteboxCouleur";
			this->TexteboxCouleur->Size = System::Drawing::Size(258, 22);
			this->TexteboxCouleur->TabIndex = 15;
			// 
			// ButtonCreerArticle
			// 
			this->ButtonCreerArticle->Location = System::Drawing::Point(630, 323);
			this->ButtonCreerArticle->Name = L"ButtonCreerArticle";
			this->ButtonCreerArticle->Size = System::Drawing::Size(250, 143);
			this->ButtonCreerArticle->TabIndex = 19;
			this->ButtonCreerArticle->Text = L"Créer Article";
			this->ButtonCreerArticle->UseVisualStyleBackColor = true;
			// 
			// MyFormCreationArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->ButtonCreerArticle);
			this->Controls->Add(this->TexteboxPrixHT);
			this->Controls->Add(this->TexteboxUniteMesure);
			this->Controls->Add(this->TexteboxCouleur);
			this->Controls->Add(this->TexteboxQuantiteEnStock);
			this->Controls->Add(this->TexteboxSeuilReaprovisionement);
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
			this->Name = L"MyFormCreationArticle";
			this->Text = L"MyFormCreationArticle";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationArticle::MyFormCreationArticle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void MyFormCreationArticle_Load(System::Object^ sender, System::EventArgs^ e) {
		}
};
}
