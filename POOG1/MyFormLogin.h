#pragma once
#include "Myform.h"

namespace IHMPROJETPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->label1->Location = System::Drawing::Point(135, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom d\'utilisateur :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(152, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mot de passe :";
			// 
			// TexteboxPassword
			// 
			this->TexteboxPassword->Location = System::Drawing::Point(274, 182);
			this->TexteboxPassword->Name = L"TexteboxPassword";
			this->TexteboxPassword->Size = System::Drawing::Size(259, 22);
			this->TexteboxPassword->TabIndex = 2;
			// 
			// TexteboxLogin
			// 
			this->TexteboxLogin->Location = System::Drawing::Point(274, 111);
			this->TexteboxLogin->Name = L"TexteboxLogin";
			this->TexteboxLogin->Size = System::Drawing::Size(259, 22);
			this->TexteboxLogin->TabIndex = 3;
			// 
			// ButtonConnect
			// 
			this->ButtonConnect->Location = System::Drawing::Point(291, 289);
			this->ButtonConnect->Name = L"ButtonConnect";
			this->ButtonConnect->Size = System::Drawing::Size(164, 76);
			this->ButtonConnect->TabIndex = 4;
			this->ButtonConnect->Text = L"Se connecter";
			this->ButtonConnect->UseVisualStyleBackColor = true;
			this->ButtonConnect->Click += gcnew System::EventHandler(this, &MyFormLogin::ButtonConnect_Click);
			// 
			// MyFormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 472);
			this->Controls->Add(this->ButtonConnect);
			this->Controls->Add(this->TexteboxLogin);
			this->Controls->Add(this->TexteboxPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormLogin";
			this->Text = L"MyFormLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ S1 = gcnew MyForm;
		S1->Show();
	}
	};
}
