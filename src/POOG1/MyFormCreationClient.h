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
	protected:
	private: System::Windows::Forms::Label^ LabelPrenom;
	private: System::Windows::Forms::Label^ LabelDate;
	private: System::Windows::Forms::TextBox^ TextBaxNom;
	private: System::Windows::Forms::TextBox^ TextBaxPrenom;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissance;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ ButtonAdd;

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
			this->LabelNom = (gcnew System::Windows::Forms::Label());
			this->LabelPrenom = (gcnew System::Windows::Forms::Label());
			this->LabelDate = (gcnew System::Windows::Forms::Label());
			this->TextBaxNom = (gcnew System::Windows::Forms::TextBox());
			this->TextBaxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelNom
			// 
			this->LabelNom->AutoSize = true;
			this->LabelNom->Location = System::Drawing::Point(167, 112);
			this->LabelNom->Name = L"LabelNom";
			this->LabelNom->Size = System::Drawing::Size(36, 16);
			this->LabelNom->TabIndex = 0;
			this->LabelNom->Text = L"Nom";
			// 
			// LabelPrenom
			// 
			this->LabelPrenom->AutoSize = true;
			this->LabelPrenom->Location = System::Drawing::Point(149, 152);
			this->LabelPrenom->Name = L"LabelPrenom";
			this->LabelPrenom->Size = System::Drawing::Size(54, 16);
			this->LabelPrenom->TabIndex = 1;
			this->LabelPrenom->Text = L"Prenom";
			// 
			// LabelDate
			// 
			this->LabelDate->AutoSize = true;
			this->LabelDate->Location = System::Drawing::Point(83, 198);
			this->LabelDate->Name = L"LabelDate";
			this->LabelDate->Size = System::Drawing::Size(120, 16);
			this->LabelDate->TabIndex = 2;
			this->LabelDate->Text = L"Date de naissance";
			// 
			// TextBaxNom
			// 
			this->TextBaxNom->Location = System::Drawing::Point(209, 109);
			this->TextBaxNom->Name = L"TextBaxNom";
			this->TextBaxNom->Size = System::Drawing::Size(231, 22);
			this->TextBaxNom->TabIndex = 3;
			// 
			// TextBaxPrenom
			// 
			this->TextBaxPrenom->Location = System::Drawing::Point(209, 152);
			this->TextBaxPrenom->Name = L"TextBaxPrenom";
			this->TextBaxPrenom->Size = System::Drawing::Size(231, 22);
			this->TextBaxPrenom->TabIndex = 4;
			// 
			// dateTimePickerNaissance
			// 
			this->dateTimePickerNaissance->Location = System::Drawing::Point(210, 198);
			this->dateTimePickerNaissance->Name = L"dateTimePickerNaissance";
			this->dateTimePickerNaissance->Size = System::Drawing::Size(230, 22);
			this->dateTimePickerNaissance->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(209, 263);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Réponse";
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(541, 126);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(167, 87);
			this->ButtonAdd->TabIndex = 8;
			this->ButtonAdd->Text = L"Soumettre";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyFormCreationClient::ButtonAdd_Click);
			// 
			// MyFormCreationClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1267, 584);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePickerNaissance);
			this->Controls->Add(this->TextBaxPrenom);
			this->Controls->Add(this->TextBaxNom);
			this->Controls->Add(this->LabelDate);
			this->Controls->Add(this->LabelPrenom);
			this->Controls->Add(this->LabelNom);
			this->Name = L"MyFormCreationClient";
			this->Text = L"MyFormCreationClient";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationClient::MyFormCreationClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyFormCreationClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label5->Text = this->TextBaxNom->Text + " " + this->TextBaxPrenom->Text + " née le " + this->dateTimePickerNaissance->Value;
}
};
}
