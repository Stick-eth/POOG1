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
	private: System::Windows::Forms::Label^ LabelTauxTVA;
	private: System::Windows::Forms::Label^ LabelPrixHT;
	private: System::Windows::Forms::Label^ LabelUniteMesure;

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
			this->LabelTauxTVA = (gcnew System::Windows::Forms::Label());
			this->LabelPrixHT = (gcnew System::Windows::Forms::Label());
			this->LabelUniteMesure = (gcnew System::Windows::Forms::Label());
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
			this->LabelQuantiteEnStock->Location = System::Drawing::Point(132, 109);
			this->LabelQuantiteEnStock->Name = L"LabelQuantiteEnStock";
			this->LabelQuantiteEnStock->Size = System::Drawing::Size(115, 16);
			this->LabelQuantiteEnStock->TabIndex = 2;
			this->LabelQuantiteEnStock->Text = L"Quantité en stock :";
			// 
			// LabelSeuilReaprovisionement
			// 
			this->LabelSeuilReaprovisionement->AutoSize = true;
			this->LabelSeuilReaprovisionement->Location = System::Drawing::Point(70, 142);
			this->LabelSeuilReaprovisionement->Name = L"LabelSeuilReaprovisionement";
			this->LabelSeuilReaprovisionement->Size = System::Drawing::Size(177, 16);
			this->LabelSeuilReaprovisionement->TabIndex = 3;
			this->LabelSeuilReaprovisionement->Text = L"Seuil de réaprovisionement :";
			// 
			// LabelReductionGrandVolumes
			// 
			this->LabelReductionGrandVolumes->AutoSize = true;
			this->LabelReductionGrandVolumes->Location = System::Drawing::Point(39, 184);
			this->LabelReductionGrandVolumes->Name = L"LabelReductionGrandVolumes";
			this->LabelReductionGrandVolumes->Size = System::Drawing::Size(208, 16);
			this->LabelReductionGrandVolumes->TabIndex = 4;
			this->LabelReductionGrandVolumes->Text = L"Réduction sur les grand volumes :";
			// 
			// LabelTauxTVA
			// 
			this->LabelTauxTVA->AutoSize = true;
			this->LabelTauxTVA->Location = System::Drawing::Point(155, 225);
			this->LabelTauxTVA->Name = L"LabelTauxTVA";
			this->LabelTauxTVA->Size = System::Drawing::Size(92, 16);
			this->LabelTauxTVA->TabIndex = 5;
			this->LabelTauxTVA->Text = L"Taux de TVA :";
			// 
			// LabelPrixHT
			// 
			this->LabelPrixHT->AutoSize = true;
			this->LabelPrixHT->Location = System::Drawing::Point(190, 271);
			this->LabelPrixHT->Name = L"LabelPrixHT";
			this->LabelPrixHT->Size = System::Drawing::Size(57, 16);
			this->LabelPrixHT->TabIndex = 6;
			this->LabelPrixHT->Text = L"Prix HT :";
			// 
			// LabelUniteMesure
			// 
			this->LabelUniteMesure->AutoSize = true;
			this->LabelUniteMesure->Location = System::Drawing::Point(155, 309);
			this->LabelUniteMesure->Name = L"LabelUniteMesure";
			this->LabelUniteMesure->Size = System::Drawing::Size(92, 16);
			this->LabelUniteMesure->TabIndex = 7;
			this->LabelUniteMesure->Text = L"Unité mesure :";
			// 
			// MyFormCreationArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->LabelUniteMesure);
			this->Controls->Add(this->LabelPrixHT);
			this->Controls->Add(this->LabelTauxTVA);
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
