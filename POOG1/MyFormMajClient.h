#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyFormMajClient
	/// </summary>
	public ref class MyFormMajClient : public System::Windows::Forms::Form
	{
	public:
		MyFormMajClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormMajClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ ButtonAdd;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNaissance;
	private: System::Windows::Forms::Label^ LabelDate;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->LabelDate = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(129, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"S�lectionner le client";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormMajClient::label1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(715, 384);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(265, 22);
			this->textBox8->TabIndex = 78;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(607, 417);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 16);
			this->label11->TabIndex = 77;
			this->label11->Text = L"Code Postal";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(607, 387);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 16);
			this->label13->TabIndex = 76;
			this->label13->Text = L"Ville";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(715, 414);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(265, 22);
			this->textBox10->TabIndex = 75;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(715, 297);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(265, 22);
			this->textBox11->TabIndex = 74;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(715, 356);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(265, 22);
			this->textBox12->TabIndex = 73;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(607, 330);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 16);
			this->label14->TabIndex = 72;
			this->label14->Text = L"Type voie";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(598, 356);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 16);
			this->label15->TabIndex = 71;
			this->label15->Text = L"Nom voie";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(607, 300);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 16);
			this->label16->TabIndex = 70;
			this->label16->Text = L"Num�ro";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(715, 327);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(265, 22);
			this->textBox13->TabIndex = 69;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(254, 381);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(265, 22);
			this->textBox7->TabIndex = 68;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(146, 414);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 16);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Code Postal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(146, 384);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 16);
			this->label12->TabIndex = 66;
			this->label12->Text = L"Ville";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(254, 411);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(265, 22);
			this->textBox9->TabIndex = 65;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(254, 294);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(265, 22);
			this->textBox4->TabIndex = 64;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(254, 353);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(265, 22);
			this->textBox5->TabIndex = 63;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(146, 327);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 16);
			this->label7->TabIndex = 62;
			this->label7->Text = L"Type voie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(137, 353);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 16);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Nom voie";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(146, 297);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 60;
			this->label9->Text = L"Num�ro";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(254, 324);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(265, 22);
			this->textBox6->TabIndex = 59;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(245, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(265, 22);
			this->textBox3->TabIndex = 58;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(245, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 22);
			this->textBox2->TabIndex = 57;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(137, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Pr�nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(128, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(137, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 16);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(245, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 22);
			this->textBox1->TabIndex = 53;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(301, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Adresse facturation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(741, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 16);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Adresse livraison";
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(495, 479);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(167, 87);
			this->ButtonAdd->TabIndex = 50;
			this->ButtonAdd->Text = L"Cr�er le client";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			// 
			// dateTimePickerNaissance
			// 
			this->dateTimePickerNaissance->Location = System::Drawing::Point(254, 178);
			this->dateTimePickerNaissance->Name = L"dateTimePickerNaissance";
			this->dateTimePickerNaissance->Size = System::Drawing::Size(230, 22);
			this->dateTimePickerNaissance->TabIndex = 49;
			// 
			// LabelDate
			// 
			this->LabelDate->AutoSize = true;
			this->LabelDate->Location = System::Drawing::Point(107, 178);
			this->LabelDate->Name = L"LabelDate";
			this->LabelDate->Size = System::Drawing::Size(120, 16);
			this->LabelDate->TabIndex = 48;
			this->LabelDate->Text = L"Date de naissance";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(287, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(266, 24);
			this->comboBox1->TabIndex = 79;
			// 
			// MyFormMajClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 594);
			this->Controls->Add(this->comboBox1);
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
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->dateTimePickerNaissance);
			this->Controls->Add(this->LabelDate);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormMajClient";
			this->Text = L"MyFormMajClient";
			this->Load += gcnew System::EventHandler(this, &MyFormMajClient::MyFormMajClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormMajClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = this->label1->Text + " haha";
	}
	};
}