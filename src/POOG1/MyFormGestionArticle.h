#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionArticle
	/// </summary>
	public ref class MyFormGestionArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionArticle(void)
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
		~MyFormGestionArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Creer un Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionArticle::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Mettre à jour un Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormGestionArticle::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Supprimer un Client";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormGestionArticle::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 100);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Afficher un Client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormGestionArticle::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 476);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// MyFormGestionArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Gestion Article";
			this->Text = L"Gestion Article";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = this->button1->Text;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = this->button2->Text;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = this->button3->Text;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = this->button4->Text;
	}
	};
}
