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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->LabelUniteMesure->Click += gcnew System::EventHandler(this, &MyFormCreationArticle::LabelUniteMesure_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(188, 278);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Couleur :";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(265, 323);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(236, 140);
			this->checkedListBox1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(194, 323);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Nature :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(265, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(258, 22);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(265, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(258, 22);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(265, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(258, 22);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(265, 104);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(258, 22);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(265, 272);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(258, 22);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(265, 240);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(258, 22);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(265, 202);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(258, 22);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(265, 166);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(258, 22);
			this->textBox8->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(630, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 143);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Créer Article";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyFormCreationArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
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
private: System::Void LabelUniteMesure_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
