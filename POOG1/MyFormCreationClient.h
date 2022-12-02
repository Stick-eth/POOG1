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

	protected:

	private: System::Windows::Forms::Label^ LabelDate;


	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissance;


	private: System::Windows::Forms::Button^ ButtonAdd;






	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox13;




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
			this->LabelDate = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// LabelDate
			// 
			this->LabelDate->AutoSize = true;
			this->LabelDate->Location = System::Drawing::Point(57, 128);
			this->LabelDate->Name = L"LabelDate";
			this->LabelDate->Size = System::Drawing::Size(120, 16);
			this->LabelDate->TabIndex = 2;
			this->LabelDate->Text = L"Date de naissance";
			// 
			// dateTimePickerNaissance
			// 
			this->dateTimePickerNaissance->Location = System::Drawing::Point(204, 128);
			this->dateTimePickerNaissance->Name = L"dateTimePickerNaissance";
			this->dateTimePickerNaissance->Size = System::Drawing::Size(230, 22);
			this->dateTimePickerNaissance->TabIndex = 5;
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(445, 429);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(167, 87);
			this->ButtonAdd->TabIndex = 8;
			this->ButtonAdd->Text = L"Créer le client";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(691, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Adresse livraison";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(251, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Adresse facturation";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 22);
			this->textBox1->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(87, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Email";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(87, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Prénom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 22);
			this->textBox2->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 26);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(265, 22);
			this->textBox3->TabIndex = 25;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(204, 244);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(265, 22);
			this->textBox4->TabIndex = 31;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(204, 303);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(265, 22);
			this->textBox5->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(96, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 16);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Type voie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(87, 303);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 16);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Nom voie";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(96, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Numéro";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(204, 274);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(265, 22);
			this->textBox6->TabIndex = 26;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(204, 331);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(265, 22);
			this->textBox7->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(96, 364);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 16);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Code Postal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(96, 334);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Ville";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(204, 361);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(265, 22);
			this->textBox9->TabIndex = 32;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(665, 334);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(265, 22);
			this->textBox8->TabIndex = 47;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(557, 367);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 16);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Code Postal";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(557, 337);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 16);
			this->label13->TabIndex = 45;
			this->label13->Text = L"Ville";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(665, 364);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(265, 22);
			this->textBox10->TabIndex = 44;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(665, 247);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(265, 22);
			this->textBox11->TabIndex = 43;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(665, 306);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(265, 22);
			this->textBox12->TabIndex = 42;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(557, 280);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 16);
			this->label14->TabIndex = 41;
			this->label14->Text = L"Type voie";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(548, 306);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 16);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Nom voie";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(557, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 16);
			this->label16->TabIndex = 39;
			this->label16->Text = L"Numéro";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(665, 277);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(265, 22);
			this->textBox13->TabIndex = 38;
			// 
			// MyFormCreationClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1267, 584);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox13);
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
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->dateTimePickerNaissance);
			this->Controls->Add(this->LabelDate);
			this->Name = L"MyFormCreationClient";
			this->Text = L"MyFormCreationClient";
			this->Load += gcnew System::EventHandler(this, &MyFormCreationClient::MyFormCreationClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyFormCreationClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
