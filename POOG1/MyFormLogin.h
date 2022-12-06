#pragma once
#include "pch.h"
#include "Myform.h"

namespace IHMPROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Comp_Mappage;
	using namespace Comp_Services;

	/// <summary>
	/// Description résumée de MyFormLogin
	/// </summary>
	public ref class MyFormLogin : public System::Windows::Forms::Form
	{
	public:
		MyFormLogin(void)
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
		~MyFormLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TexteboxPassword;
	private: System::Windows::Forms::TextBox^ TexteboxLogin;
	private: System::Windows::Forms::Button^ ButtonConnect;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TexteboxPassword = (gcnew System::Windows::Forms::TextBox());
			this->TexteboxLogin = (gcnew System::Windows::Forms::TextBox());
			this->ButtonConnect = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 93);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom d\'utilisateur :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 150);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mot de passe :";
			// 
			// TexteboxPassword
			// 
			this->TexteboxPassword->Location = System::Drawing::Point(206, 148);
			this->TexteboxPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TexteboxPassword->Name = L"TexteboxPassword";
			this->TexteboxPassword->Size = System::Drawing::Size(195, 20);
			this->TexteboxPassword->TabIndex = 2;
			// 
			// TexteboxLogin
			// 
			this->TexteboxLogin->Location = System::Drawing::Point(206, 90);
			this->TexteboxLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TexteboxLogin->Name = L"TexteboxLogin";
			this->TexteboxLogin->Size = System::Drawing::Size(195, 20);
			this->TexteboxLogin->TabIndex = 3;
			// 
			// ButtonConnect
			// 
			this->ButtonConnect->Location = System::Drawing::Point(218, 235);
			this->ButtonConnect->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ButtonConnect->Name = L"ButtonConnect";
			this->ButtonConnect->Size = System::Drawing::Size(123, 62);
			this->ButtonConnect->TabIndex = 4;
			this->ButtonConnect->Text = L"Se connecter";
			this->ButtonConnect->UseVisualStyleBackColor = true;
			this->ButtonConnect->Click += gcnew System::EventHandler(this, &MyFormLogin::ButtonConnect_Click);
			// 
			// MyFormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 384);
			this->Controls->Add(this->ButtonConnect);
			this->Controls->Add(this->TexteboxLogin);
			this->Controls->Add(this->TexteboxPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyFormLogin";
			this->Text = L"MyFormLogin";
			this->Load += gcnew System::EventHandler(this, &MyFormLogin::MyFormLogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel;
		this->oDs = servicePersonnel->LoginPersonnel(this->TexteboxLogin->Text, this->TexteboxPassword->Text);

		if (this->TexteboxPassword->Text == "") {
			MyForm^ S1 = gcnew MyForm();
			S1->Show();
		}
		else
		{
			int valeur = System::Convert::ToInt16(this->oDs->Tables["CeLogin"]->Rows[0]->ItemArray[0]->ToString());
			MyForm^ S1 = gcnew MyForm(valeur);
			S1->Show();
		}
	}
	private: System::Void MyFormLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
