#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCreationPersonnel
	/// </summary>
	public ref class MyFormCreationPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormCreationPersonnel(void)
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
		~MyFormCreationPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ ButtonAdd;

	private: System::Windows::Forms::Label^ LabelDate;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->LabelDate = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(244, 344);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(265, 22);
			this->textBox7->TabIndex = 68;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(136, 377);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 16);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Code Postal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(136, 347);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 66;
			this->label12->Text = L"Ville";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(244, 374);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(265, 22);
			this->textBox9->TabIndex = 65;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(244, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(265, 22);
			this->textBox4->TabIndex = 64;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(244, 316);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(265, 22);
			this->textBox5->TabIndex = 63;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(136, 290);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 16);
			this->label7->TabIndex = 62;
			this->label7->Text = L"Type voie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(127, 316);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 16);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Nom voie";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(136, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 60;
			this->label9->Text = L"Numéro";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(244, 287);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(265, 22);
			this->textBox6->TabIndex = 59;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(265, 22);
			this->textBox3->TabIndex = 58;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 22);
			this->textBox2->TabIndex = 57;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(127, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(127, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 22);
			this->textBox1->TabIndex = 53;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(342, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Adresse";
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(284, 440);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(167, 87);
			this->ButtonAdd->TabIndex = 50;
			this->ButtonAdd->Text = L"Créer le personnel";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			// 
			// LabelDate
			// 
			this->LabelDate->AutoSize = true;
			this->LabelDate->Location = System::Drawing::Point(97, 141);
			this->LabelDate->Name = L"LabelDate";
			this->LabelDate->Size = System::Drawing::Size(89, 16);
			this->LabelDate->TabIndex = 48;
			this->LabelDate->Text = L"Mot de passe";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(235, 141);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(265, 22);
			this->textBox8->TabIndex = 69;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(104, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 16);
			this->label3->TabIndex = 70;
			this->label3->Text = L"Supérieur";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(235, 169);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(245, 24);
			this->comboBox1->TabIndex = 71;
			// 
			// MyFormCreationPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1067, 569);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->LabelDate);
			this->Name = L"MyFormCreationPersonnel";
			this->Text = L"MyFormCreationPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationPersonnel::MyFormCreationPersonnel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCreationPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
