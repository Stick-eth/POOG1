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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(128, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"S�lectionner le client";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormMajClient::label1_Click);
			// 
			// MyFormMajClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 509);
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