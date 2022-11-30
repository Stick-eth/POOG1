#pragma once
#include "pch.h"

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OnOffLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxMdp;
	private: System::Windows::Forms::Button^ ButtonConnexion;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ ButtonAdd;
	private: System::Windows::Forms::Button^ ButtonConnexionAuLogiciel;

	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->OnOffLabel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMdp = (gcnew System::Windows::Forms::TextBox());
			this->ButtonConnexion = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ButtonConnexionAuLogiciel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// OnOffLabel
			// 
			this->OnOffLabel->Location = System::Drawing::Point(12, 12);
			this->OnOffLabel->Name = L"OnOffLabel";
			this->OnOffLabel->Size = System::Drawing::Size(200, 100);
			this->OnOffLabel->TabIndex = 6;
			this->OnOffLabel->Text = L"Ouvrir l\'interface V2";
			this->OnOffLabel->UseVisualStyleBackColor = true;
			this->OnOffLabel->Click += gcnew System::EventHandler(this, &MyForm::OnOffLabel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 388);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(149, 473);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"mdp";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(189, 407);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(293, 22);
			this->textBoxLogin->TabIndex = 9;
			// 
			// textBoxMdp
			// 
			this->textBoxMdp->Location = System::Drawing::Point(189, 470);
			this->textBoxMdp->Name = L"textBoxMdp";
			this->textBoxMdp->Size = System::Drawing::Size(293, 22);
			this->textBoxMdp->TabIndex = 10;
			// 
			// ButtonConnexion
			// 
			this->ButtonConnexion->Location = System::Drawing::Point(266, 509);
			this->ButtonConnexion->Name = L"ButtonConnexion";
			this->ButtonConnexion->Size = System::Drawing::Size(108, 59);
			this->ButtonConnexion->TabIndex = 11;
			this->ButtonConnexion->Text = L"affiche";
			this->ButtonConnexion->UseVisualStyleBackColor = true;
			this->ButtonConnexion->Click += gcnew System::EventHandler(this, &MyForm::ButtonConnexion_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(246, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(753, 331);
			this->dataGridView1->TabIndex = 0;
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(527, 520);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(154, 47);
			this->ButtonAdd->TabIndex = 12;
			this->ButtonAdd->Text = L"ButtonAdd";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::ButtonAdd_Click);
			// 
			// ButtonConnexionAuLogiciel
			// 
			this->ButtonConnexionAuLogiciel->Location = System::Drawing::Point(734, 509);
			this->ButtonConnexionAuLogiciel->Name = L"ButtonConnexionAuLogiciel";
			this->ButtonConnexionAuLogiciel->Size = System::Drawing::Size(195, 57);
			this->ButtonConnexionAuLogiciel->TabIndex = 13;
			this->ButtonConnexionAuLogiciel->Text = L"ButtonConnexionAuLogiciel";
			this->ButtonConnexionAuLogiciel->UseVisualStyleBackColor = true;
			this->ButtonConnexionAuLogiciel->Click += gcnew System::EventHandler(this, &MyForm::ButtonConnexionAuLogiciel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 593);
			this->Controls->Add(this->ButtonConnexionAuLogiciel);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ButtonConnexion);
			this->Controls->Add(this->textBoxMdp);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OnOffLabel);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OnOffLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormv2^ S1 = gcnew MyFormv2(0);
		S1->Show();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void ButtonConnexion_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->voirListeLogin();
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
private: System::Void ButtonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ajouterLogin(this->textBoxLogin->Text, this->textBoxMdp->Text);
	this->textBoxLogin->Text = "";
	this->textBoxMdp->Text = "";
}

	private: System::Void ButtonConnexionAuLogiciel_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->seConnecter(this->textBoxLogin->Text, this->textBoxMdp->Text);
	
	
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
	this->label1->Text = this->dataGridView1->Rows[0]->Cells[0]->Value->ToString();
	this->textBoxLogin->Text = "";
	this->textBoxMdp->Text = "";
}

};

};

