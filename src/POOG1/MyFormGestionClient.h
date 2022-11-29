#pragma once

namespace POOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormGestionClient
	/// </summary>
	public ref class MyFormGestionClient : public System::Windows::Forms::Form
	{
	public:
		MyFormGestionClient(void)
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
		~MyFormGestionClient()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ CreerClient;
	private: System::Windows::Forms::Button^ MajClient;
	private: System::Windows::Forms::Button^ SupprimerClient;
	private: System::Windows::Forms::Button^ AfficherClient;
	private: System::Windows::Forms::Label^ LabelTest;

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
			this->CreerClient = (gcnew System::Windows::Forms::Button());
			this->MajClient = (gcnew System::Windows::Forms::Button());
			this->SupprimerClient = (gcnew System::Windows::Forms::Button());
			this->AfficherClient = (gcnew System::Windows::Forms::Button());
			this->LabelTest = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CreerClient
			// 
			this->CreerClient->Location = System::Drawing::Point(12, 12);
			this->CreerClient->Name = L"CreerClient";
			this->CreerClient->Size = System::Drawing::Size(200, 100);
			this->CreerClient->TabIndex = 0;
			this->CreerClient->Text = L"Creer un Client";
			this->CreerClient->UseVisualStyleBackColor = true;
			this->CreerClient->Click += gcnew System::EventHandler(this, &MyFormGestionClient::CreerClient_Click);
			// 
			// MajClient
			// 
			this->MajClient->Location = System::Drawing::Point(12, 118);
			this->MajClient->Name = L"MajClient";
			this->MajClient->Size = System::Drawing::Size(200, 100);
			this->MajClient->TabIndex = 1;
			this->MajClient->Text = L"Mettre à jour un Client";
			this->MajClient->UseVisualStyleBackColor = true;
			this->MajClient->Click += gcnew System::EventHandler(this, &MyFormGestionClient::MajClient_Click);
			// 
			// SupprimerClient
			// 
			this->SupprimerClient->Location = System::Drawing::Point(12, 224);
			this->SupprimerClient->Name = L"SupprimerClient";
			this->SupprimerClient->Size = System::Drawing::Size(200, 100);
			this->SupprimerClient->TabIndex = 2;
			this->SupprimerClient->Text = L"Supprimer un Client";
			this->SupprimerClient->UseVisualStyleBackColor = true;
			this->SupprimerClient->Click += gcnew System::EventHandler(this, &MyFormGestionClient::SupprimerClient_Click);
			// 
			// AfficherClient
			// 
			this->AfficherClient->Location = System::Drawing::Point(12, 330);
			this->AfficherClient->Name = L"AfficherClient";
			this->AfficherClient->Size = System::Drawing::Size(200, 100);
			this->AfficherClient->TabIndex = 3;
			this->AfficherClient->Text = L"Afficher un Client";
			this->AfficherClient->UseVisualStyleBackColor = true;
			this->AfficherClient->Click += gcnew System::EventHandler(this, &MyFormGestionClient::AfficherClient_Click);
			// 
			// LabelTest
			// 
			this->LabelTest->AutoSize = true;
			this->LabelTest->Location = System::Drawing::Point(43, 476);
			this->LabelTest->Name = L"LabelTest";
			this->LabelTest->Size = System::Drawing::Size(68, 16);
			this->LabelTest->TabIndex = 4;
			this->LabelTest->Text = L"LabelTest";
			// 
			// MyFormGestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 553);
			this->Controls->Add(this->LabelTest);
			this->Controls->Add(this->AfficherClient);
			this->Controls->Add(this->SupprimerClient);
			this->Controls->Add(this->MajClient);
			this->Controls->Add(this->CreerClient);
			this->Name = L"MyFormGestionClient";
			this->Text = L"Gestion Client";
			this->Load += gcnew System::EventHandler(this, &MyFormGestionClient::MyFormGestionClient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->CreerClient->Text;
	}
	private: System::Void MajClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->MajClient->Text;
	}
	private: System::Void SupprimerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->SupprimerClient->Text;
	}
	private: System::Void AfficherClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LabelTest->Text = this->AfficherClient->Text;
	}
	private: System::Void MyFormGestionClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
