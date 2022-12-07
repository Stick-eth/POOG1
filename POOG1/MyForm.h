#pragma once
#include "pch.h"

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
			CacherTab();
		}
		MyForm(int role)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			CacherTab();
			if (role == 1) {
			}
			if (role == 2) {
				this->ButtonGestionCommande->Visible = false;
				this->ButtonGestionArticle->Visible = false;
			}
			if (role == 3) {
				this->ButtonGestionClient->Visible = false;
				this->ButtonGestionPersonnel->Visible = false;
			}
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>Creation
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		void CacherTab();
		void AfficherTabClient();
		void AfficherTabPersonnel();
		void AfficherTabArticle();
		void AfficherTabCommande();
		void AjouterTexteComboBox(System::Windows::Forms::ComboBox^ ListeDeroulante, System::Data::DataSet^ comboset);
		void AfficherStats();

	private: System::Data::DataSet ^ oDs;

	private: System::Windows::Forms::Button^ ButtonGestionClient;
	private: System::Windows::Forms::TabControl^ TabcontrolGestionClient;
	private: System::Windows::Forms::TabPage^ TabpageModifierClient;
	private: System::Windows::Forms::TabPage^ TabpageSupprimerClient;

	private: System::Windows::Forms::TabPage^ TabpageCreationClient;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ CreationClientButtonCreer;

	private: System::Windows::Forms::TextBox^ CreationClientTextboxLivraisonVille;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxLivraisonCodePostal;

	private: System::Windows::Forms::TextBox^ CreationClientTextboxLivraisonNumero;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxLivraisonNom;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxLivraisonType;

	private: System::Windows::Forms::TextBox^ CreationClientTextboxFacturationVille;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxFacturationCodePostal;

	private: System::Windows::Forms::TextBox^ CreationClientTextboxFacturationNumero;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxFacturationNom;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxFacturationType;

	private: System::Windows::Forms::TextBox^ CreationClientTextboxNom;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxEmail;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ CreationClientTextboxPrenom;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DateTimePicker^ CreationClientDatetimepicker;



	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ ModifierClientButtonModifier;

	private: System::Windows::Forms::TextBox^ ModifierClientLivraisonTexteboxVille;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ ModifierClientLivraisonTexteboxCodePostal;

	private: System::Windows::Forms::TextBox^ ModifierClientLivraisonTexteboxNumero;
	private: System::Windows::Forms::TextBox^ ModifierClientLivraisonTexteboxNom;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ ModifierClientLivraisonTexteboxType;


	private: System::Windows::Forms::TextBox^ ModifierClientFacturationTexteboxVille;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ ModifierClientFacturationTexteboxCodePostal;

	private: System::Windows::Forms::TextBox^ ModifierClientFacturationTexteboxNumero;
	private: System::Windows::Forms::TextBox^ ModifierClientFacturationTexteboxNom;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ ModifierClientFacturationTexteboxType;

	private: System::Windows::Forms::TextBox^ ModifierClientTexteboxNom;
	private: System::Windows::Forms::TextBox^ ModifierClientTexteboxEmail;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ ModifierClientTexteboxPrenom;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DateTimePicker^ ModifierClientDateTimePicker;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::ComboBox^ ModifierClientComboboxSelction;

	private: System::Windows::Forms::Label^ label33;

	private: System::Windows::Forms::TabPage^ TabpageAffichageClient;
	private: System::Windows::Forms::DataGridView^ AfficherClientDataGridView;
	private: System::Windows::Forms::ComboBox^ AfficherClientCombobox;

	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::ComboBox^ SupprimerClientCombox;


	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ SupprimerClientButton;

	private: System::Windows::Forms::CheckBox^ SupprimerClientCheckbox;
	private: System::Windows::Forms::Button^ ButtonGestionPersonnel;
	private: System::Windows::Forms::TabControl^ TabcontrolGestionPersonnel;

	private: System::Windows::Forms::TabPage^ TabpageCreationPersonnel;
	private: System::Windows::Forms::Button^ CreationPersonnelButtonCreer;

	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxAdresseVille;

	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxAdresseCodePostal;

	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxAdresseNumero;
	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxAdresseNom;


	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxAdresseType;

	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxNom;
	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxEmail;


	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxPrenom;

	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::DateTimePicker^ CreationPersonnelDateTimePicker;




	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::TabPage^ TabpageModificationPersonnel;

	private: System::Windows::Forms::ComboBox^ ModificationPersonnelComboBoxPersonnel;
	private: System::Windows::Forms::Label^ label52;



	private: System::Windows::Forms::TabPage^ TabpageSupprimerPersonnel;
	private: System::Windows::Forms::Button^ SupprimerPersonnelButton;


	private: System::Windows::Forms::CheckBox^ SupprimerPersonnelCheckbox;

	private: System::Windows::Forms::ComboBox^ SupprimerPersonnelComboBox;

	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::TabPage^ TabpageAfficherPersonnel;
	private: System::Windows::Forms::DataGridView^ AfficherPersonnelDataGridView;



	private: System::Windows::Forms::ComboBox^ AfficherPersonnelCombobox;

	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::ComboBox^ CreationPersonnelComboboxSuperieur;

	private: System::Windows::Forms::Label^ LabelSelectionSuperieur;
	private: System::Windows::Forms::TextBox^ CreationPersonnelTextboxMotdepasse;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::ComboBox^ ModificationPersonnelComboBoxSuperieur;
	private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ ModificationPersonnelTexteboxMotDePasse;


	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Button^ ModificationPersonnelButtonModifier;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ ModificationPersonnelTexteboxNom;
private: System::Windows::Forms::TextBox^ ModificationPersonnelTexteboxEmail;



	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::TextBox^ ModificationPersonnelTexteboxPrenom;

	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::DateTimePicker^ ModificationPersonnelDatetimepicker;

	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Button^ AfficherClientButton;
	private: System::Windows::Forms::Button^ AfficherPersonnelButton;
	private: System::Windows::Forms::Button^ ButtonGestionArticle;
	private: System::Windows::Forms::Button^ ButtonGestionCommande;
	private: System::Windows::Forms::Button^ ButtonGestionStats;
	private: System::Windows::Forms::TabControl^ TabcontrolGestionArticle;
	private: System::Windows::Forms::TabPage^ TabpageCreationArticle;


	private: System::Windows::Forms::TabPage^ TabpageModifierArticle;


	private: System::Windows::Forms::TabPage^ TabpageSupprimerArticle;
	private: System::Windows::Forms::Button^ SupprimerArticleButton;


	private: System::Windows::Forms::CheckBox^ SupprimerArticleCheckbox;

	private: System::Windows::Forms::ComboBox^ SupprimerArticleCombobox;

	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::TabPage^ TabpageAfficherArticle;
	private: System::Windows::Forms::Button^ AfficherArticleButton;
	private: System::Windows::Forms::DataGridView^ AfficherArticleDataGridView;



	private: System::Windows::Forms::ComboBox^ AfficherArticleCombobox;

	private: System::Windows::Forms::Label^ label88;
	private: System::Windows::Forms::RadioButton^ CreationArticleRadiobuttonReducGrandVolumeOui;

	private: System::Windows::Forms::RadioButton^ CreationArticleRadiobuttonReducGrandVolumeNon;

	private: System::Windows::Forms::Button^ CreationArticleButtonCreer;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxCouleur;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxUniteMesure;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxSeuilReaprovisionement;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxQuantiteEnStock;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxPrixHT;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxDesignation;

	private: System::Windows::Forms::TextBox^ CreationArticleTexteboxReference;

	private: System::Windows::Forms::Label^ LabelNature;
	private: System::Windows::Forms::CheckedListBox^ CreationArticleCheckedlistboxNature;

	private: System::Windows::Forms::Label^ LabelCouleur;
	private: System::Windows::Forms::Label^ LabelUniteMesure;
	private: System::Windows::Forms::Label^ LabelPrixHT;
	private: System::Windows::Forms::Label^ LabelReductionGrandVolumes;
	private: System::Windows::Forms::Label^ LabelSeuilReaprovisionement;
	private: System::Windows::Forms::Label^ LabelQuantiteEnStock;
	private: System::Windows::Forms::Label^ LabelDesignation;
	private: System::Windows::Forms::Label^ LabelReference;
	private: System::Windows::Forms::RadioButton^ ModificationArticleRadioButtonReducGrandVolumeOui;

	private: System::Windows::Forms::RadioButton^ ModificationArticleRadioButtonReducGrandVolumeNon;
	private: System::Windows::Forms::Button^ ModificationArticleButtonModification;





	private: System::Windows::Forms::ComboBox^ ComboboxSelectionArticle;
	private: System::Windows::Forms::Label^ LabelSelectionArticle;
	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxCouleur;

	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxUniteMesure;


	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxSeuilReaprovisionement;

	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxQuantiteEnStock;

	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxPrixHT;

	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxDesignation;

	private: System::Windows::Forms::TextBox^ ModificationArticleTexteboxReference;


	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::CheckedListBox^ ModificationArticleCheckedListBox;

	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::TabControl^ TabcontrolGestionCommande;
	private: System::Windows::Forms::TabPage^ TabpageAfficherCommande;
	private: System::Windows::Forms::Button^ AfficherCommandeButton;
	private: System::Windows::Forms::DataGridView^ AfficherCommandeDataGridView;
	private: System::Windows::Forms::ComboBox^ AfficherCommandeCombobox;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::TabPage^ TabpageCreationCommande;





	private: System::Windows::Forms::TabPage^ TabpageModifierCommande;




	private: System::Windows::Forms::TabPage^ TabpageSupprimerCommande;
	private: System::Windows::Forms::Button^ SupprimerCommandeButton;
	private: System::Windows::Forms::CheckBox^ SupprimerCommandeCheckbox;
	private: System::Windows::Forms::ComboBox^ SupprimerCommandeCombobox;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Button^ CreationCommandeButton;
	private: System::Windows::Forms::ComboBox^ ModifierCommandeComboxboxSelectionCommande;

	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::Button^ ModifierCommandeButtonAjouterArticle;




	private: System::Windows::Forms::ComboBox^ ModifierCommandeComboxboxSelectionArticle;

	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::TextBox^ ModifierCommandeTexteboxRemiseExceptionnelUnitaire;






	private: System::Windows::Forms::TextBox^ ModifierCommandeTexteboxQuantite;









	private: System::Windows::Forms::Label^ label90;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Button^ ModifierCommandeButtonAppliquerRemise;

	private: System::Windows::Forms::ComboBox^ ModifierCommandeComboboxSelectionRemise;

	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Button^ ModifierCommandeButtonFacture;
	private: System::Windows::Forms::ComboBox^ ModifierCommandeComboboxSelectionMoyen;


	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::TextBox^ ModifierCommandeTexteboxMontant;

	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ ModifierCommandeLabelResteAPayer;

	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::Button^ ModifierCommandeButtonPayer;
private: System::Windows::Forms::RadioButton^ CreationPersonnelRadiobuttonEmploye;

private: System::Windows::Forms::RadioButton^ CreationPersonnelRadiobuttonRH;
private: System::Windows::Forms::RadioButton^ CreationPersonnelRadiobuttonAdmin;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::TabControl^ TabcontrolStats;
private: System::Windows::Forms::TabPage^ TabpageStats;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::TabPage^ TabpageStatsAv;






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
			this->ButtonGestionClient = (gcnew System::Windows::Forms::Button());
			this->TabcontrolGestionClient = (gcnew System::Windows::Forms::TabControl());
			this->TabpageCreationClient = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CreationClientButtonCreer = (gcnew System::Windows::Forms::Button());
			this->CreationClientTextboxLivraisonVille = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CreationClientTextboxLivraisonCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxLivraisonNumero = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxLivraisonNom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CreationClientTextboxLivraisonType = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxFacturationVille = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CreationClientTextboxFacturationCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxFacturationNumero = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxFacturationNom = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CreationClientTextboxFacturationType = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxNom = (gcnew System::Windows::Forms::TextBox());
			this->CreationClientTextboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->CreationClientTextboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->CreationClientDatetimepicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TabpageModifierClient = (gcnew System::Windows::Forms::TabPage());
			this->ModifierClientComboboxSelction = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ModifierClientButtonModifier = (gcnew System::Windows::Forms::Button());
			this->ModifierClientLivraisonTexteboxVille = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->ModifierClientLivraisonTexteboxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientLivraisonTexteboxNumero = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientLivraisonTexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->ModifierClientLivraisonTexteboxType = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientFacturationTexteboxVille = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->ModifierClientFacturationTexteboxCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientFacturationTexteboxNumero = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientFacturationTexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->ModifierClientFacturationTexteboxType = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientTexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->ModifierClientTexteboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->ModifierClientTexteboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->ModifierClientDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->TabpageSupprimerClient = (gcnew System::Windows::Forms::TabPage());
			this->SupprimerClientButton = (gcnew System::Windows::Forms::Button());
			this->SupprimerClientCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SupprimerClientCombox = (gcnew System::Windows::Forms::ComboBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->TabpageAffichageClient = (gcnew System::Windows::Forms::TabPage());
			this->AfficherClientButton = (gcnew System::Windows::Forms::Button());
			this->AfficherClientDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->AfficherClientCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->ButtonGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->TabcontrolGestionPersonnel = (gcnew System::Windows::Forms::TabControl());
			this->TabpageCreationPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->CreationPersonnelRadiobuttonEmploye = (gcnew System::Windows::Forms::RadioButton());
			this->CreationPersonnelRadiobuttonRH = (gcnew System::Windows::Forms::RadioButton());
			this->CreationPersonnelRadiobuttonAdmin = (gcnew System::Windows::Forms::RadioButton());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelComboboxSuperieur = (gcnew System::Windows::Forms::ComboBox());
			this->LabelSelectionSuperieur = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelTextboxMotdepasse = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelButtonCreer = (gcnew System::Windows::Forms::Button());
			this->CreationPersonnelTextboxAdresseVille = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelTextboxAdresseCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->CreationPersonnelTextboxAdresseNumero = (gcnew System::Windows::Forms::TextBox());
			this->CreationPersonnelTextboxAdresseNom = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelTextboxAdresseType = (gcnew System::Windows::Forms::TextBox());
			this->CreationPersonnelTextboxNom = (gcnew System::Windows::Forms::TextBox());
			this->CreationPersonnelTextboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelTextboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->CreationPersonnelDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->TabpageModificationPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->ModificationPersonnelComboBoxSuperieur = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->ModificationPersonnelTexteboxMotDePasse = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->ModificationPersonnelButtonModifier = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->ModificationPersonnelTexteboxNom = (gcnew System::Windows::Forms::TextBox());
			this->ModificationPersonnelTexteboxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->ModificationPersonnelTexteboxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->ModificationPersonnelDatetimepicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->ModificationPersonnelComboBoxPersonnel = (gcnew System::Windows::Forms::ComboBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->TabpageSupprimerPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->SupprimerPersonnelButton = (gcnew System::Windows::Forms::Button());
			this->SupprimerPersonnelCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SupprimerPersonnelComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->TabpageAfficherPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->AfficherPersonnelButton = (gcnew System::Windows::Forms::Button());
			this->AfficherPersonnelDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->AfficherPersonnelCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->ButtonGestionArticle = (gcnew System::Windows::Forms::Button());
			this->ButtonGestionCommande = (gcnew System::Windows::Forms::Button());
			this->ButtonGestionStats = (gcnew System::Windows::Forms::Button());
			this->TabcontrolGestionArticle = (gcnew System::Windows::Forms::TabControl());
			this->TabpageCreationArticle = (gcnew System::Windows::Forms::TabPage());
			this->CreationArticleRadiobuttonReducGrandVolumeOui = (gcnew System::Windows::Forms::RadioButton());
			this->CreationArticleRadiobuttonReducGrandVolumeNon = (gcnew System::Windows::Forms::RadioButton());
			this->CreationArticleButtonCreer = (gcnew System::Windows::Forms::Button());
			this->CreationArticleTexteboxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->CreationArticleTexteboxUniteMesure = (gcnew System::Windows::Forms::TextBox());
			this->CreationArticleTexteboxSeuilReaprovisionement = (gcnew System::Windows::Forms::TextBox());
			this->CreationArticleTexteboxQuantiteEnStock = (gcnew System::Windows::Forms::TextBox());
			this->CreationArticleTexteboxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->CreationArticleTexteboxDesignation = (gcnew System::Windows::Forms::TextBox());
			this->CreationArticleTexteboxReference = (gcnew System::Windows::Forms::TextBox());
			this->LabelNature = (gcnew System::Windows::Forms::Label());
			this->CreationArticleCheckedlistboxNature = (gcnew System::Windows::Forms::CheckedListBox());
			this->LabelCouleur = (gcnew System::Windows::Forms::Label());
			this->LabelUniteMesure = (gcnew System::Windows::Forms::Label());
			this->LabelPrixHT = (gcnew System::Windows::Forms::Label());
			this->LabelReductionGrandVolumes = (gcnew System::Windows::Forms::Label());
			this->LabelSeuilReaprovisionement = (gcnew System::Windows::Forms::Label());
			this->LabelQuantiteEnStock = (gcnew System::Windows::Forms::Label());
			this->LabelDesignation = (gcnew System::Windows::Forms::Label());
			this->LabelReference = (gcnew System::Windows::Forms::Label());
			this->TabpageModifierArticle = (gcnew System::Windows::Forms::TabPage());
			this->ModificationArticleRadioButtonReducGrandVolumeOui = (gcnew System::Windows::Forms::RadioButton());
			this->ModificationArticleRadioButtonReducGrandVolumeNon = (gcnew System::Windows::Forms::RadioButton());
			this->ModificationArticleButtonModification = (gcnew System::Windows::Forms::Button());
			this->ComboboxSelectionArticle = (gcnew System::Windows::Forms::ComboBox());
			this->LabelSelectionArticle = (gcnew System::Windows::Forms::Label());
			this->ModificationArticleTexteboxCouleur = (gcnew System::Windows::Forms::TextBox());
			this->ModificationArticleTexteboxUniteMesure = (gcnew System::Windows::Forms::TextBox());
			this->ModificationArticleTexteboxSeuilReaprovisionement = (gcnew System::Windows::Forms::TextBox());
			this->ModificationArticleTexteboxQuantiteEnStock = (gcnew System::Windows::Forms::TextBox());
			this->ModificationArticleTexteboxPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->ModificationArticleTexteboxDesignation = (gcnew System::Windows::Forms::TextBox());
			this->ModificationArticleTexteboxReference = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->ModificationArticleCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->TabpageSupprimerArticle = (gcnew System::Windows::Forms::TabPage());
			this->SupprimerArticleButton = (gcnew System::Windows::Forms::Button());
			this->SupprimerArticleCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SupprimerArticleCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->TabpageAfficherArticle = (gcnew System::Windows::Forms::TabPage());
			this->AfficherArticleButton = (gcnew System::Windows::Forms::Button());
			this->AfficherArticleDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->AfficherArticleCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->TabcontrolGestionCommande = (gcnew System::Windows::Forms::TabControl());
			this->TabpageCreationCommande = (gcnew System::Windows::Forms::TabPage());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->CreationCommandeButton = (gcnew System::Windows::Forms::Button());
			this->TabpageModifierCommande = (gcnew System::Windows::Forms::TabPage());
			this->ModifierCommandeButtonPayer = (gcnew System::Windows::Forms::Button());
			this->ModifierCommandeComboboxSelectionMoyen = (gcnew System::Windows::Forms::ComboBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->ModifierCommandeTexteboxMontant = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->ModifierCommandeLabelResteAPayer = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->ModifierCommandeButtonAppliquerRemise = (gcnew System::Windows::Forms::Button());
			this->ModifierCommandeComboboxSelectionRemise = (gcnew System::Windows::Forms::ComboBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->ModifierCommandeButtonFacture = (gcnew System::Windows::Forms::Button());
			this->ModifierCommandeComboxboxSelectionCommande = (gcnew System::Windows::Forms::ComboBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->ModifierCommandeButtonAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->ModifierCommandeComboxboxSelectionArticle = (gcnew System::Windows::Forms::ComboBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire = (gcnew System::Windows::Forms::TextBox());
			this->ModifierCommandeTexteboxQuantite = (gcnew System::Windows::Forms::TextBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->TabpageSupprimerCommande = (gcnew System::Windows::Forms::TabPage());
			this->SupprimerCommandeButton = (gcnew System::Windows::Forms::Button());
			this->SupprimerCommandeCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SupprimerCommandeCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->TabpageAfficherCommande = (gcnew System::Windows::Forms::TabPage());
			this->AfficherCommandeButton = (gcnew System::Windows::Forms::Button());
			this->AfficherCommandeDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->AfficherCommandeCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->TabcontrolStats = (gcnew System::Windows::Forms::TabControl());
			this->TabpageStats = (gcnew System::Windows::Forms::TabPage());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->TabpageStatsAv = (gcnew System::Windows::Forms::TabPage());
			this->TabcontrolGestionClient->SuspendLayout();
			this->TabpageCreationClient->SuspendLayout();
			this->TabpageModifierClient->SuspendLayout();
			this->TabpageSupprimerClient->SuspendLayout();
			this->TabpageAffichageClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherClientDataGridView))->BeginInit();
			this->TabcontrolGestionPersonnel->SuspendLayout();
			this->TabpageCreationPersonnel->SuspendLayout();
			this->TabpageModificationPersonnel->SuspendLayout();
			this->TabpageSupprimerPersonnel->SuspendLayout();
			this->TabpageAfficherPersonnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherPersonnelDataGridView))->BeginInit();
			this->TabcontrolGestionArticle->SuspendLayout();
			this->TabpageCreationArticle->SuspendLayout();
			this->TabpageModifierArticle->SuspendLayout();
			this->TabpageSupprimerArticle->SuspendLayout();
			this->TabpageAfficherArticle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherArticleDataGridView))->BeginInit();
			this->TabcontrolGestionCommande->SuspendLayout();
			this->TabpageCreationCommande->SuspendLayout();
			this->TabpageModifierCommande->SuspendLayout();
			this->TabpageSupprimerCommande->SuspendLayout();
			this->TabpageAfficherCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherCommandeDataGridView))->BeginInit();
			this->TabcontrolStats->SuspendLayout();
			this->TabpageStats->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// ButtonGestionClient
			// 
			this->ButtonGestionClient->Location = System::Drawing::Point(9, 10);
			this->ButtonGestionClient->Margin = System::Windows::Forms::Padding(2);
			this->ButtonGestionClient->Name = L"ButtonGestionClient";
			this->ButtonGestionClient->Size = System::Drawing::Size(106, 46);
			this->ButtonGestionClient->TabIndex = 0;
			this->ButtonGestionClient->Text = L"Gestion Client";
			this->ButtonGestionClient->UseVisualStyleBackColor = true;
			this->ButtonGestionClient->Click += gcnew System::EventHandler(this, &MyForm::ButtonGestionClient_Click);
			// 
			// TabcontrolGestionClient
			// 
			this->TabcontrolGestionClient->Controls->Add(this->TabpageCreationClient);
			this->TabcontrolGestionClient->Controls->Add(this->TabpageModifierClient);
			this->TabcontrolGestionClient->Controls->Add(this->TabpageSupprimerClient);
			this->TabcontrolGestionClient->Controls->Add(this->TabpageAffichageClient);
			this->TabcontrolGestionClient->Location = System::Drawing::Point(9, 75);
			this->TabcontrolGestionClient->Margin = System::Windows::Forms::Padding(2);
			this->TabcontrolGestionClient->Name = L"TabcontrolGestionClient";
			this->TabcontrolGestionClient->SelectedIndex = 0;
			this->TabcontrolGestionClient->Size = System::Drawing::Size(1207, 576);
			this->TabcontrolGestionClient->TabIndex = 1;
			// 
			// TabpageCreationClient
			// 
			this->TabpageCreationClient->Controls->Add(this->button1);
			this->TabpageCreationClient->Controls->Add(this->CreationClientButtonCreer);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxLivraisonVille);
			this->TabpageCreationClient->Controls->Add(this->label1);
			this->TabpageCreationClient->Controls->Add(this->label2);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxLivraisonCodePostal);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxLivraisonNumero);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxLivraisonNom);
			this->TabpageCreationClient->Controls->Add(this->label3);
			this->TabpageCreationClient->Controls->Add(this->label4);
			this->TabpageCreationClient->Controls->Add(this->label5);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxLivraisonType);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxFacturationVille);
			this->TabpageCreationClient->Controls->Add(this->label6);
			this->TabpageCreationClient->Controls->Add(this->label7);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxFacturationCodePostal);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxFacturationNumero);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxFacturationNom);
			this->TabpageCreationClient->Controls->Add(this->label8);
			this->TabpageCreationClient->Controls->Add(this->label9);
			this->TabpageCreationClient->Controls->Add(this->label10);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxFacturationType);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxNom);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxEmail);
			this->TabpageCreationClient->Controls->Add(this->label11);
			this->TabpageCreationClient->Controls->Add(this->label12);
			this->TabpageCreationClient->Controls->Add(this->label13);
			this->TabpageCreationClient->Controls->Add(this->CreationClientTextboxPrenom);
			this->TabpageCreationClient->Controls->Add(this->label14);
			this->TabpageCreationClient->Controls->Add(this->label15);
			this->TabpageCreationClient->Controls->Add(this->button3);
			this->TabpageCreationClient->Controls->Add(this->CreationClientDatetimepicker);
			this->TabpageCreationClient->Controls->Add(this->label16);
			this->TabpageCreationClient->Location = System::Drawing::Point(4, 22);
			this->TabpageCreationClient->Margin = System::Windows::Forms::Padding(2);
			this->TabpageCreationClient->Name = L"TabpageCreationClient";
			this->TabpageCreationClient->Padding = System::Windows::Forms::Padding(2);
			this->TabpageCreationClient->Size = System::Drawing::Size(1199, 550);
			this->TabpageCreationClient->TabIndex = 0;
			this->TabpageCreationClient->Text = L"Creation Client";
			this->TabpageCreationClient->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(442, 197);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 34);
			this->button1->TabIndex = 156;
			this->button1->Text = L"Copier Adresse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// CreationClientButtonCreer
			// 
			this->CreationClientButtonCreer->Location = System::Drawing::Point(398, 379);
			this->CreationClientButtonCreer->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientButtonCreer->Name = L"CreationClientButtonCreer";
			this->CreationClientButtonCreer->Size = System::Drawing::Size(125, 71);
			this->CreationClientButtonCreer->TabIndex = 163;
			this->CreationClientButtonCreer->Text = L"Créer le client";
			this->CreationClientButtonCreer->UseVisualStyleBackColor = true;
			this->CreationClientButtonCreer->Click += gcnew System::EventHandler(this, &MyForm::CreationClientButtonCreer_Click);
			// 
			// CreationClientTextboxLivraisonVille
			// 
			this->CreationClientTextboxLivraisonVille->Location = System::Drawing::Point(548, 311);
			this->CreationClientTextboxLivraisonVille->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxLivraisonVille->Name = L"CreationClientTextboxLivraisonVille";
			this->CreationClientTextboxLivraisonVille->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxLivraisonVille->TabIndex = 160;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(475, 338);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 180;
			this->label1->Text = L"Code Postal";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(490, 314);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 179;
			this->label2->Text = L"Ville";
			// 
			// CreationClientTextboxLivraisonCodePostal
			// 
			this->CreationClientTextboxLivraisonCodePostal->Location = System::Drawing::Point(548, 336);
			this->CreationClientTextboxLivraisonCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxLivraisonCodePostal->Name = L"CreationClientTextboxLivraisonCodePostal";
			this->CreationClientTextboxLivraisonCodePostal->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxLivraisonCodePostal->TabIndex = 161;
			// 
			// CreationClientTextboxLivraisonNumero
			// 
			this->CreationClientTextboxLivraisonNumero->Location = System::Drawing::Point(548, 240);
			this->CreationClientTextboxLivraisonNumero->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxLivraisonNumero->Name = L"CreationClientTextboxLivraisonNumero";
			this->CreationClientTextboxLivraisonNumero->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxLivraisonNumero->TabIndex = 157;
			// 
			// CreationClientTextboxLivraisonNom
			// 
			this->CreationClientTextboxLivraisonNom->Location = System::Drawing::Point(548, 288);
			this->CreationClientTextboxLivraisonNom->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxLivraisonNom->Name = L"CreationClientTextboxLivraisonNom";
			this->CreationClientTextboxLivraisonNom->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxLivraisonNom->TabIndex = 159;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(475, 267);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 178;
			this->label3->Text = L"Type voie";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(475, 288);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 177;
			this->label4->Text = L"Nom voie";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(482, 243);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 176;
			this->label5->Text = L"Numéro";
			// 
			// CreationClientTextboxLivraisonType
			// 
			this->CreationClientTextboxLivraisonType->Location = System::Drawing::Point(548, 265);
			this->CreationClientTextboxLivraisonType->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxLivraisonType->Name = L"CreationClientTextboxLivraisonType";
			this->CreationClientTextboxLivraisonType->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxLivraisonType->TabIndex = 158;
			// 
			// CreationClientTextboxFacturationVille
			// 
			this->CreationClientTextboxFacturationVille->Location = System::Drawing::Point(202, 309);
			this->CreationClientTextboxFacturationVille->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxFacturationVille->Name = L"CreationClientTextboxFacturationVille";
			this->CreationClientTextboxFacturationVille->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxFacturationVille->TabIndex = 154;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 336);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 175;
			this->label6->Text = L"Code Postal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(130, 311);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 174;
			this->label7->Text = L"Ville";
			// 
			// CreationClientTextboxFacturationCodePostal
			// 
			this->CreationClientTextboxFacturationCodePostal->Location = System::Drawing::Point(202, 333);
			this->CreationClientTextboxFacturationCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxFacturationCodePostal->Name = L"CreationClientTextboxFacturationCodePostal";
			this->CreationClientTextboxFacturationCodePostal->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxFacturationCodePostal->TabIndex = 155;
			// 
			// CreationClientTextboxFacturationNumero
			// 
			this->CreationClientTextboxFacturationNumero->Location = System::Drawing::Point(202, 238);
			this->CreationClientTextboxFacturationNumero->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxFacturationNumero->Name = L"CreationClientTextboxFacturationNumero";
			this->CreationClientTextboxFacturationNumero->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxFacturationNumero->TabIndex = 151;
			// 
			// CreationClientTextboxFacturationNom
			// 
			this->CreationClientTextboxFacturationNom->Location = System::Drawing::Point(202, 286);
			this->CreationClientTextboxFacturationNom->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxFacturationNom->Name = L"CreationClientTextboxFacturationNom";
			this->CreationClientTextboxFacturationNom->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxFacturationNom->TabIndex = 153;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(115, 265);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 173;
			this->label8->Text = L"Type voie";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(115, 286);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 172;
			this->label9->Text = L"Nom voie";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(122, 240);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 171;
			this->label10->Text = L"Numéro";
			// 
			// CreationClientTextboxFacturationType
			// 
			this->CreationClientTextboxFacturationType->Location = System::Drawing::Point(202, 262);
			this->CreationClientTextboxFacturationType->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxFacturationType->Name = L"CreationClientTextboxFacturationType";
			this->CreationClientTextboxFacturationType->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxFacturationType->TabIndex = 152;
			// 
			// CreationClientTextboxNom
			// 
			this->CreationClientTextboxNom->Location = System::Drawing::Point(196, 61);
			this->CreationClientTextboxNom->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxNom->Name = L"CreationClientTextboxNom";
			this->CreationClientTextboxNom->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxNom->TabIndex = 147;
			// 
			// CreationClientTextboxEmail
			// 
			this->CreationClientTextboxEmail->Location = System::Drawing::Point(196, 109);
			this->CreationClientTextboxEmail->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxEmail->Name = L"CreationClientTextboxEmail";
			this->CreationClientTextboxEmail->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxEmail->TabIndex = 149;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(115, 88);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 170;
			this->label11->Text = L"Prénom";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(108, 109);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 169;
			this->label12->Text = L"Email";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(115, 63);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 13);
			this->label13->TabIndex = 168;
			this->label13->Text = L"Nom";
			// 
			// CreationClientTextboxPrenom
			// 
			this->CreationClientTextboxPrenom->Location = System::Drawing::Point(196, 85);
			this->CreationClientTextboxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientTextboxPrenom->Name = L"CreationClientTextboxPrenom";
			this->CreationClientTextboxPrenom->Size = System::Drawing::Size(200, 20);
			this->CreationClientTextboxPrenom->TabIndex = 148;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(244, 208);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 167;
			this->label14->Text = L"Adresse facturation";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(607, 208);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 13);
			this->label15->TabIndex = 166;
			this->label15->Text = L"Adresse livraison";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(398, 379);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 71);
			this->button3->TabIndex = 162;
			this->button3->Text = L"Créer le client";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// CreationClientDatetimepicker
			// 
			this->CreationClientDatetimepicker->CustomFormat = L"yyyy\'-\'MM\'-\'dd";
			this->CreationClientDatetimepicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->CreationClientDatetimepicker->Location = System::Drawing::Point(202, 144);
			this->CreationClientDatetimepicker->Margin = System::Windows::Forms::Padding(2);
			this->CreationClientDatetimepicker->Name = L"CreationClientDatetimepicker";
			this->CreationClientDatetimepicker->Size = System::Drawing::Size(174, 20);
			this->CreationClientDatetimepicker->TabIndex = 150;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(92, 144);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 13);
			this->label16->TabIndex = 165;
			this->label16->Text = L"Date de naissance";
			// 
			// TabpageModifierClient
			// 
			this->TabpageModifierClient->Controls->Add(this->ModifierClientComboboxSelction);
			this->TabpageModifierClient->Controls->Add(this->label33);
			this->TabpageModifierClient->Controls->Add(this->button2);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientButtonModifier);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientLivraisonTexteboxVille);
			this->TabpageModifierClient->Controls->Add(this->label17);
			this->TabpageModifierClient->Controls->Add(this->label18);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientLivraisonTexteboxCodePostal);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientLivraisonTexteboxNumero);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientLivraisonTexteboxNom);
			this->TabpageModifierClient->Controls->Add(this->label19);
			this->TabpageModifierClient->Controls->Add(this->label20);
			this->TabpageModifierClient->Controls->Add(this->label21);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientLivraisonTexteboxType);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientFacturationTexteboxVille);
			this->TabpageModifierClient->Controls->Add(this->label22);
			this->TabpageModifierClient->Controls->Add(this->label23);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientFacturationTexteboxCodePostal);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientFacturationTexteboxNumero);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientFacturationTexteboxNom);
			this->TabpageModifierClient->Controls->Add(this->label24);
			this->TabpageModifierClient->Controls->Add(this->label25);
			this->TabpageModifierClient->Controls->Add(this->label26);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientFacturationTexteboxType);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientTexteboxNom);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientTexteboxEmail);
			this->TabpageModifierClient->Controls->Add(this->label27);
			this->TabpageModifierClient->Controls->Add(this->label28);
			this->TabpageModifierClient->Controls->Add(this->label29);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientTexteboxPrenom);
			this->TabpageModifierClient->Controls->Add(this->label30);
			this->TabpageModifierClient->Controls->Add(this->label31);
			this->TabpageModifierClient->Controls->Add(this->button5);
			this->TabpageModifierClient->Controls->Add(this->ModifierClientDateTimePicker);
			this->TabpageModifierClient->Controls->Add(this->label32);
			this->TabpageModifierClient->Location = System::Drawing::Point(4, 22);
			this->TabpageModifierClient->Margin = System::Windows::Forms::Padding(2);
			this->TabpageModifierClient->Name = L"TabpageModifierClient";
			this->TabpageModifierClient->Padding = System::Windows::Forms::Padding(2);
			this->TabpageModifierClient->Size = System::Drawing::Size(1199, 550);
			this->TabpageModifierClient->TabIndex = 1;
			this->TabpageModifierClient->Text = L"Modifier Client";
			this->TabpageModifierClient->UseVisualStyleBackColor = true;
			// 
			// ModifierClientComboboxSelction
			// 
			this->ModifierClientComboboxSelction->FormattingEnabled = true;
			this->ModifierClientComboboxSelction->Location = System::Drawing::Point(200, 20);
			this->ModifierClientComboboxSelction->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientComboboxSelction->Name = L"ModifierClientComboboxSelction";
			this->ModifierClientComboboxSelction->Size = System::Drawing::Size(241, 21);
			this->ModifierClientComboboxSelction->TabIndex = 215;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(44, 22);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(159, 13);
			this->label33->TabIndex = 214;
			this->label33->Text = L"Selectionner le client à modifier :";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(422, 193);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 34);
			this->button2->TabIndex = 190;
			this->button2->Text = L"Copier Adresse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// ModifierClientButtonModifier
			// 
			this->ModifierClientButtonModifier->Location = System::Drawing::Point(376, 375);
			this->ModifierClientButtonModifier->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientButtonModifier->Name = L"ModifierClientButtonModifier";
			this->ModifierClientButtonModifier->Size = System::Drawing::Size(125, 71);
			this->ModifierClientButtonModifier->TabIndex = 197;
			this->ModifierClientButtonModifier->Text = L"Mettre à jour le client";
			this->ModifierClientButtonModifier->UseVisualStyleBackColor = true;
			this->ModifierClientButtonModifier->Click += gcnew System::EventHandler(this, &MyForm::ModifierClientButtonModifier_Click);
			// 
			// ModifierClientLivraisonTexteboxVille
			// 
			this->ModifierClientLivraisonTexteboxVille->Location = System::Drawing::Point(527, 307);
			this->ModifierClientLivraisonTexteboxVille->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientLivraisonTexteboxVille->Name = L"ModifierClientLivraisonTexteboxVille";
			this->ModifierClientLivraisonTexteboxVille->Size = System::Drawing::Size(200, 20);
			this->ModifierClientLivraisonTexteboxVille->TabIndex = 194;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(454, 334);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(64, 13);
			this->label17->TabIndex = 213;
			this->label17->Text = L"Code Postal";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(470, 310);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(26, 13);
			this->label18->TabIndex = 212;
			this->label18->Text = L"Ville";
			// 
			// ModifierClientLivraisonTexteboxCodePostal
			// 
			this->ModifierClientLivraisonTexteboxCodePostal->Location = System::Drawing::Point(527, 332);
			this->ModifierClientLivraisonTexteboxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientLivraisonTexteboxCodePostal->Name = L"ModifierClientLivraisonTexteboxCodePostal";
			this->ModifierClientLivraisonTexteboxCodePostal->Size = System::Drawing::Size(200, 20);
			this->ModifierClientLivraisonTexteboxCodePostal->TabIndex = 195;
			// 
			// ModifierClientLivraisonTexteboxNumero
			// 
			this->ModifierClientLivraisonTexteboxNumero->Location = System::Drawing::Point(527, 236);
			this->ModifierClientLivraisonTexteboxNumero->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientLivraisonTexteboxNumero->Name = L"ModifierClientLivraisonTexteboxNumero";
			this->ModifierClientLivraisonTexteboxNumero->Size = System::Drawing::Size(200, 20);
			this->ModifierClientLivraisonTexteboxNumero->TabIndex = 191;
			// 
			// ModifierClientLivraisonTexteboxNom
			// 
			this->ModifierClientLivraisonTexteboxNom->Location = System::Drawing::Point(527, 284);
			this->ModifierClientLivraisonTexteboxNom->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientLivraisonTexteboxNom->Name = L"ModifierClientLivraisonTexteboxNom";
			this->ModifierClientLivraisonTexteboxNom->Size = System::Drawing::Size(200, 20);
			this->ModifierClientLivraisonTexteboxNom->TabIndex = 193;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(454, 263);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 13);
			this->label19->TabIndex = 211;
			this->label19->Text = L"Type voie";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(454, 284);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 13);
			this->label20->TabIndex = 210;
			this->label20->Text = L"Nom voie";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(460, 239);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(44, 13);
			this->label21->TabIndex = 209;
			this->label21->Text = L"Numéro";
			// 
			// ModifierClientLivraisonTexteboxType
			// 
			this->ModifierClientLivraisonTexteboxType->Location = System::Drawing::Point(527, 261);
			this->ModifierClientLivraisonTexteboxType->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientLivraisonTexteboxType->Name = L"ModifierClientLivraisonTexteboxType";
			this->ModifierClientLivraisonTexteboxType->Size = System::Drawing::Size(200, 20);
			this->ModifierClientLivraisonTexteboxType->TabIndex = 192;
			// 
			// ModifierClientFacturationTexteboxVille
			// 
			this->ModifierClientFacturationTexteboxVille->Location = System::Drawing::Point(182, 305);
			this->ModifierClientFacturationTexteboxVille->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientFacturationTexteboxVille->Name = L"ModifierClientFacturationTexteboxVille";
			this->ModifierClientFacturationTexteboxVille->Size = System::Drawing::Size(200, 20);
			this->ModifierClientFacturationTexteboxVille->TabIndex = 188;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(94, 332);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(64, 13);
			this->label22->TabIndex = 208;
			this->label22->Text = L"Code Postal";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(110, 307);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(26, 13);
			this->label23->TabIndex = 207;
			this->label23->Text = L"Ville";
			// 
			// ModifierClientFacturationTexteboxCodePostal
			// 
			this->ModifierClientFacturationTexteboxCodePostal->Location = System::Drawing::Point(182, 329);
			this->ModifierClientFacturationTexteboxCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientFacturationTexteboxCodePostal->Name = L"ModifierClientFacturationTexteboxCodePostal";
			this->ModifierClientFacturationTexteboxCodePostal->Size = System::Drawing::Size(200, 20);
			this->ModifierClientFacturationTexteboxCodePostal->TabIndex = 189;
			// 
			// ModifierClientFacturationTexteboxNumero
			// 
			this->ModifierClientFacturationTexteboxNumero->Location = System::Drawing::Point(182, 234);
			this->ModifierClientFacturationTexteboxNumero->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientFacturationTexteboxNumero->Name = L"ModifierClientFacturationTexteboxNumero";
			this->ModifierClientFacturationTexteboxNumero->Size = System::Drawing::Size(200, 20);
			this->ModifierClientFacturationTexteboxNumero->TabIndex = 185;
			// 
			// ModifierClientFacturationTexteboxNom
			// 
			this->ModifierClientFacturationTexteboxNom->Location = System::Drawing::Point(182, 282);
			this->ModifierClientFacturationTexteboxNom->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientFacturationTexteboxNom->Name = L"ModifierClientFacturationTexteboxNom";
			this->ModifierClientFacturationTexteboxNom->Size = System::Drawing::Size(200, 20);
			this->ModifierClientFacturationTexteboxNom->TabIndex = 187;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(94, 261);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 13);
			this->label24->TabIndex = 206;
			this->label24->Text = L"Type voie";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(94, 282);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 13);
			this->label25->TabIndex = 205;
			this->label25->Text = L"Nom voie";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(100, 236);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(44, 13);
			this->label26->TabIndex = 204;
			this->label26->Text = L"Numéro";
			// 
			// ModifierClientFacturationTexteboxType
			// 
			this->ModifierClientFacturationTexteboxType->Location = System::Drawing::Point(182, 258);
			this->ModifierClientFacturationTexteboxType->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientFacturationTexteboxType->Name = L"ModifierClientFacturationTexteboxType";
			this->ModifierClientFacturationTexteboxType->Size = System::Drawing::Size(200, 20);
			this->ModifierClientFacturationTexteboxType->TabIndex = 186;
			// 
			// ModifierClientTexteboxNom
			// 
			this->ModifierClientTexteboxNom->Location = System::Drawing::Point(175, 57);
			this->ModifierClientTexteboxNom->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientTexteboxNom->Name = L"ModifierClientTexteboxNom";
			this->ModifierClientTexteboxNom->Size = System::Drawing::Size(200, 20);
			this->ModifierClientTexteboxNom->TabIndex = 181;
			// 
			// ModifierClientTexteboxEmail
			// 
			this->ModifierClientTexteboxEmail->Location = System::Drawing::Point(175, 105);
			this->ModifierClientTexteboxEmail->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientTexteboxEmail->Name = L"ModifierClientTexteboxEmail";
			this->ModifierClientTexteboxEmail->Size = System::Drawing::Size(200, 20);
			this->ModifierClientTexteboxEmail->TabIndex = 183;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(94, 84);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(43, 13);
			this->label27->TabIndex = 203;
			this->label27->Text = L"Prénom";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(87, 105);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(32, 13);
			this->label28->TabIndex = 202;
			this->label28->Text = L"Email";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(94, 59);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(29, 13);
			this->label29->TabIndex = 201;
			this->label29->Text = L"Nom";
			// 
			// ModifierClientTexteboxPrenom
			// 
			this->ModifierClientTexteboxPrenom->Location = System::Drawing::Point(175, 81);
			this->ModifierClientTexteboxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientTexteboxPrenom->Name = L"ModifierClientTexteboxPrenom";
			this->ModifierClientTexteboxPrenom->Size = System::Drawing::Size(200, 20);
			this->ModifierClientTexteboxPrenom->TabIndex = 182;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(224, 204);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(98, 13);
			this->label30->TabIndex = 200;
			this->label30->Text = L"Adresse facturation";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(586, 204);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(86, 13);
			this->label31->TabIndex = 199;
			this->label31->Text = L"Adresse livraison";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(376, 375);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 71);
			this->button5->TabIndex = 196;
			this->button5->Text = L"Créer le client";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// ModifierClientDateTimePicker
			// 
			this->ModifierClientDateTimePicker->CustomFormat = L"yyyy\'-\'MM\'-\'dd";
			this->ModifierClientDateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->ModifierClientDateTimePicker->Location = System::Drawing::Point(182, 140);
			this->ModifierClientDateTimePicker->Margin = System::Windows::Forms::Padding(2);
			this->ModifierClientDateTimePicker->Name = L"ModifierClientDateTimePicker";
			this->ModifierClientDateTimePicker->Size = System::Drawing::Size(174, 20);
			this->ModifierClientDateTimePicker->TabIndex = 184;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(71, 140);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 13);
			this->label32->TabIndex = 198;
			this->label32->Text = L"Date de naissance";
			// 
			// TabpageSupprimerClient
			// 
			this->TabpageSupprimerClient->Controls->Add(this->SupprimerClientButton);
			this->TabpageSupprimerClient->Controls->Add(this->SupprimerClientCheckbox);
			this->TabpageSupprimerClient->Controls->Add(this->SupprimerClientCombox);
			this->TabpageSupprimerClient->Controls->Add(this->label41);
			this->TabpageSupprimerClient->Location = System::Drawing::Point(4, 22);
			this->TabpageSupprimerClient->Margin = System::Windows::Forms::Padding(2);
			this->TabpageSupprimerClient->Name = L"TabpageSupprimerClient";
			this->TabpageSupprimerClient->Size = System::Drawing::Size(1199, 550);
			this->TabpageSupprimerClient->TabIndex = 2;
			this->TabpageSupprimerClient->Text = L"Supprimer Client";
			this->TabpageSupprimerClient->UseVisualStyleBackColor = true;
			// 
			// SupprimerClientButton
			// 
			this->SupprimerClientButton->Location = System::Drawing::Point(180, 181);
			this->SupprimerClientButton->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerClientButton->Name = L"SupprimerClientButton";
			this->SupprimerClientButton->Size = System::Drawing::Size(236, 68);
			this->SupprimerClientButton->TabIndex = 5;
			this->SupprimerClientButton->Text = L"Supprimer";
			this->SupprimerClientButton->UseVisualStyleBackColor = true;
			this->SupprimerClientButton->Click += gcnew System::EventHandler(this, &MyForm::SupprimerClientButton_Click);
			// 
			// SupprimerClientCheckbox
			// 
			this->SupprimerClientCheckbox->AutoSize = true;
			this->SupprimerClientCheckbox->Location = System::Drawing::Point(199, 114);
			this->SupprimerClientCheckbox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerClientCheckbox->Name = L"SupprimerClientCheckbox";
			this->SupprimerClientCheckbox->Size = System::Drawing::Size(140, 17);
			this->SupprimerClientCheckbox->TabIndex = 4;
			this->SupprimerClientCheckbox->Text = L"Confirmer la suppression";
			this->SupprimerClientCheckbox->UseVisualStyleBackColor = true;
			this->SupprimerClientCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SupprimerClientCheckbox_CheckedChanged);
			// 
			// SupprimerClientCombox
			// 
			this->SupprimerClientCombox->FormattingEnabled = true;
			this->SupprimerClientCombox->Location = System::Drawing::Point(199, 38);
			this->SupprimerClientCombox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerClientCombox->Name = L"SupprimerClientCombox";
			this->SupprimerClientCombox->Size = System::Drawing::Size(266, 21);
			this->SupprimerClientCombox->TabIndex = 3;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(38, 41);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(168, 13);
			this->label41->TabIndex = 2;
			this->label41->Text = L"Selectionner le client à supprimer :";
			// 
			// TabpageAffichageClient
			// 
			this->TabpageAffichageClient->Controls->Add(this->AfficherClientButton);
			this->TabpageAffichageClient->Controls->Add(this->AfficherClientDataGridView);
			this->TabpageAffichageClient->Controls->Add(this->AfficherClientCombobox);
			this->TabpageAffichageClient->Controls->Add(this->label40);
			this->TabpageAffichageClient->Location = System::Drawing::Point(4, 22);
			this->TabpageAffichageClient->Margin = System::Windows::Forms::Padding(2);
			this->TabpageAffichageClient->Name = L"TabpageAffichageClient";
			this->TabpageAffichageClient->Size = System::Drawing::Size(1199, 550);
			this->TabpageAffichageClient->TabIndex = 4;
			this->TabpageAffichageClient->Text = L"Afficher Client";
			this->TabpageAffichageClient->UseVisualStyleBackColor = true;
			// 
			// AfficherClientButton
			// 
			this->AfficherClientButton->Location = System::Drawing::Point(389, 21);
			this->AfficherClientButton->Margin = System::Windows::Forms::Padding(2);
			this->AfficherClientButton->Name = L"AfficherClientButton";
			this->AfficherClientButton->Size = System::Drawing::Size(124, 41);
			this->AfficherClientButton->TabIndex = 5;
			this->AfficherClientButton->Text = L"Afficher";
			this->AfficherClientButton->UseVisualStyleBackColor = true;
			this->AfficherClientButton->Click += gcnew System::EventHandler(this, &MyForm::AfficherClientButton_Click);
			// 
			// AfficherClientDataGridView
			// 
			this->AfficherClientDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AfficherClientDataGridView->Location = System::Drawing::Point(24, 72);
			this->AfficherClientDataGridView->Margin = System::Windows::Forms::Padding(2);
			this->AfficherClientDataGridView->Name = L"AfficherClientDataGridView";
			this->AfficherClientDataGridView->RowHeadersWidth = 51;
			this->AfficherClientDataGridView->RowTemplate->Height = 24;
			this->AfficherClientDataGridView->Size = System::Drawing::Size(1156, 462);
			this->AfficherClientDataGridView->TabIndex = 4;
			// 
			// AfficherClientCombobox
			// 
			this->AfficherClientCombobox->FormattingEnabled = true;
			this->AfficherClientCombobox->Location = System::Drawing::Point(44, 34);
			this->AfficherClientCombobox->Margin = System::Windows::Forms::Padding(2);
			this->AfficherClientCombobox->Name = L"AfficherClientCombobox";
			this->AfficherClientCombobox->Size = System::Drawing::Size(266, 21);
			this->AfficherClientCombobox->TabIndex = 3;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(42, 19);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(158, 13);
			this->label40->TabIndex = 2;
			this->label40->Text = L"Selectionner le client à afficher :";
			// 
			// ButtonGestionPersonnel
			// 
			this->ButtonGestionPersonnel->Location = System::Drawing::Point(120, 10);
			this->ButtonGestionPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->ButtonGestionPersonnel->Name = L"ButtonGestionPersonnel";
			this->ButtonGestionPersonnel->Size = System::Drawing::Size(106, 46);
			this->ButtonGestionPersonnel->TabIndex = 2;
			this->ButtonGestionPersonnel->Text = L"Gestion Personnel";
			this->ButtonGestionPersonnel->UseVisualStyleBackColor = true;
			this->ButtonGestionPersonnel->Click += gcnew System::EventHandler(this, &MyForm::ButtonGestionPersonnel_Click);
			// 
			// TabcontrolGestionPersonnel
			// 
			this->TabcontrolGestionPersonnel->Controls->Add(this->TabpageCreationPersonnel);
			this->TabcontrolGestionPersonnel->Controls->Add(this->TabpageModificationPersonnel);
			this->TabcontrolGestionPersonnel->Controls->Add(this->TabpageSupprimerPersonnel);
			this->TabcontrolGestionPersonnel->Controls->Add(this->TabpageAfficherPersonnel);
			this->TabcontrolGestionPersonnel->Location = System::Drawing::Point(9, 75);
			this->TabcontrolGestionPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->TabcontrolGestionPersonnel->Name = L"TabcontrolGestionPersonnel";
			this->TabcontrolGestionPersonnel->SelectedIndex = 0;
			this->TabcontrolGestionPersonnel->Size = System::Drawing::Size(1207, 576);
			this->TabcontrolGestionPersonnel->TabIndex = 3;
			// 
			// TabpageCreationPersonnel
			// 
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelRadiobuttonEmploye);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelRadiobuttonRH);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelRadiobuttonAdmin);
			this->TabpageCreationPersonnel->Controls->Add(this->label75);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelComboboxSuperieur);
			this->TabpageCreationPersonnel->Controls->Add(this->LabelSelectionSuperieur);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxMotdepasse);
			this->TabpageCreationPersonnel->Controls->Add(this->label34);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelButtonCreer);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxAdresseVille);
			this->TabpageCreationPersonnel->Controls->Add(this->label39);
			this->TabpageCreationPersonnel->Controls->Add(this->label42);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxAdresseCodePostal);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxAdresseNumero);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxAdresseNom);
			this->TabpageCreationPersonnel->Controls->Add(this->label43);
			this->TabpageCreationPersonnel->Controls->Add(this->label44);
			this->TabpageCreationPersonnel->Controls->Add(this->label45);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxAdresseType);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxNom);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxEmail);
			this->TabpageCreationPersonnel->Controls->Add(this->label46);
			this->TabpageCreationPersonnel->Controls->Add(this->label47);
			this->TabpageCreationPersonnel->Controls->Add(this->label48);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelTextboxPrenom);
			this->TabpageCreationPersonnel->Controls->Add(this->label49);
			this->TabpageCreationPersonnel->Controls->Add(this->CreationPersonnelDateTimePicker);
			this->TabpageCreationPersonnel->Controls->Add(this->label51);
			this->TabpageCreationPersonnel->Location = System::Drawing::Point(4, 22);
			this->TabpageCreationPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->TabpageCreationPersonnel->Name = L"TabpageCreationPersonnel";
			this->TabpageCreationPersonnel->Padding = System::Windows::Forms::Padding(2);
			this->TabpageCreationPersonnel->Size = System::Drawing::Size(1199, 550);
			this->TabpageCreationPersonnel->TabIndex = 0;
			this->TabpageCreationPersonnel->Text = L"Creation Personnel";
			this->TabpageCreationPersonnel->UseVisualStyleBackColor = true;
			// 
			// CreationPersonnelRadiobuttonEmploye
			// 
			this->CreationPersonnelRadiobuttonEmploye->AutoSize = true;
			this->CreationPersonnelRadiobuttonEmploye->Location = System::Drawing::Point(335, 188);
			this->CreationPersonnelRadiobuttonEmploye->Name = L"CreationPersonnelRadiobuttonEmploye";
			this->CreationPersonnelRadiobuttonEmploye->Size = System::Drawing::Size(65, 17);
			this->CreationPersonnelRadiobuttonEmploye->TabIndex = 183;
			this->CreationPersonnelRadiobuttonEmploye->TabStop = true;
			this->CreationPersonnelRadiobuttonEmploye->Text = L"Employé";
			this->CreationPersonnelRadiobuttonEmploye->UseVisualStyleBackColor = true;
			// 
			// CreationPersonnelRadiobuttonRH
			// 
			this->CreationPersonnelRadiobuttonRH->AutoSize = true;
			this->CreationPersonnelRadiobuttonRH->Location = System::Drawing::Point(283, 188);
			this->CreationPersonnelRadiobuttonRH->Name = L"CreationPersonnelRadiobuttonRH";
			this->CreationPersonnelRadiobuttonRH->Size = System::Drawing::Size(41, 17);
			this->CreationPersonnelRadiobuttonRH->TabIndex = 182;
			this->CreationPersonnelRadiobuttonRH->TabStop = true;
			this->CreationPersonnelRadiobuttonRH->Text = L"RH";
			this->CreationPersonnelRadiobuttonRH->UseVisualStyleBackColor = true;
			// 
			// CreationPersonnelRadiobuttonAdmin
			// 
			this->CreationPersonnelRadiobuttonAdmin->AutoSize = true;
			this->CreationPersonnelRadiobuttonAdmin->Location = System::Drawing::Point(211, 188);
			this->CreationPersonnelRadiobuttonAdmin->Name = L"CreationPersonnelRadiobuttonAdmin";
			this->CreationPersonnelRadiobuttonAdmin->Size = System::Drawing::Size(54, 17);
			this->CreationPersonnelRadiobuttonAdmin->TabIndex = 181;
			this->CreationPersonnelRadiobuttonAdmin->TabStop = true;
			this->CreationPersonnelRadiobuttonAdmin->Text = L"Admin";
			this->CreationPersonnelRadiobuttonAdmin->UseVisualStyleBackColor = true;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(102, 182);
			this->label75->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(68, 13);
			this->label75->TabIndex = 180;
			this->label75->Text = L"Departement";
			// 
			// CreationPersonnelComboboxSuperieur
			// 
			this->CreationPersonnelComboboxSuperieur->FormattingEnabled = true;
			this->CreationPersonnelComboboxSuperieur->Location = System::Drawing::Point(202, 124);
			this->CreationPersonnelComboboxSuperieur->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelComboboxSuperieur->Name = L"CreationPersonnelComboboxSuperieur";
			this->CreationPersonnelComboboxSuperieur->Size = System::Drawing::Size(200, 21);
			this->CreationPersonnelComboboxSuperieur->TabIndex = 178;
			// 
			// LabelSelectionSuperieur
			// 
			this->LabelSelectionSuperieur->AutoSize = true;
			this->LabelSelectionSuperieur->Location = System::Drawing::Point(76, 127);
			this->LabelSelectionSuperieur->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSelectionSuperieur->Name = L"LabelSelectionSuperieur";
			this->LabelSelectionSuperieur->Size = System::Drawing::Size(112, 13);
			this->LabelSelectionSuperieur->TabIndex = 179;
			this->LabelSelectionSuperieur->Text = L"Selection du supérieur";
			// 
			// CreationPersonnelTextboxMotdepasse
			// 
			this->CreationPersonnelTextboxMotdepasse->Location = System::Drawing::Point(202, 102);
			this->CreationPersonnelTextboxMotdepasse->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxMotdepasse->Name = L"CreationPersonnelTextboxMotdepasse";
			this->CreationPersonnelTextboxMotdepasse->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxMotdepasse->TabIndex = 177;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(115, 102);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(71, 13);
			this->label34->TabIndex = 176;
			this->label34->Text = L"Mot de passe";
			// 
			// CreationPersonnelButtonCreer
			// 
			this->CreationPersonnelButtonCreer->Location = System::Drawing::Point(226, 408);
			this->CreationPersonnelButtonCreer->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelButtonCreer->Name = L"CreationPersonnelButtonCreer";
			this->CreationPersonnelButtonCreer->Size = System::Drawing::Size(125, 71);
			this->CreationPersonnelButtonCreer->TabIndex = 163;
			this->CreationPersonnelButtonCreer->Text = L"Créer le client";
			this->CreationPersonnelButtonCreer->UseVisualStyleBackColor = true;
			this->CreationPersonnelButtonCreer->Click += gcnew System::EventHandler(this, &MyForm::CreationPersonnelButtonCreer_Click);
			// 
			// CreationPersonnelTextboxAdresseVille
			// 
			this->CreationPersonnelTextboxAdresseVille->Location = System::Drawing::Point(197, 338);
			this->CreationPersonnelTextboxAdresseVille->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxAdresseVille->Name = L"CreationPersonnelTextboxAdresseVille";
			this->CreationPersonnelTextboxAdresseVille->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxAdresseVille->TabIndex = 154;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(110, 365);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(64, 13);
			this->label39->TabIndex = 175;
			this->label39->Text = L"Code Postal";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(125, 340);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(26, 13);
			this->label42->TabIndex = 174;
			this->label42->Text = L"Ville";
			// 
			// CreationPersonnelTextboxAdresseCodePostal
			// 
			this->CreationPersonnelTextboxAdresseCodePostal->Location = System::Drawing::Point(197, 362);
			this->CreationPersonnelTextboxAdresseCodePostal->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxAdresseCodePostal->Name = L"CreationPersonnelTextboxAdresseCodePostal";
			this->CreationPersonnelTextboxAdresseCodePostal->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxAdresseCodePostal->TabIndex = 155;
			// 
			// CreationPersonnelTextboxAdresseNumero
			// 
			this->CreationPersonnelTextboxAdresseNumero->Location = System::Drawing::Point(197, 267);
			this->CreationPersonnelTextboxAdresseNumero->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxAdresseNumero->Name = L"CreationPersonnelTextboxAdresseNumero";
			this->CreationPersonnelTextboxAdresseNumero->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxAdresseNumero->TabIndex = 151;
			// 
			// CreationPersonnelTextboxAdresseNom
			// 
			this->CreationPersonnelTextboxAdresseNom->Location = System::Drawing::Point(197, 315);
			this->CreationPersonnelTextboxAdresseNom->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxAdresseNom->Name = L"CreationPersonnelTextboxAdresseNom";
			this->CreationPersonnelTextboxAdresseNom->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxAdresseNom->TabIndex = 153;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(110, 294);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(54, 13);
			this->label43->TabIndex = 173;
			this->label43->Text = L"Type voie";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(110, 315);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(52, 13);
			this->label44->TabIndex = 172;
			this->label44->Text = L"Nom voie";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(117, 269);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(44, 13);
			this->label45->TabIndex = 171;
			this->label45->Text = L"Numéro";
			// 
			// CreationPersonnelTextboxAdresseType
			// 
			this->CreationPersonnelTextboxAdresseType->Location = System::Drawing::Point(197, 291);
			this->CreationPersonnelTextboxAdresseType->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxAdresseType->Name = L"CreationPersonnelTextboxAdresseType";
			this->CreationPersonnelTextboxAdresseType->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxAdresseType->TabIndex = 152;
			// 
			// CreationPersonnelTextboxNom
			// 
			this->CreationPersonnelTextboxNom->Location = System::Drawing::Point(202, 32);
			this->CreationPersonnelTextboxNom->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxNom->Name = L"CreationPersonnelTextboxNom";
			this->CreationPersonnelTextboxNom->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxNom->TabIndex = 147;
			// 
			// CreationPersonnelTextboxEmail
			// 
			this->CreationPersonnelTextboxEmail->Location = System::Drawing::Point(202, 80);
			this->CreationPersonnelTextboxEmail->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxEmail->Name = L"CreationPersonnelTextboxEmail";
			this->CreationPersonnelTextboxEmail->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxEmail->TabIndex = 149;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(122, 58);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(43, 13);
			this->label46->TabIndex = 170;
			this->label46->Text = L"Prénom";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(115, 80);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(32, 13);
			this->label47->TabIndex = 169;
			this->label47->Text = L"Email";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(122, 34);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(29, 13);
			this->label48->TabIndex = 168;
			this->label48->Text = L"Nom";
			// 
			// CreationPersonnelTextboxPrenom
			// 
			this->CreationPersonnelTextboxPrenom->Location = System::Drawing::Point(202, 56);
			this->CreationPersonnelTextboxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelTextboxPrenom->Name = L"CreationPersonnelTextboxPrenom";
			this->CreationPersonnelTextboxPrenom->Size = System::Drawing::Size(200, 20);
			this->CreationPersonnelTextboxPrenom->TabIndex = 148;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(239, 237);
			this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(45, 13);
			this->label49->TabIndex = 167;
			this->label49->Text = L"Adresse";
			// 
			// CreationPersonnelDateTimePicker
			// 
			this->CreationPersonnelDateTimePicker->CustomFormat = L"yyyy-MM-dd";
			this->CreationPersonnelDateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->CreationPersonnelDateTimePicker->Location = System::Drawing::Point(202, 153);
			this->CreationPersonnelDateTimePicker->Margin = System::Windows::Forms::Padding(2);
			this->CreationPersonnelDateTimePicker->Name = L"CreationPersonnelDateTimePicker";
			this->CreationPersonnelDateTimePicker->Size = System::Drawing::Size(174, 20);
			this->CreationPersonnelDateTimePicker->TabIndex = 150;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(95, 153);
			this->label51->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(91, 13);
			this->label51->TabIndex = 165;
			this->label51->Text = L"Date d\'embauche";
			// 
			// TabpageModificationPersonnel
			// 
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelComboBoxSuperieur);
			this->TabpageModificationPersonnel->Controls->Add(this->label35);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelTexteboxMotDePasse);
			this->TabpageModificationPersonnel->Controls->Add(this->label36);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelButtonModifier);
			this->TabpageModificationPersonnel->Controls->Add(this->textBox3);
			this->TabpageModificationPersonnel->Controls->Add(this->label37);
			this->TabpageModificationPersonnel->Controls->Add(this->label38);
			this->TabpageModificationPersonnel->Controls->Add(this->textBox4);
			this->TabpageModificationPersonnel->Controls->Add(this->textBox5);
			this->TabpageModificationPersonnel->Controls->Add(this->textBox14);
			this->TabpageModificationPersonnel->Controls->Add(this->label50);
			this->TabpageModificationPersonnel->Controls->Add(this->label53);
			this->TabpageModificationPersonnel->Controls->Add(this->label54);
			this->TabpageModificationPersonnel->Controls->Add(this->textBox15);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelTexteboxNom);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelTexteboxEmail);
			this->TabpageModificationPersonnel->Controls->Add(this->label55);
			this->TabpageModificationPersonnel->Controls->Add(this->label56);
			this->TabpageModificationPersonnel->Controls->Add(this->label57);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelTexteboxPrenom);
			this->TabpageModificationPersonnel->Controls->Add(this->label58);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelDatetimepicker);
			this->TabpageModificationPersonnel->Controls->Add(this->label59);
			this->TabpageModificationPersonnel->Controls->Add(this->ModificationPersonnelComboBoxPersonnel);
			this->TabpageModificationPersonnel->Controls->Add(this->label52);
			this->TabpageModificationPersonnel->Location = System::Drawing::Point(4, 22);
			this->TabpageModificationPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->TabpageModificationPersonnel->Name = L"TabpageModificationPersonnel";
			this->TabpageModificationPersonnel->Padding = System::Windows::Forms::Padding(2);
			this->TabpageModificationPersonnel->Size = System::Drawing::Size(1199, 550);
			this->TabpageModificationPersonnel->TabIndex = 1;
			this->TabpageModificationPersonnel->Text = L"Modifier Personnel";
			this->TabpageModificationPersonnel->UseVisualStyleBackColor = true;
			// 
			// ModificationPersonnelComboBoxSuperieur
			// 
			this->ModificationPersonnelComboBoxSuperieur->FormattingEnabled = true;
			this->ModificationPersonnelComboBoxSuperieur->Location = System::Drawing::Point(201, 155);
			this->ModificationPersonnelComboBoxSuperieur->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelComboBoxSuperieur->Name = L"ModificationPersonnelComboBoxSuperieur";
			this->ModificationPersonnelComboBoxSuperieur->Size = System::Drawing::Size(200, 21);
			this->ModificationPersonnelComboBoxSuperieur->TabIndex = 238;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(92, 162);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(112, 13);
			this->label35->TabIndex = 239;
			this->label35->Text = L"Selection du supérieur";
			// 
			// ModificationPersonnelTexteboxMotDePasse
			// 
			this->ModificationPersonnelTexteboxMotDePasse->Location = System::Drawing::Point(201, 132);
			this->ModificationPersonnelTexteboxMotDePasse->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelTexteboxMotDePasse->Name = L"ModificationPersonnelTexteboxMotDePasse";
			this->ModificationPersonnelTexteboxMotDePasse->Size = System::Drawing::Size(200, 20);
			this->ModificationPersonnelTexteboxMotDePasse->TabIndex = 237;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(113, 132);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(71, 13);
			this->label36->TabIndex = 236;
			this->label36->Text = L"Mot de passe";
			// 
			// ModificationPersonnelButtonModifier
			// 
			this->ModificationPersonnelButtonModifier->Location = System::Drawing::Point(230, 410);
			this->ModificationPersonnelButtonModifier->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelButtonModifier->Name = L"ModificationPersonnelButtonModifier";
			this->ModificationPersonnelButtonModifier->Size = System::Drawing::Size(125, 71);
			this->ModificationPersonnelButtonModifier->TabIndex = 225;
			this->ModificationPersonnelButtonModifier->Text = L"Modifier le client";
			this->ModificationPersonnelButtonModifier->UseVisualStyleBackColor = true;
			this->ModificationPersonnelButtonModifier->Click += gcnew System::EventHandler(this, &MyForm::ModificationPersonnelButtonModifier_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(201, 340);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 20);
			this->textBox3->TabIndex = 223;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(113, 366);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(64, 13);
			this->label37->TabIndex = 235;
			this->label37->Text = L"Code Postal";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(129, 342);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(26, 13);
			this->label38->TabIndex = 234;
			this->label38->Text = L"Ville";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(201, 364);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 20);
			this->textBox4->TabIndex = 224;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(201, 269);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 20);
			this->textBox5->TabIndex = 220;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(201, 317);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(200, 20);
			this->textBox14->TabIndex = 222;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(113, 296);
			this->label50->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(54, 13);
			this->label50->TabIndex = 233;
			this->label50->Text = L"Type voie";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(113, 317);
			this->label53->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(52, 13);
			this->label53->TabIndex = 232;
			this->label53->Text = L"Nom voie";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(120, 271);
			this->label54->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(44, 13);
			this->label54->TabIndex = 231;
			this->label54->Text = L"Numéro";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(201, 293);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(200, 20);
			this->textBox15->TabIndex = 221;
			// 
			// ModificationPersonnelTexteboxNom
			// 
			this->ModificationPersonnelTexteboxNom->Location = System::Drawing::Point(201, 63);
			this->ModificationPersonnelTexteboxNom->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelTexteboxNom->Name = L"ModificationPersonnelTexteboxNom";
			this->ModificationPersonnelTexteboxNom->Size = System::Drawing::Size(200, 20);
			this->ModificationPersonnelTexteboxNom->TabIndex = 216;
			// 
			// ModificationPersonnelTexteboxEmail
			// 
			this->ModificationPersonnelTexteboxEmail->Location = System::Drawing::Point(201, 110);
			this->ModificationPersonnelTexteboxEmail->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelTexteboxEmail->Name = L"ModificationPersonnelTexteboxEmail";
			this->ModificationPersonnelTexteboxEmail->Size = System::Drawing::Size(200, 20);
			this->ModificationPersonnelTexteboxEmail->TabIndex = 218;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(120, 89);
			this->label55->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(43, 13);
			this->label55->TabIndex = 230;
			this->label55->Text = L"Prénom";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(113, 110);
			this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(32, 13);
			this->label56->TabIndex = 229;
			this->label56->Text = L"Email";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(120, 65);
			this->label57->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(29, 13);
			this->label57->TabIndex = 228;
			this->label57->Text = L"Nom";
			// 
			// ModificationPersonnelTexteboxPrenom
			// 
			this->ModificationPersonnelTexteboxPrenom->Location = System::Drawing::Point(201, 87);
			this->ModificationPersonnelTexteboxPrenom->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelTexteboxPrenom->Name = L"ModificationPersonnelTexteboxPrenom";
			this->ModificationPersonnelTexteboxPrenom->Size = System::Drawing::Size(200, 20);
			this->ModificationPersonnelTexteboxPrenom->TabIndex = 217;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(243, 239);
			this->label58->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(45, 13);
			this->label58->TabIndex = 227;
			this->label58->Text = L"Adresse";
			// 
			// ModificationPersonnelDatetimepicker
			// 
			this->ModificationPersonnelDatetimepicker->CustomFormat = L"yyyy\'-\'MM\'-\'dd";
			this->ModificationPersonnelDatetimepicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->ModificationPersonnelDatetimepicker->Location = System::Drawing::Point(201, 184);
			this->ModificationPersonnelDatetimepicker->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelDatetimepicker->Name = L"ModificationPersonnelDatetimepicker";
			this->ModificationPersonnelDatetimepicker->Size = System::Drawing::Size(174, 20);
			this->ModificationPersonnelDatetimepicker->TabIndex = 219;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(91, 184);
			this->label59->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(96, 13);
			this->label59->TabIndex = 226;
			this->label59->Text = L"Date de naissance";
			// 
			// ModificationPersonnelComboBoxPersonnel
			// 
			this->ModificationPersonnelComboBoxPersonnel->FormattingEnabled = true;
			this->ModificationPersonnelComboBoxPersonnel->Location = System::Drawing::Point(200, 20);
			this->ModificationPersonnelComboBoxPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->ModificationPersonnelComboBoxPersonnel->Name = L"ModificationPersonnelComboBoxPersonnel";
			this->ModificationPersonnelComboBoxPersonnel->Size = System::Drawing::Size(241, 21);
			this->ModificationPersonnelComboBoxPersonnel->TabIndex = 215;
			this->ModificationPersonnelComboBoxPersonnel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ModificationPersonnelComboBoxPersonnel_SelectedIndexChanged);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(20, 22);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(180, 13);
			this->label52->TabIndex = 214;
			this->label52->Text = L"Selectionner le personnel à modifier :";
			this->label52->Click += gcnew System::EventHandler(this, &MyForm::label52_Click);
			// 
			// TabpageSupprimerPersonnel
			// 
			this->TabpageSupprimerPersonnel->Controls->Add(this->SupprimerPersonnelButton);
			this->TabpageSupprimerPersonnel->Controls->Add(this->SupprimerPersonnelCheckbox);
			this->TabpageSupprimerPersonnel->Controls->Add(this->SupprimerPersonnelComboBox);
			this->TabpageSupprimerPersonnel->Controls->Add(this->label69);
			this->TabpageSupprimerPersonnel->Location = System::Drawing::Point(4, 22);
			this->TabpageSupprimerPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->TabpageSupprimerPersonnel->Name = L"TabpageSupprimerPersonnel";
			this->TabpageSupprimerPersonnel->Size = System::Drawing::Size(1199, 550);
			this->TabpageSupprimerPersonnel->TabIndex = 2;
			this->TabpageSupprimerPersonnel->Text = L"Supprimer Personnel";
			this->TabpageSupprimerPersonnel->UseVisualStyleBackColor = true;
			// 
			// SupprimerPersonnelButton
			// 
			this->SupprimerPersonnelButton->Location = System::Drawing::Point(180, 181);
			this->SupprimerPersonnelButton->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerPersonnelButton->Name = L"SupprimerPersonnelButton";
			this->SupprimerPersonnelButton->Size = System::Drawing::Size(236, 68);
			this->SupprimerPersonnelButton->TabIndex = 5;
			this->SupprimerPersonnelButton->Text = L"Supprimer";
			this->SupprimerPersonnelButton->UseVisualStyleBackColor = true;
			this->SupprimerPersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::SupprimerPersonnelButton_Click);
			// 
			// SupprimerPersonnelCheckbox
			// 
			this->SupprimerPersonnelCheckbox->AutoSize = true;
			this->SupprimerPersonnelCheckbox->Location = System::Drawing::Point(199, 114);
			this->SupprimerPersonnelCheckbox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerPersonnelCheckbox->Name = L"SupprimerPersonnelCheckbox";
			this->SupprimerPersonnelCheckbox->Size = System::Drawing::Size(140, 17);
			this->SupprimerPersonnelCheckbox->TabIndex = 4;
			this->SupprimerPersonnelCheckbox->Text = L"Confirmer la suppression";
			this->SupprimerPersonnelCheckbox->UseVisualStyleBackColor = true;
			this->SupprimerPersonnelCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SupprimerPersonnelCheckbox_CheckedChanged);
			// 
			// SupprimerPersonnelComboBox
			// 
			this->SupprimerPersonnelComboBox->FormattingEnabled = true;
			this->SupprimerPersonnelComboBox->Location = System::Drawing::Point(222, 38);
			this->SupprimerPersonnelComboBox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerPersonnelComboBox->Name = L"SupprimerPersonnelComboBox";
			this->SupprimerPersonnelComboBox->Size = System::Drawing::Size(266, 21);
			this->SupprimerPersonnelComboBox->TabIndex = 3;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(38, 41);
			this->label69->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(189, 13);
			this->label69->TabIndex = 2;
			this->label69->Text = L"Selectionner le personnel à supprimer :";
			// 
			// TabpageAfficherPersonnel
			// 
			this->TabpageAfficherPersonnel->Controls->Add(this->AfficherPersonnelButton);
			this->TabpageAfficherPersonnel->Controls->Add(this->AfficherPersonnelDataGridView);
			this->TabpageAfficherPersonnel->Controls->Add(this->AfficherPersonnelCombobox);
			this->TabpageAfficherPersonnel->Controls->Add(this->label70);
			this->TabpageAfficherPersonnel->Location = System::Drawing::Point(4, 22);
			this->TabpageAfficherPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->TabpageAfficherPersonnel->Name = L"TabpageAfficherPersonnel";
			this->TabpageAfficherPersonnel->Size = System::Drawing::Size(1199, 550);
			this->TabpageAfficherPersonnel->TabIndex = 4;
			this->TabpageAfficherPersonnel->Text = L"Afficher Personnel";
			this->TabpageAfficherPersonnel->UseVisualStyleBackColor = true;
			// 
			// AfficherPersonnelButton
			// 
			this->AfficherPersonnelButton->Location = System::Drawing::Point(396, 17);
			this->AfficherPersonnelButton->Margin = System::Windows::Forms::Padding(2);
			this->AfficherPersonnelButton->Name = L"AfficherPersonnelButton";
			this->AfficherPersonnelButton->Size = System::Drawing::Size(207, 41);
			this->AfficherPersonnelButton->TabIndex = 5;
			this->AfficherPersonnelButton->Text = L"Afficher";
			this->AfficherPersonnelButton->UseVisualStyleBackColor = true;
			this->AfficherPersonnelButton->Click += gcnew System::EventHandler(this, &MyForm::AfficherPersonnelButton_Click);
			// 
			// AfficherPersonnelDataGridView
			// 
			this->AfficherPersonnelDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AfficherPersonnelDataGridView->Location = System::Drawing::Point(11, 72);
			this->AfficherPersonnelDataGridView->Margin = System::Windows::Forms::Padding(2);
			this->AfficherPersonnelDataGridView->Name = L"AfficherPersonnelDataGridView";
			this->AfficherPersonnelDataGridView->RowHeadersWidth = 51;
			this->AfficherPersonnelDataGridView->RowTemplate->Height = 24;
			this->AfficherPersonnelDataGridView->Size = System::Drawing::Size(1169, 462);
			this->AfficherPersonnelDataGridView->TabIndex = 4;
			// 
			// AfficherPersonnelCombobox
			// 
			this->AfficherPersonnelCombobox->FormattingEnabled = true;
			this->AfficherPersonnelCombobox->Location = System::Drawing::Point(44, 34);
			this->AfficherPersonnelCombobox->Margin = System::Windows::Forms::Padding(2);
			this->AfficherPersonnelCombobox->Name = L"AfficherPersonnelCombobox";
			this->AfficherPersonnelCombobox->Size = System::Drawing::Size(266, 21);
			this->AfficherPersonnelCombobox->TabIndex = 3;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(42, 19);
			this->label70->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(179, 13);
			this->label70->TabIndex = 2;
			this->label70->Text = L"Selectionner le personnel à afficher :";
			// 
			// ButtonGestionArticle
			// 
			this->ButtonGestionArticle->Location = System::Drawing::Point(231, 10);
			this->ButtonGestionArticle->Margin = System::Windows::Forms::Padding(2);
			this->ButtonGestionArticle->Name = L"ButtonGestionArticle";
			this->ButtonGestionArticle->Size = System::Drawing::Size(106, 46);
			this->ButtonGestionArticle->TabIndex = 4;
			this->ButtonGestionArticle->Text = L"Gestion Article";
			this->ButtonGestionArticle->UseVisualStyleBackColor = true;
			this->ButtonGestionArticle->Click += gcnew System::EventHandler(this, &MyForm::ButtonGestionArticle_Click);
			// 
			// ButtonGestionCommande
			// 
			this->ButtonGestionCommande->Location = System::Drawing::Point(342, 10);
			this->ButtonGestionCommande->Margin = System::Windows::Forms::Padding(2);
			this->ButtonGestionCommande->Name = L"ButtonGestionCommande";
			this->ButtonGestionCommande->Size = System::Drawing::Size(106, 46);
			this->ButtonGestionCommande->TabIndex = 5;
			this->ButtonGestionCommande->Text = L"Gestion Commande";
			this->ButtonGestionCommande->UseVisualStyleBackColor = true;
			this->ButtonGestionCommande->Click += gcnew System::EventHandler(this, &MyForm::ButtonGestionCommande_Click);
			// 
			// ButtonGestionStats
			// 
			this->ButtonGestionStats->Location = System::Drawing::Point(453, 10);
			this->ButtonGestionStats->Margin = System::Windows::Forms::Padding(2);
			this->ButtonGestionStats->Name = L"ButtonGestionStats";
			this->ButtonGestionStats->Size = System::Drawing::Size(106, 46);
			this->ButtonGestionStats->TabIndex = 6;
			this->ButtonGestionStats->Text = L"Gestion Stats";
			this->ButtonGestionStats->UseVisualStyleBackColor = true;
			this->ButtonGestionStats->Click += gcnew System::EventHandler(this, &MyForm::ButtonGestionStats_Click);
			// 
			// TabcontrolGestionArticle
			// 
			this->TabcontrolGestionArticle->Controls->Add(this->TabpageCreationArticle);
			this->TabcontrolGestionArticle->Controls->Add(this->TabpageModifierArticle);
			this->TabcontrolGestionArticle->Controls->Add(this->TabpageSupprimerArticle);
			this->TabcontrolGestionArticle->Controls->Add(this->TabpageAfficherArticle);
			this->TabcontrolGestionArticle->Location = System::Drawing::Point(9, 75);
			this->TabcontrolGestionArticle->Margin = System::Windows::Forms::Padding(2);
			this->TabcontrolGestionArticle->Name = L"TabcontrolGestionArticle";
			this->TabcontrolGestionArticle->SelectedIndex = 0;
			this->TabcontrolGestionArticle->Size = System::Drawing::Size(1207, 576);
			this->TabcontrolGestionArticle->TabIndex = 7;
			// 
			// TabpageCreationArticle
			// 
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleRadiobuttonReducGrandVolumeOui);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleRadiobuttonReducGrandVolumeNon);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleButtonCreer);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxCouleur);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxUniteMesure);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxSeuilReaprovisionement);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxQuantiteEnStock);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxPrixHT);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxDesignation);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleTexteboxReference);
			this->TabpageCreationArticle->Controls->Add(this->LabelNature);
			this->TabpageCreationArticle->Controls->Add(this->CreationArticleCheckedlistboxNature);
			this->TabpageCreationArticle->Controls->Add(this->LabelCouleur);
			this->TabpageCreationArticle->Controls->Add(this->LabelUniteMesure);
			this->TabpageCreationArticle->Controls->Add(this->LabelPrixHT);
			this->TabpageCreationArticle->Controls->Add(this->LabelReductionGrandVolumes);
			this->TabpageCreationArticle->Controls->Add(this->LabelSeuilReaprovisionement);
			this->TabpageCreationArticle->Controls->Add(this->LabelQuantiteEnStock);
			this->TabpageCreationArticle->Controls->Add(this->LabelDesignation);
			this->TabpageCreationArticle->Controls->Add(this->LabelReference);
			this->TabpageCreationArticle->Location = System::Drawing::Point(4, 22);
			this->TabpageCreationArticle->Margin = System::Windows::Forms::Padding(2);
			this->TabpageCreationArticle->Name = L"TabpageCreationArticle";
			this->TabpageCreationArticle->Padding = System::Windows::Forms::Padding(2);
			this->TabpageCreationArticle->Size = System::Drawing::Size(1199, 550);
			this->TabpageCreationArticle->TabIndex = 0;
			this->TabpageCreationArticle->Text = L"Creation Article";
			this->TabpageCreationArticle->UseVisualStyleBackColor = true;
			// 
			// CreationArticleRadiobuttonReducGrandVolumeOui
			// 
			this->CreationArticleRadiobuttonReducGrandVolumeOui->AutoSize = true;
			this->CreationArticleRadiobuttonReducGrandVolumeOui->Location = System::Drawing::Point(242, 169);
			this->CreationArticleRadiobuttonReducGrandVolumeOui->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleRadiobuttonReducGrandVolumeOui->Name = L"CreationArticleRadiobuttonReducGrandVolumeOui";
			this->CreationArticleRadiobuttonReducGrandVolumeOui->Size = System::Drawing::Size(41, 17);
			this->CreationArticleRadiobuttonReducGrandVolumeOui->TabIndex = 47;
			this->CreationArticleRadiobuttonReducGrandVolumeOui->TabStop = true;
			this->CreationArticleRadiobuttonReducGrandVolumeOui->Text = L"Oui";
			this->CreationArticleRadiobuttonReducGrandVolumeOui->UseVisualStyleBackColor = true;
			// 
			// CreationArticleRadiobuttonReducGrandVolumeNon
			// 
			this->CreationArticleRadiobuttonReducGrandVolumeNon->AutoSize = true;
			this->CreationArticleRadiobuttonReducGrandVolumeNon->Location = System::Drawing::Point(197, 169);
			this->CreationArticleRadiobuttonReducGrandVolumeNon->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleRadiobuttonReducGrandVolumeNon->Name = L"CreationArticleRadiobuttonReducGrandVolumeNon";
			this->CreationArticleRadiobuttonReducGrandVolumeNon->Size = System::Drawing::Size(45, 17);
			this->CreationArticleRadiobuttonReducGrandVolumeNon->TabIndex = 46;
			this->CreationArticleRadiobuttonReducGrandVolumeNon->TabStop = true;
			this->CreationArticleRadiobuttonReducGrandVolumeNon->Text = L"Non";
			this->CreationArticleRadiobuttonReducGrandVolumeNon->UseVisualStyleBackColor = true;
			// 
			// CreationArticleButtonCreer
			// 
			this->CreationArticleButtonCreer->Location = System::Drawing::Point(464, 264);
			this->CreationArticleButtonCreer->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleButtonCreer->Name = L"CreationArticleButtonCreer";
			this->CreationArticleButtonCreer->Size = System::Drawing::Size(188, 116);
			this->CreationArticleButtonCreer->TabIndex = 51;
			this->CreationArticleButtonCreer->Text = L"Créer Article";
			this->CreationArticleButtonCreer->UseVisualStyleBackColor = true;
			this->CreationArticleButtonCreer->Click += gcnew System::EventHandler(this, &MyForm::CreationArticleButtonCreer_Click);
			// 
			// CreationArticleTexteboxCouleur
			// 
			this->CreationArticleTexteboxCouleur->Location = System::Drawing::Point(190, 223);
			this->CreationArticleTexteboxCouleur->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxCouleur->Name = L"CreationArticleTexteboxCouleur";
			this->CreationArticleTexteboxCouleur->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxCouleur->TabIndex = 49;
			// 
			// CreationArticleTexteboxUniteMesure
			// 
			this->CreationArticleTexteboxUniteMesure->Location = System::Drawing::Point(190, 197);
			this->CreationArticleTexteboxUniteMesure->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxUniteMesure->Name = L"CreationArticleTexteboxUniteMesure";
			this->CreationArticleTexteboxUniteMesure->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxUniteMesure->TabIndex = 48;
			// 
			// CreationArticleTexteboxSeuilReaprovisionement
			// 
			this->CreationArticleTexteboxSeuilReaprovisionement->Location = System::Drawing::Point(190, 136);
			this->CreationArticleTexteboxSeuilReaprovisionement->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxSeuilReaprovisionement->Name = L"CreationArticleTexteboxSeuilReaprovisionement";
			this->CreationArticleTexteboxSeuilReaprovisionement->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxSeuilReaprovisionement->TabIndex = 45;
			// 
			// CreationArticleTexteboxQuantiteEnStock
			// 
			this->CreationArticleTexteboxQuantiteEnStock->Location = System::Drawing::Point(190, 110);
			this->CreationArticleTexteboxQuantiteEnStock->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxQuantiteEnStock->Name = L"CreationArticleTexteboxQuantiteEnStock";
			this->CreationArticleTexteboxQuantiteEnStock->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxQuantiteEnStock->TabIndex = 44;
			// 
			// CreationArticleTexteboxPrixHT
			// 
			this->CreationArticleTexteboxPrixHT->Location = System::Drawing::Point(190, 86);
			this->CreationArticleTexteboxPrixHT->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxPrixHT->Name = L"CreationArticleTexteboxPrixHT";
			this->CreationArticleTexteboxPrixHT->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxPrixHT->TabIndex = 43;
			// 
			// CreationArticleTexteboxDesignation
			// 
			this->CreationArticleTexteboxDesignation->Location = System::Drawing::Point(190, 63);
			this->CreationArticleTexteboxDesignation->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxDesignation->Name = L"CreationArticleTexteboxDesignation";
			this->CreationArticleTexteboxDesignation->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxDesignation->TabIndex = 42;
			// 
			// CreationArticleTexteboxReference
			// 
			this->CreationArticleTexteboxReference->Location = System::Drawing::Point(190, 34);
			this->CreationArticleTexteboxReference->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleTexteboxReference->Name = L"CreationArticleTexteboxReference";
			this->CreationArticleTexteboxReference->Size = System::Drawing::Size(194, 20);
			this->CreationArticleTexteboxReference->TabIndex = 41;
			// 
			// LabelNature
			// 
			this->LabelNature->AutoSize = true;
			this->LabelNature->Location = System::Drawing::Point(137, 264);
			this->LabelNature->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNature->Name = L"LabelNature";
			this->LabelNature->Size = System::Drawing::Size(45, 13);
			this->LabelNature->TabIndex = 61;
			this->LabelNature->Text = L"Nature :";
			// 
			// CreationArticleCheckedlistboxNature
			// 
			this->CreationArticleCheckedlistboxNature->FormattingEnabled = true;
			this->CreationArticleCheckedlistboxNature->Location = System::Drawing::Point(190, 264);
			this->CreationArticleCheckedlistboxNature->Margin = System::Windows::Forms::Padding(2);
			this->CreationArticleCheckedlistboxNature->Name = L"CreationArticleCheckedlistboxNature";
			this->CreationArticleCheckedlistboxNature->Size = System::Drawing::Size(178, 109);
			this->CreationArticleCheckedlistboxNature->TabIndex = 50;
			// 
			// LabelCouleur
			// 
			this->LabelCouleur->AutoSize = true;
			this->LabelCouleur->Location = System::Drawing::Point(133, 228);
			this->LabelCouleur->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCouleur->Name = L"LabelCouleur";
			this->LabelCouleur->Size = System::Drawing::Size(49, 13);
			this->LabelCouleur->TabIndex = 60;
			this->LabelCouleur->Text = L"Couleur :";
			// 
			// LabelUniteMesure
			// 
			this->LabelUniteMesure->AutoSize = true;
			this->LabelUniteMesure->Location = System::Drawing::Point(108, 202);
			this->LabelUniteMesure->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelUniteMesure->Name = L"LabelUniteMesure";
			this->LabelUniteMesure->Size = System::Drawing::Size(75, 13);
			this->LabelUniteMesure->TabIndex = 59;
			this->LabelUniteMesure->Text = L"Unité mesure :";
			// 
			// LabelPrixHT
			// 
			this->LabelPrixHT->AutoSize = true;
			this->LabelPrixHT->Location = System::Drawing::Point(134, 86);
			this->LabelPrixHT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelPrixHT->Name = L"LabelPrixHT";
			this->LabelPrixHT->Size = System::Drawing::Size(48, 13);
			this->LabelPrixHT->TabIndex = 58;
			this->LabelPrixHT->Text = L"Prix HT :";
			// 
			// LabelReductionGrandVolumes
			// 
			this->LabelReductionGrandVolumes->AutoSize = true;
			this->LabelReductionGrandVolumes->Location = System::Drawing::Point(21, 171);
			this->LabelReductionGrandVolumes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelReductionGrandVolumes->Name = L"LabelReductionGrandVolumes";
			this->LabelReductionGrandVolumes->Size = System::Drawing::Size(167, 13);
			this->LabelReductionGrandVolumes->TabIndex = 57;
			this->LabelReductionGrandVolumes->Text = L"Réduction sur les grand volumes :";
			// 
			// LabelSeuilReaprovisionement
			// 
			this->LabelSeuilReaprovisionement->AutoSize = true;
			this->LabelSeuilReaprovisionement->Location = System::Drawing::Point(44, 139);
			this->LabelSeuilReaprovisionement->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSeuilReaprovisionement->Name = L"LabelSeuilReaprovisionement";
			this->LabelSeuilReaprovisionement->Size = System::Drawing::Size(140, 13);
			this->LabelSeuilReaprovisionement->TabIndex = 56;
			this->LabelSeuilReaprovisionement->Text = L"Seuil de réaprovisionement :";
			// 
			// LabelQuantiteEnStock
			// 
			this->LabelQuantiteEnStock->AutoSize = true;
			this->LabelQuantiteEnStock->Location = System::Drawing::Point(91, 112);
			this->LabelQuantiteEnStock->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelQuantiteEnStock->Name = L"LabelQuantiteEnStock";
			this->LabelQuantiteEnStock->Size = System::Drawing::Size(97, 13);
			this->LabelQuantiteEnStock->TabIndex = 55;
			this->LabelQuantiteEnStock->Text = L"Quantité en stock :";
			// 
			// LabelDesignation
			// 
			this->LabelDesignation->AutoSize = true;
			this->LabelDesignation->Location = System::Drawing::Point(113, 63);
			this->LabelDesignation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelDesignation->Name = L"LabelDesignation";
			this->LabelDesignation->Size = System::Drawing::Size(69, 13);
			this->LabelDesignation->TabIndex = 54;
			this->LabelDesignation->Text = L"Désignation :";
			// 
			// LabelReference
			// 
			this->LabelReference->AutoSize = true;
			this->LabelReference->Location = System::Drawing::Point(120, 34);
			this->LabelReference->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelReference->Name = L"LabelReference";
			this->LabelReference->Size = System::Drawing::Size(63, 13);
			this->LabelReference->TabIndex = 53;
			this->LabelReference->Text = L"Référence :";
			// 
			// TabpageModifierArticle
			// 
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleRadioButtonReducGrandVolumeOui);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleRadioButtonReducGrandVolumeNon);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleButtonModification);
			this->TabpageModifierArticle->Controls->Add(this->ComboboxSelectionArticle);
			this->TabpageModifierArticle->Controls->Add(this->LabelSelectionArticle);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxCouleur);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxUniteMesure);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxSeuilReaprovisionement);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxQuantiteEnStock);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxPrixHT);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxDesignation);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleTexteboxReference);
			this->TabpageModifierArticle->Controls->Add(this->label60);
			this->TabpageModifierArticle->Controls->Add(this->ModificationArticleCheckedListBox);
			this->TabpageModifierArticle->Controls->Add(this->label61);
			this->TabpageModifierArticle->Controls->Add(this->label62);
			this->TabpageModifierArticle->Controls->Add(this->label63);
			this->TabpageModifierArticle->Controls->Add(this->label64);
			this->TabpageModifierArticle->Controls->Add(this->label65);
			this->TabpageModifierArticle->Controls->Add(this->label66);
			this->TabpageModifierArticle->Controls->Add(this->label67);
			this->TabpageModifierArticle->Controls->Add(this->label68);
			this->TabpageModifierArticle->Location = System::Drawing::Point(4, 22);
			this->TabpageModifierArticle->Margin = System::Windows::Forms::Padding(2);
			this->TabpageModifierArticle->Name = L"TabpageModifierArticle";
			this->TabpageModifierArticle->Padding = System::Windows::Forms::Padding(2);
			this->TabpageModifierArticle->Size = System::Drawing::Size(1199, 550);
			this->TabpageModifierArticle->TabIndex = 1;
			this->TabpageModifierArticle->Text = L"Modifier Article";
			this->TabpageModifierArticle->UseVisualStyleBackColor = true;
			// 
			// ModificationArticleRadioButtonReducGrandVolumeOui
			// 
			this->ModificationArticleRadioButtonReducGrandVolumeOui->AutoSize = true;
			this->ModificationArticleRadioButtonReducGrandVolumeOui->Location = System::Drawing::Point(251, 205);
			this->ModificationArticleRadioButtonReducGrandVolumeOui->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleRadioButtonReducGrandVolumeOui->Name = L"ModificationArticleRadioButtonReducGrandVolumeOui";
			this->ModificationArticleRadioButtonReducGrandVolumeOui->Size = System::Drawing::Size(41, 17);
			this->ModificationArticleRadioButtonReducGrandVolumeOui->TabIndex = 47;
			this->ModificationArticleRadioButtonReducGrandVolumeOui->TabStop = true;
			this->ModificationArticleRadioButtonReducGrandVolumeOui->Text = L"Oui";
			this->ModificationArticleRadioButtonReducGrandVolumeOui->UseVisualStyleBackColor = true;
			// 
			// ModificationArticleRadioButtonReducGrandVolumeNon
			// 
			this->ModificationArticleRadioButtonReducGrandVolumeNon->AutoSize = true;
			this->ModificationArticleRadioButtonReducGrandVolumeNon->Location = System::Drawing::Point(207, 205);
			this->ModificationArticleRadioButtonReducGrandVolumeNon->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleRadioButtonReducGrandVolumeNon->Name = L"ModificationArticleRadioButtonReducGrandVolumeNon";
			this->ModificationArticleRadioButtonReducGrandVolumeNon->Size = System::Drawing::Size(45, 17);
			this->ModificationArticleRadioButtonReducGrandVolumeNon->TabIndex = 46;
			this->ModificationArticleRadioButtonReducGrandVolumeNon->TabStop = true;
			this->ModificationArticleRadioButtonReducGrandVolumeNon->Text = L"Non";
			this->ModificationArticleRadioButtonReducGrandVolumeNon->UseVisualStyleBackColor = true;
			// 
			// ModificationArticleButtonModification
			// 
			this->ModificationArticleButtonModification->Location = System::Drawing::Point(506, 288);
			this->ModificationArticleButtonModification->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleButtonModification->Name = L"ModificationArticleButtonModification";
			this->ModificationArticleButtonModification->Size = System::Drawing::Size(188, 116);
			this->ModificationArticleButtonModification->TabIndex = 52;
			this->ModificationArticleButtonModification->Text = L"Mettre à jour l\'Article";
			this->ModificationArticleButtonModification->UseVisualStyleBackColor = true;
			this->ModificationArticleButtonModification->Click += gcnew System::EventHandler(this, &MyForm::ModificationArticleButtonModification_Click);
			// 
			// ComboboxSelectionArticle
			// 
			this->ComboboxSelectionArticle->FormattingEnabled = true;
			this->ComboboxSelectionArticle->Location = System::Drawing::Point(200, 36);
			this->ComboboxSelectionArticle->Margin = System::Windows::Forms::Padding(2);
			this->ComboboxSelectionArticle->Name = L"ComboboxSelectionArticle";
			this->ComboboxSelectionArticle->Size = System::Drawing::Size(194, 21);
			this->ComboboxSelectionArticle->TabIndex = 40;
			// 
			// LabelSelectionArticle
			// 
			this->LabelSelectionArticle->AutoSize = true;
			this->LabelSelectionArticle->Location = System::Drawing::Point(100, 36);
			this->LabelSelectionArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSelectionArticle->Name = L"LabelSelectionArticle";
			this->LabelSelectionArticle->Size = System::Drawing::Size(101, 13);
			this->LabelSelectionArticle->TabIndex = 62;
			this->LabelSelectionArticle->Text = L"Sélectionner l\'article";
			// 
			// ModificationArticleTexteboxCouleur
			// 
			this->ModificationArticleTexteboxCouleur->Location = System::Drawing::Point(200, 258);
			this->ModificationArticleTexteboxCouleur->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxCouleur->Name = L"ModificationArticleTexteboxCouleur";
			this->ModificationArticleTexteboxCouleur->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxCouleur->TabIndex = 49;
			// 
			// ModificationArticleTexteboxUniteMesure
			// 
			this->ModificationArticleTexteboxUniteMesure->Location = System::Drawing::Point(200, 232);
			this->ModificationArticleTexteboxUniteMesure->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxUniteMesure->Name = L"ModificationArticleTexteboxUniteMesure";
			this->ModificationArticleTexteboxUniteMesure->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxUniteMesure->TabIndex = 48;
			// 
			// ModificationArticleTexteboxSeuilReaprovisionement
			// 
			this->ModificationArticleTexteboxSeuilReaprovisionement->Location = System::Drawing::Point(200, 172);
			this->ModificationArticleTexteboxSeuilReaprovisionement->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxSeuilReaprovisionement->Name = L"ModificationArticleTexteboxSeuilReaprovisionement";
			this->ModificationArticleTexteboxSeuilReaprovisionement->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxSeuilReaprovisionement->TabIndex = 45;
			// 
			// ModificationArticleTexteboxQuantiteEnStock
			// 
			this->ModificationArticleTexteboxQuantiteEnStock->Location = System::Drawing::Point(200, 145);
			this->ModificationArticleTexteboxQuantiteEnStock->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxQuantiteEnStock->Name = L"ModificationArticleTexteboxQuantiteEnStock";
			this->ModificationArticleTexteboxQuantiteEnStock->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxQuantiteEnStock->TabIndex = 44;
			// 
			// ModificationArticleTexteboxPrixHT
			// 
			this->ModificationArticleTexteboxPrixHT->Location = System::Drawing::Point(200, 122);
			this->ModificationArticleTexteboxPrixHT->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxPrixHT->Name = L"ModificationArticleTexteboxPrixHT";
			this->ModificationArticleTexteboxPrixHT->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxPrixHT->TabIndex = 43;
			// 
			// ModificationArticleTexteboxDesignation
			// 
			this->ModificationArticleTexteboxDesignation->Location = System::Drawing::Point(200, 98);
			this->ModificationArticleTexteboxDesignation->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxDesignation->Name = L"ModificationArticleTexteboxDesignation";
			this->ModificationArticleTexteboxDesignation->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxDesignation->TabIndex = 42;
			// 
			// ModificationArticleTexteboxReference
			// 
			this->ModificationArticleTexteboxReference->Location = System::Drawing::Point(200, 70);
			this->ModificationArticleTexteboxReference->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleTexteboxReference->Name = L"ModificationArticleTexteboxReference";
			this->ModificationArticleTexteboxReference->Size = System::Drawing::Size(194, 20);
			this->ModificationArticleTexteboxReference->TabIndex = 41;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(147, 300);
			this->label60->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(45, 13);
			this->label60->TabIndex = 61;
			this->label60->Text = L"Nature :";
			// 
			// ModificationArticleCheckedListBox
			// 
			this->ModificationArticleCheckedListBox->FormattingEnabled = true;
			this->ModificationArticleCheckedListBox->Location = System::Drawing::Point(200, 300);
			this->ModificationArticleCheckedListBox->Margin = System::Windows::Forms::Padding(2);
			this->ModificationArticleCheckedListBox->Name = L"ModificationArticleCheckedListBox";
			this->ModificationArticleCheckedListBox->Size = System::Drawing::Size(178, 109);
			this->ModificationArticleCheckedListBox->TabIndex = 50;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(142, 263);
			this->label61->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(49, 13);
			this->label61->TabIndex = 60;
			this->label61->Text = L"Couleur :";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(118, 237);
			this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(75, 13);
			this->label62->TabIndex = 59;
			this->label62->Text = L"Unité mesure :";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(144, 122);
			this->label63->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(48, 13);
			this->label63->TabIndex = 58;
			this->label63->Text = L"Prix HT :";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(31, 206);
			this->label64->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(167, 13);
			this->label64->TabIndex = 57;
			this->label64->Text = L"Réduction sur les grand volumes :";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(54, 175);
			this->label65->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(140, 13);
			this->label65->TabIndex = 56;
			this->label65->Text = L"Seuil de réaprovisionement :";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(100, 148);
			this->label66->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(97, 13);
			this->label66->TabIndex = 55;
			this->label66->Text = L"Quantité en stock :";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(123, 98);
			this->label67->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(69, 13);
			this->label67->TabIndex = 54;
			this->label67->Text = L"Désignation :";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(130, 70);
			this->label68->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(63, 13);
			this->label68->TabIndex = 53;
			this->label68->Text = L"Référence :";
			// 
			// TabpageSupprimerArticle
			// 
			this->TabpageSupprimerArticle->Controls->Add(this->SupprimerArticleButton);
			this->TabpageSupprimerArticle->Controls->Add(this->SupprimerArticleCheckbox);
			this->TabpageSupprimerArticle->Controls->Add(this->SupprimerArticleCombobox);
			this->TabpageSupprimerArticle->Controls->Add(this->label87);
			this->TabpageSupprimerArticle->Location = System::Drawing::Point(4, 22);
			this->TabpageSupprimerArticle->Margin = System::Windows::Forms::Padding(2);
			this->TabpageSupprimerArticle->Name = L"TabpageSupprimerArticle";
			this->TabpageSupprimerArticle->Size = System::Drawing::Size(1199, 550);
			this->TabpageSupprimerArticle->TabIndex = 2;
			this->TabpageSupprimerArticle->Text = L"Supprimer Article";
			this->TabpageSupprimerArticle->UseVisualStyleBackColor = true;
			// 
			// SupprimerArticleButton
			// 
			this->SupprimerArticleButton->Location = System::Drawing::Point(180, 181);
			this->SupprimerArticleButton->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerArticleButton->Name = L"SupprimerArticleButton";
			this->SupprimerArticleButton->Size = System::Drawing::Size(236, 68);
			this->SupprimerArticleButton->TabIndex = 5;
			this->SupprimerArticleButton->Text = L"Supprimer";
			this->SupprimerArticleButton->UseVisualStyleBackColor = true;
			this->SupprimerArticleButton->Click += gcnew System::EventHandler(this, &MyForm::SupprimerArticleButton_Click);
			// 
			// SupprimerArticleCheckbox
			// 
			this->SupprimerArticleCheckbox->AutoSize = true;
			this->SupprimerArticleCheckbox->Location = System::Drawing::Point(199, 114);
			this->SupprimerArticleCheckbox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerArticleCheckbox->Name = L"SupprimerArticleCheckbox";
			this->SupprimerArticleCheckbox->Size = System::Drawing::Size(140, 17);
			this->SupprimerArticleCheckbox->TabIndex = 4;
			this->SupprimerArticleCheckbox->Text = L"Confirmer la suppression";
			this->SupprimerArticleCheckbox->UseVisualStyleBackColor = true;
			this->SupprimerArticleCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SupprimerArticleCheckbox_CheckedChanged);
			// 
			// SupprimerArticleCombobox
			// 
			this->SupprimerArticleCombobox->FormattingEnabled = true;
			this->SupprimerArticleCombobox->Location = System::Drawing::Point(222, 38);
			this->SupprimerArticleCombobox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerArticleCombobox->Name = L"SupprimerArticleCombobox";
			this->SupprimerArticleCombobox->Size = System::Drawing::Size(266, 21);
			this->SupprimerArticleCombobox->TabIndex = 3;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(38, 41);
			this->label87->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(164, 13);
			this->label87->TabIndex = 2;
			this->label87->Text = L"Selectionner l\'article à supprimer :";
			// 
			// TabpageAfficherArticle
			// 
			this->TabpageAfficherArticle->Controls->Add(this->AfficherArticleButton);
			this->TabpageAfficherArticle->Controls->Add(this->AfficherArticleDataGridView);
			this->TabpageAfficherArticle->Controls->Add(this->AfficherArticleCombobox);
			this->TabpageAfficherArticle->Controls->Add(this->label88);
			this->TabpageAfficherArticle->Location = System::Drawing::Point(4, 22);
			this->TabpageAfficherArticle->Margin = System::Windows::Forms::Padding(2);
			this->TabpageAfficherArticle->Name = L"TabpageAfficherArticle";
			this->TabpageAfficherArticle->Size = System::Drawing::Size(1199, 550);
			this->TabpageAfficherArticle->TabIndex = 4;
			this->TabpageAfficherArticle->Text = L"Afficher Article";
			this->TabpageAfficherArticle->UseVisualStyleBackColor = true;
			// 
			// AfficherArticleButton
			// 
			this->AfficherArticleButton->Location = System::Drawing::Point(396, 17);
			this->AfficherArticleButton->Margin = System::Windows::Forms::Padding(2);
			this->AfficherArticleButton->Name = L"AfficherArticleButton";
			this->AfficherArticleButton->Size = System::Drawing::Size(207, 41);
			this->AfficherArticleButton->TabIndex = 5;
			this->AfficherArticleButton->Text = L"Afficher";
			this->AfficherArticleButton->UseVisualStyleBackColor = true;
			this->AfficherArticleButton->Click += gcnew System::EventHandler(this, &MyForm::AfficherArticleButton_Click);
			// 
			// AfficherArticleDataGridView
			// 
			this->AfficherArticleDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AfficherArticleDataGridView->Location = System::Drawing::Point(24, 72);
			this->AfficherArticleDataGridView->Margin = System::Windows::Forms::Padding(2);
			this->AfficherArticleDataGridView->Name = L"AfficherArticleDataGridView";
			this->AfficherArticleDataGridView->RowHeadersWidth = 51;
			this->AfficherArticleDataGridView->RowTemplate->Height = 24;
			this->AfficherArticleDataGridView->Size = System::Drawing::Size(1150, 462);
			this->AfficherArticleDataGridView->TabIndex = 4;
			// 
			// AfficherArticleCombobox
			// 
			this->AfficherArticleCombobox->FormattingEnabled = true;
			this->AfficherArticleCombobox->Location = System::Drawing::Point(44, 34);
			this->AfficherArticleCombobox->Margin = System::Windows::Forms::Padding(2);
			this->AfficherArticleCombobox->Name = L"AfficherArticleCombobox";
			this->AfficherArticleCombobox->Size = System::Drawing::Size(266, 21);
			this->AfficherArticleCombobox->TabIndex = 3;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(42, 19);
			this->label88->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(154, 13);
			this->label88->TabIndex = 2;
			this->label88->Text = L"Selectionner l\'article à afficher :";
			// 
			// TabcontrolGestionCommande
			// 
			this->TabcontrolGestionCommande->Controls->Add(this->TabpageCreationCommande);
			this->TabcontrolGestionCommande->Controls->Add(this->TabpageModifierCommande);
			this->TabcontrolGestionCommande->Controls->Add(this->TabpageSupprimerCommande);
			this->TabcontrolGestionCommande->Controls->Add(this->TabpageAfficherCommande);
			this->TabcontrolGestionCommande->Location = System::Drawing::Point(9, 75);
			this->TabcontrolGestionCommande->Margin = System::Windows::Forms::Padding(2);
			this->TabcontrolGestionCommande->Name = L"TabcontrolGestionCommande";
			this->TabcontrolGestionCommande->SelectedIndex = 0;
			this->TabcontrolGestionCommande->Size = System::Drawing::Size(1207, 576);
			this->TabcontrolGestionCommande->TabIndex = 8;
			// 
			// TabpageCreationCommande
			// 
			this->TabpageCreationCommande->Controls->Add(this->label71);
			this->TabpageCreationCommande->Controls->Add(this->CreationCommandeButton);
			this->TabpageCreationCommande->Location = System::Drawing::Point(4, 22);
			this->TabpageCreationCommande->Margin = System::Windows::Forms::Padding(2);
			this->TabpageCreationCommande->Name = L"TabpageCreationCommande";
			this->TabpageCreationCommande->Padding = System::Windows::Forms::Padding(2);
			this->TabpageCreationCommande->Size = System::Drawing::Size(1199, 550);
			this->TabpageCreationCommande->TabIndex = 0;
			this->TabpageCreationCommande->Text = L"Creation Commande";
			this->TabpageCreationCommande->UseVisualStyleBackColor = true;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(67, 53);
			this->label71->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(45, 13);
			this->label71->TabIndex = 1;
			this->label71->Text = L"Label71";
			// 
			// CreationCommandeButton
			// 
			this->CreationCommandeButton->Location = System::Drawing::Point(238, 122);
			this->CreationCommandeButton->Margin = System::Windows::Forms::Padding(2);
			this->CreationCommandeButton->Name = L"CreationCommandeButton";
			this->CreationCommandeButton->Size = System::Drawing::Size(478, 205);
			this->CreationCommandeButton->TabIndex = 0;
			this->CreationCommandeButton->Text = L"Creer Une commande";
			this->CreationCommandeButton->UseVisualStyleBackColor = true;
			this->CreationCommandeButton->Click += gcnew System::EventHandler(this, &MyForm::CreationCommandeButton_Click);
			// 
			// TabpageModifierCommande
			// 
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeButtonPayer);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeComboboxSelectionMoyen);
			this->TabpageModifierCommande->Controls->Add(this->label76);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeTexteboxMontant);
			this->TabpageModifierCommande->Controls->Add(this->label77);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeLabelResteAPayer);
			this->TabpageModifierCommande->Controls->Add(this->label74);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeButtonAppliquerRemise);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeComboboxSelectionRemise);
			this->TabpageModifierCommande->Controls->Add(this->label73);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeButtonFacture);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeComboxboxSelectionCommande);
			this->TabpageModifierCommande->Controls->Add(this->label72);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeButtonAjouterArticle);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeComboxboxSelectionArticle);
			this->TabpageModifierCommande->Controls->Add(this->label80);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire);
			this->TabpageModifierCommande->Controls->Add(this->ModifierCommandeTexteboxQuantite);
			this->TabpageModifierCommande->Controls->Add(this->label90);
			this->TabpageModifierCommande->Controls->Add(this->label91);
			this->TabpageModifierCommande->Location = System::Drawing::Point(4, 22);
			this->TabpageModifierCommande->Margin = System::Windows::Forms::Padding(2);
			this->TabpageModifierCommande->Name = L"TabpageModifierCommande";
			this->TabpageModifierCommande->Padding = System::Windows::Forms::Padding(2);
			this->TabpageModifierCommande->Size = System::Drawing::Size(1199, 550);
			this->TabpageModifierCommande->TabIndex = 1;
			this->TabpageModifierCommande->Text = L"Modifier Commande";
			this->TabpageModifierCommande->UseVisualStyleBackColor = true;
			// 
			// ModifierCommandeButtonPayer
			// 
			this->ModifierCommandeButtonPayer->Location = System::Drawing::Point(814, 411);
			this->ModifierCommandeButtonPayer->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeButtonPayer->Name = L"ModifierCommandeButtonPayer";
			this->ModifierCommandeButtonPayer->Size = System::Drawing::Size(194, 39);
			this->ModifierCommandeButtonPayer->TabIndex = 75;
			this->ModifierCommandeButtonPayer->Text = L"Payer";
			this->ModifierCommandeButtonPayer->UseVisualStyleBackColor = true;
			this->ModifierCommandeButtonPayer->Click += gcnew System::EventHandler(this, &MyForm::ModifierCommandeButtonPayer_Click);
			// 
			// ModifierCommandeComboboxSelectionMoyen
			// 
			this->ModifierCommandeComboboxSelectionMoyen->FormattingEnabled = true;
			this->ModifierCommandeComboboxSelectionMoyen->Location = System::Drawing::Point(814, 329);
			this->ModifierCommandeComboboxSelectionMoyen->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeComboboxSelectionMoyen->Name = L"ModifierCommandeComboboxSelectionMoyen";
			this->ModifierCommandeComboboxSelectionMoyen->Size = System::Drawing::Size(194, 21);
			this->ModifierCommandeComboboxSelectionMoyen->TabIndex = 71;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(741, 332);
			this->label76->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(45, 13);
			this->label76->TabIndex = 74;
			this->label76->Text = L"Moyen :";
			// 
			// ModifierCommandeTexteboxMontant
			// 
			this->ModifierCommandeTexteboxMontant->Location = System::Drawing::Point(814, 366);
			this->ModifierCommandeTexteboxMontant->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeTexteboxMontant->Name = L"ModifierCommandeTexteboxMontant";
			this->ModifierCommandeTexteboxMontant->Size = System::Drawing::Size(194, 20);
			this->ModifierCommandeTexteboxMontant->TabIndex = 72;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(736, 368);
			this->label77->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(52, 13);
			this->label77->TabIndex = 73;
			this->label77->Text = L"Montant :";
			// 
			// ModifierCommandeLabelResteAPayer
			// 
			this->ModifierCommandeLabelResteAPayer->AutoSize = true;
			this->ModifierCommandeLabelResteAPayer->Location = System::Drawing::Point(812, 301);
			this->ModifierCommandeLabelResteAPayer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ModifierCommandeLabelResteAPayer->Name = L"ModifierCommandeLabelResteAPayer";
			this->ModifierCommandeLabelResteAPayer->Size = System::Drawing::Size(273, 13);
			this->ModifierCommandeLabelResteAPayer->TabIndex = 70;
			this->ModifierCommandeLabelResteAPayer->Text = L"label75 ICI METTRE LA VALEUR DU TOTAL A PAYER";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(708, 301);
			this->label74->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(79, 13);
			this->label74->TabIndex = 69;
			this->label74->Text = L"Reste a payer :";
			// 
			// ModifierCommandeButtonAppliquerRemise
			// 
			this->ModifierCommandeButtonAppliquerRemise->Location = System::Drawing::Point(814, 162);
			this->ModifierCommandeButtonAppliquerRemise->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeButtonAppliquerRemise->Name = L"ModifierCommandeButtonAppliquerRemise";
			this->ModifierCommandeButtonAppliquerRemise->Size = System::Drawing::Size(194, 39);
			this->ModifierCommandeButtonAppliquerRemise->TabIndex = 68;
			this->ModifierCommandeButtonAppliquerRemise->Text = L"Ajouter la remise à la commande";
			this->ModifierCommandeButtonAppliquerRemise->UseVisualStyleBackColor = true;
			this->ModifierCommandeButtonAppliquerRemise->Click += gcnew System::EventHandler(this, &MyForm::ModifierCommandeButtonAppliquerRemise_Click);
			// 
			// ModifierCommandeComboboxSelectionRemise
			// 
			this->ModifierCommandeComboboxSelectionRemise->FormattingEnabled = true;
			this->ModifierCommandeComboboxSelectionRemise->Location = System::Drawing::Point(814, 119);
			this->ModifierCommandeComboboxSelectionRemise->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeComboboxSelectionRemise->Name = L"ModifierCommandeComboboxSelectionRemise";
			this->ModifierCommandeComboboxSelectionRemise->Size = System::Drawing::Size(194, 21);
			this->ModifierCommandeComboboxSelectionRemise->TabIndex = 66;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(692, 122);
			this->label73->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(126, 13);
			this->label73->TabIndex = 67;
			this->label73->Text = L"Selectionner une remise :";
			// 
			// ModifierCommandeButtonFacture
			// 
			this->ModifierCommandeButtonFacture->Location = System::Drawing::Point(210, 398);
			this->ModifierCommandeButtonFacture->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeButtonFacture->Name = L"ModifierCommandeButtonFacture";
			this->ModifierCommandeButtonFacture->Size = System::Drawing::Size(188, 116);
			this->ModifierCommandeButtonFacture->TabIndex = 65;
			this->ModifierCommandeButtonFacture->Text = L"Enregister la commande\r\n----------------------------------\r\nEnregistrer la factur"
				L"e";
			this->ModifierCommandeButtonFacture->UseVisualStyleBackColor = true;
			this->ModifierCommandeButtonFacture->Click += gcnew System::EventHandler(this, &MyForm::ModifierCommandeButtonFacture_Click);
			// 
			// ModifierCommandeComboxboxSelectionCommande
			// 
			this->ModifierCommandeComboxboxSelectionCommande->FormattingEnabled = true;
			this->ModifierCommandeComboxboxSelectionCommande->Location = System::Drawing::Point(210, 20);
			this->ModifierCommandeComboxboxSelectionCommande->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeComboxboxSelectionCommande->Name = L"ModifierCommandeComboxboxSelectionCommande";
			this->ModifierCommandeComboxboxSelectionCommande->Size = System::Drawing::Size(194, 21);
			this->ModifierCommandeComboxboxSelectionCommande->TabIndex = 63;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(63, 22);
			this->label72->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(138, 13);
			this->label72->TabIndex = 64;
			this->label72->Text = L"Sélectionner la commande :";
			// 
			// ModifierCommandeButtonAjouterArticle
			// 
			this->ModifierCommandeButtonAjouterArticle->Location = System::Drawing::Point(210, 205);
			this->ModifierCommandeButtonAjouterArticle->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeButtonAjouterArticle->Name = L"ModifierCommandeButtonAjouterArticle";
			this->ModifierCommandeButtonAjouterArticle->Size = System::Drawing::Size(194, 39);
			this->ModifierCommandeButtonAjouterArticle->TabIndex = 52;
			this->ModifierCommandeButtonAjouterArticle->Text = L"Ajouter l\'article a la commande";
			this->ModifierCommandeButtonAjouterArticle->UseVisualStyleBackColor = true;
			this->ModifierCommandeButtonAjouterArticle->Click += gcnew System::EventHandler(this, &MyForm::ModifierCommandeButtonAjouterArticle_Click);
			// 
			// ModifierCommandeComboxboxSelectionArticle
			// 
			this->ModifierCommandeComboxboxSelectionArticle->FormattingEnabled = true;
			this->ModifierCommandeComboxboxSelectionArticle->Location = System::Drawing::Point(210, 115);
			this->ModifierCommandeComboxboxSelectionArticle->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeComboxboxSelectionArticle->Name = L"ModifierCommandeComboxboxSelectionArticle";
			this->ModifierCommandeComboxboxSelectionArticle->Size = System::Drawing::Size(194, 21);
			this->ModifierCommandeComboxboxSelectionArticle->TabIndex = 40;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(93, 118);
			this->label80->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(107, 13);
			this->label80->TabIndex = 62;
			this->label80->Text = L"Sélectionner l\'article :";
			// 
			// ModifierCommandeTexteboxRemiseExceptionnelUnitaire
			// 
			this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire->Location = System::Drawing::Point(210, 178);
			this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire->Name = L"ModifierCommandeTexteboxRemiseExceptionnelUnitaire";
			this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire->Size = System::Drawing::Size(194, 20);
			this->ModifierCommandeTexteboxRemiseExceptionnelUnitaire->TabIndex = 42;
			// 
			// ModifierCommandeTexteboxQuantite
			// 
			this->ModifierCommandeTexteboxQuantite->Location = System::Drawing::Point(210, 150);
			this->ModifierCommandeTexteboxQuantite->Margin = System::Windows::Forms::Padding(2);
			this->ModifierCommandeTexteboxQuantite->Name = L"ModifierCommandeTexteboxQuantite";
			this->ModifierCommandeTexteboxQuantite->Size = System::Drawing::Size(194, 20);
			this->ModifierCommandeTexteboxQuantite->TabIndex = 41;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(58, 180);
			this->label90->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(143, 13);
			this->label90->TabIndex = 54;
			this->label90->Text = L"Remise Exceptionel unitaire :";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(146, 152);
			this->label91->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(53, 13);
			this->label91->TabIndex = 53;
			this->label91->Text = L"Quantité :";
			// 
			// TabpageSupprimerCommande
			// 
			this->TabpageSupprimerCommande->Controls->Add(this->SupprimerCommandeButton);
			this->TabpageSupprimerCommande->Controls->Add(this->SupprimerCommandeCheckbox);
			this->TabpageSupprimerCommande->Controls->Add(this->SupprimerCommandeCombobox);
			this->TabpageSupprimerCommande->Controls->Add(this->label92);
			this->TabpageSupprimerCommande->Location = System::Drawing::Point(4, 22);
			this->TabpageSupprimerCommande->Margin = System::Windows::Forms::Padding(2);
			this->TabpageSupprimerCommande->Name = L"TabpageSupprimerCommande";
			this->TabpageSupprimerCommande->Size = System::Drawing::Size(1199, 550);
			this->TabpageSupprimerCommande->TabIndex = 2;
			this->TabpageSupprimerCommande->Text = L"Supprimer Commande";
			this->TabpageSupprimerCommande->UseVisualStyleBackColor = true;
			// 
			// SupprimerCommandeButton
			// 
			this->SupprimerCommandeButton->Location = System::Drawing::Point(180, 181);
			this->SupprimerCommandeButton->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerCommandeButton->Name = L"SupprimerCommandeButton";
			this->SupprimerCommandeButton->Size = System::Drawing::Size(236, 68);
			this->SupprimerCommandeButton->TabIndex = 5;
			this->SupprimerCommandeButton->Text = L"Supprimer";
			this->SupprimerCommandeButton->UseVisualStyleBackColor = true;
			this->SupprimerCommandeButton->Click += gcnew System::EventHandler(this, &MyForm::SupprimerCommandeButton_Click);
			// 
			// SupprimerCommandeCheckbox
			// 
			this->SupprimerCommandeCheckbox->AutoSize = true;
			this->SupprimerCommandeCheckbox->Location = System::Drawing::Point(199, 114);
			this->SupprimerCommandeCheckbox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerCommandeCheckbox->Name = L"SupprimerCommandeCheckbox";
			this->SupprimerCommandeCheckbox->Size = System::Drawing::Size(140, 17);
			this->SupprimerCommandeCheckbox->TabIndex = 4;
			this->SupprimerCommandeCheckbox->Text = L"Confirmer la suppression";
			this->SupprimerCommandeCheckbox->UseVisualStyleBackColor = true;
			this->SupprimerCommandeCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::SupprimerCommandeCheckbox_CheckedChanged);
			// 
			// SupprimerCommandeCombobox
			// 
			this->SupprimerCommandeCombobox->FormattingEnabled = true;
			this->SupprimerCommandeCombobox->Location = System::Drawing::Point(222, 38);
			this->SupprimerCommandeCombobox->Margin = System::Windows::Forms::Padding(2);
			this->SupprimerCommandeCombobox->Name = L"SupprimerCommandeCombobox";
			this->SupprimerCommandeCombobox->Size = System::Drawing::Size(266, 21);
			this->SupprimerCommandeCombobox->TabIndex = 3;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->Location = System::Drawing::Point(16, 41);
			this->label92->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(195, 13);
			this->label92->TabIndex = 2;
			this->label92->Text = L"Selectionner la commande à supprimer :";
			// 
			// TabpageAfficherCommande
			// 
			this->TabpageAfficherCommande->Controls->Add(this->AfficherCommandeButton);
			this->TabpageAfficherCommande->Controls->Add(this->AfficherCommandeDataGridView);
			this->TabpageAfficherCommande->Controls->Add(this->AfficherCommandeCombobox);
			this->TabpageAfficherCommande->Controls->Add(this->label93);
			this->TabpageAfficherCommande->Location = System::Drawing::Point(4, 22);
			this->TabpageAfficherCommande->Margin = System::Windows::Forms::Padding(2);
			this->TabpageAfficherCommande->Name = L"TabpageAfficherCommande";
			this->TabpageAfficherCommande->Size = System::Drawing::Size(1199, 550);
			this->TabpageAfficherCommande->TabIndex = 4;
			this->TabpageAfficherCommande->Text = L"Afficher Commande";
			this->TabpageAfficherCommande->UseVisualStyleBackColor = true;
			// 
			// AfficherCommandeButton
			// 
			this->AfficherCommandeButton->Location = System::Drawing::Point(396, 17);
			this->AfficherCommandeButton->Margin = System::Windows::Forms::Padding(2);
			this->AfficherCommandeButton->Name = L"AfficherCommandeButton";
			this->AfficherCommandeButton->Size = System::Drawing::Size(207, 41);
			this->AfficherCommandeButton->TabIndex = 5;
			this->AfficherCommandeButton->Text = L"Afficher";
			this->AfficherCommandeButton->UseVisualStyleBackColor = true;
			this->AfficherCommandeButton->Click += gcnew System::EventHandler(this, &MyForm::AfficherCommandeButton_Click);
			// 
			// AfficherCommandeDataGridView
			// 
			this->AfficherCommandeDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AfficherCommandeDataGridView->Location = System::Drawing::Point(24, 72);
			this->AfficherCommandeDataGridView->Margin = System::Windows::Forms::Padding(2);
			this->AfficherCommandeDataGridView->Name = L"AfficherCommandeDataGridView";
			this->AfficherCommandeDataGridView->RowHeadersWidth = 51;
			this->AfficherCommandeDataGridView->RowTemplate->Height = 24;
			this->AfficherCommandeDataGridView->Size = System::Drawing::Size(1156, 462);
			this->AfficherCommandeDataGridView->TabIndex = 4;
			// 
			// AfficherCommandeCombobox
			// 
			this->AfficherCommandeCombobox->FormattingEnabled = true;
			this->AfficherCommandeCombobox->Location = System::Drawing::Point(44, 34);
			this->AfficherCommandeCombobox->Margin = System::Windows::Forms::Padding(2);
			this->AfficherCommandeCombobox->Name = L"AfficherCommandeCombobox";
			this->AfficherCommandeCombobox->Size = System::Drawing::Size(266, 21);
			this->AfficherCommandeCombobox->TabIndex = 3;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->Location = System::Drawing::Point(42, 19);
			this->label93->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(185, 13);
			this->label93->TabIndex = 2;
			this->label93->Text = L"Selectionner la commande à afficher :";
			// 
			// TabcontrolStats
			// 
			this->TabcontrolStats->Controls->Add(this->TabpageStats);
			this->TabcontrolStats->Controls->Add(this->TabpageStatsAv);
			this->TabcontrolStats->ImeMode = System::Windows::Forms::ImeMode::On;
			this->TabcontrolStats->Location = System::Drawing::Point(9, 75);
			this->TabcontrolStats->Margin = System::Windows::Forms::Padding(2);
			this->TabcontrolStats->Name = L"TabcontrolStats";
			this->TabcontrolStats->SelectedIndex = 0;
			this->TabcontrolStats->Size = System::Drawing::Size(1207, 578);
			this->TabcontrolStats->TabIndex = 185;
			// 
			// TabpageStats
			// 
			this->TabpageStats->Controls->Add(this->textBox7);
			this->TabpageStats->Controls->Add(this->textBox6);
			this->TabpageStats->Controls->Add(this->label89);
			this->TabpageStats->Controls->Add(this->label86);
			this->TabpageStats->Controls->Add(this->dataGridView3);
			this->TabpageStats->Controls->Add(this->dataGridView2);
			this->TabpageStats->Controls->Add(this->label85);
			this->TabpageStats->Controls->Add(this->label84);
			this->TabpageStats->Controls->Add(this->label83);
			this->TabpageStats->Controls->Add(this->dataGridView1);
			this->TabpageStats->Controls->Add(this->numericUpDown2);
			this->TabpageStats->Controls->Add(this->label82);
			this->TabpageStats->Controls->Add(this->label81);
			this->TabpageStats->Controls->Add(this->textBox2);
			this->TabpageStats->Controls->Add(this->label79);
			this->TabpageStats->Controls->Add(this->numericUpDown1);
			this->TabpageStats->Controls->Add(this->textBox1);
			this->TabpageStats->Controls->Add(this->label78);
			this->TabpageStats->Location = System::Drawing::Point(4, 22);
			this->TabpageStats->Margin = System::Windows::Forms::Padding(2);
			this->TabpageStats->Name = L"TabpageStats";
			this->TabpageStats->Padding = System::Windows::Forms::Padding(2);
			this->TabpageStats->Size = System::Drawing::Size(1199, 552);
			this->TabpageStats->TabIndex = 0;
			this->TabpageStats->Text = L"Général";
			this->TabpageStats->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(431, 189);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(131, 20);
			this->textBox7->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(431, 37);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(131, 20);
			this->textBox6->TabIndex = 16;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(443, 171);
			this->label89->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(111, 13);
			this->label89->TabIndex = 15;
			this->label89->Text = L"Valeur du stock (TTC)";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(432, 19);
			this->label86->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(138, 13);
			this->label86->TabIndex = 14;
			this->label86->Text = L"Valeur du stock (hors-taxes)";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(226, 189);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(182, 231);
			this->dataGridView3->TabIndex = 13;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 189);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(182, 231);
			this->dataGridView2->TabIndex = 12;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(244, 171);
			this->label85->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(139, 13);
			this->label85->TabIndex = 11;
			this->label85->Text = L"10 articles les moins vendus";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(41, 174);
			this->label84->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(131, 13);
			this->label84->TabIndex = 10;
			this->label84->Text = L"10 articles les plus vendus";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(217, 19);
			this->label83->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(135, 13);
			this->label83->TabIndex = 9;
			this->label83->Text = L"Produits à réapprovisionner";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(154, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(254, 122);
			this->dataGridView1->TabIndex = 8;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(94, 144);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2023, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2012, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(44, 20);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(104, 128);
			this->label82->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(38, 13);
			this->label82->TabIndex = 6;
			this->label82->Text = L"Année";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(21, 128);
			this->label81->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(29, 13);
			this->label81->TabIndex = 5;
			this->label81->Text = L"Mois";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(23, 103);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(25, 84);
			this->label79->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(124, 13);
			this->label79->TabIndex = 3;
			this->label79->Text = L"Chiffre d\'affaires mensuel";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(23, 144);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(34, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 39);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(21, 23);
			this->label78->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(127, 13);
			this->label78->TabIndex = 0;
			this->label78->Text = L"Montant du panier moyen";
			// 
			// TabpageStatsAv
			// 
			this->TabpageStatsAv->Location = System::Drawing::Point(4, 22);
			this->TabpageStatsAv->Margin = System::Windows::Forms::Padding(2);
			this->TabpageStatsAv->Name = L"TabpageStatsAv";
			this->TabpageStatsAv->Padding = System::Windows::Forms::Padding(2);
			this->TabpageStatsAv->Size = System::Drawing::Size(1199, 552);
			this->TabpageStatsAv->TabIndex = 1;
			this->TabpageStatsAv->Text = L"Avancé";
			this->TabpageStatsAv->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1412, 693);
			this->Controls->Add(this->ButtonGestionStats);
			this->Controls->Add(this->ButtonGestionCommande);
			this->Controls->Add(this->ButtonGestionArticle);
			this->Controls->Add(this->ButtonGestionPersonnel);
			this->Controls->Add(this->ButtonGestionClient);
			this->Controls->Add(this->TabcontrolGestionPersonnel);
			this->Controls->Add(this->TabcontrolGestionCommande);
			this->Controls->Add(this->TabcontrolGestionClient);
			this->Controls->Add(this->TabcontrolGestionArticle);
			this->Controls->Add(this->TabcontrolStats);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TabcontrolGestionClient->ResumeLayout(false);
			this->TabpageCreationClient->ResumeLayout(false);
			this->TabpageCreationClient->PerformLayout();
			this->TabpageModifierClient->ResumeLayout(false);
			this->TabpageModifierClient->PerformLayout();
			this->TabpageSupprimerClient->ResumeLayout(false);
			this->TabpageSupprimerClient->PerformLayout();
			this->TabpageAffichageClient->ResumeLayout(false);
			this->TabpageAffichageClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherClientDataGridView))->EndInit();
			this->TabcontrolGestionPersonnel->ResumeLayout(false);
			this->TabpageCreationPersonnel->ResumeLayout(false);
			this->TabpageCreationPersonnel->PerformLayout();
			this->TabpageModificationPersonnel->ResumeLayout(false);
			this->TabpageModificationPersonnel->PerformLayout();
			this->TabpageSupprimerPersonnel->ResumeLayout(false);
			this->TabpageSupprimerPersonnel->PerformLayout();
			this->TabpageAfficherPersonnel->ResumeLayout(false);
			this->TabpageAfficherPersonnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherPersonnelDataGridView))->EndInit();
			this->TabcontrolGestionArticle->ResumeLayout(false);
			this->TabpageCreationArticle->ResumeLayout(false);
			this->TabpageCreationArticle->PerformLayout();
			this->TabpageModifierArticle->ResumeLayout(false);
			this->TabpageModifierArticle->PerformLayout();
			this->TabpageSupprimerArticle->ResumeLayout(false);
			this->TabpageSupprimerArticle->PerformLayout();
			this->TabpageAfficherArticle->ResumeLayout(false);
			this->TabpageAfficherArticle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherArticleDataGridView))->EndInit();
			this->TabcontrolGestionCommande->ResumeLayout(false);
			this->TabpageCreationCommande->ResumeLayout(false);
			this->TabpageCreationCommande->PerformLayout();
			this->TabpageModifierCommande->ResumeLayout(false);
			this->TabpageModifierCommande->PerformLayout();
			this->TabpageSupprimerCommande->ResumeLayout(false);
			this->TabpageSupprimerCommande->PerformLayout();
			this->TabpageAfficherCommande->ResumeLayout(false);
			this->TabpageAfficherCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AfficherCommandeDataGridView))->EndInit();
			this->TabcontrolStats->ResumeLayout(false);
			this->TabpageStats->ResumeLayout(false);
			this->TabpageStats->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ButtonGestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		CacherTab();
		AfficherTabClient();
	}
	private: System::Void ButtonGestionPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		CLcad^ ComboCad = gcnew CLcad();
		CacherTab();
		AfficherTabPersonnel();
		this->CreationPersonnelComboboxSuperieur->Items->Clear();
		AjouterTexteComboBox(this->CreationPersonnelComboboxSuperieur, ComboCad->getRows("EXECUTE SelIDN", "listeCombobox"));

		this->ModificationPersonnelComboBoxPersonnel->Items->Clear();
		AjouterTexteComboBox(this->ModificationPersonnelComboBoxPersonnel, ComboCad->getRows("EXECUTE SelIDN", "listeCombobox"));

		this->ModificationPersonnelComboBoxSuperieur->Items->Clear();
		AjouterTexteComboBox(this->ModificationPersonnelComboBoxSuperieur, ComboCad->getRows("EXECUTE SelIDN", "listeCombobox"));

		this->SupprimerPersonnelComboBox->Items->Clear();
		AjouterTexteComboBox(this->SupprimerPersonnelComboBox, ComboCad->getRows("EXECUTE SelIDN", "listeCombobox"));

		this->AfficherPersonnelCombobox->Items->Clear();
		AjouterTexteComboBox(this->AfficherPersonnelCombobox, ComboCad->getRows("EXECUTE SelIDN", "listeCombobox"));
	}
	private: System::Void ButtonGestionArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		CacherTab();
		AfficherTabArticle();
	}
	private: System::Void ButtonGestionCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		CacherTab();
		AfficherTabCommande();
	}
	private: System::Void ButtonGestionStats_Click(System::Object^ sender, System::EventArgs^ e) {
		CacherTab();
		AfficherStats();
	}
	private: System::Void CreationPersonnelButtonCreer_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label49->Text = this->CreationPersonnelDateTimePicker->Text;
		CLcad^ ComboCad = gcnew CLcad();
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel();
		CLserviceAdresse^ serviceAdresse = gcnew CLserviceAdresse();

		if (this->CreationPersonnelRadiobuttonAdmin->Checked)
		{
			int index = System::Convert::ToInt16(ComboCad->getRows("EXECUTE SelIDN", "listeCombobox")->Tables["listeCombobox"]->Rows[this->CreationPersonnelComboboxSuperieur->SelectedIndex]->ItemArray[0]->ToString());
			//servicePersonnel->CreerPersonnel(this->CreationPersonnelTextboxEmail->Text, this->CreationPersonnelTextboxNom->Text, this->CreationPersonnelTextboxPrenom->Text, 7, index, 1, this->CreationPersonnelTextboxMotdepasse->Text, "2022-12-02");
			servicePersonnel->CreerPersonnel(this->CreationPersonnelTextboxEmail->Text, this->CreationPersonnelTextboxNom->Text, this->CreationPersonnelTextboxPrenom->Text, 7, index , 1, this->CreationPersonnelTextboxMotdepasse->Text, this->CreationPersonnelDateTimePicker->Text);
			serviceAdresse->CreerAdresse(System::Convert::ToInt16(this->CreationPersonnelTextboxAdresseNumero->Text), this->CreationPersonnelTextboxAdresseType->Text, this->CreationPersonnelTextboxAdresseNom->Text, this->CreationPersonnelTextboxAdresseCodePostal->Text, this->CreationPersonnelTextboxAdresseVille->Text);
		}
		else if (this->CreationPersonnelRadiobuttonRH->Checked)
		{
			int index = System::Convert::ToInt16(ComboCad->getRows("EXECUTE SelIDN", "listeCombobox")->Tables["listeCombobox"]->Rows[this->CreationPersonnelComboboxSuperieur->SelectedIndex]->ItemArray[0]->ToString());
			//servicePersonnel->CreerPersonnel(this->CreationPersonnelTextboxEmail->Text, this->CreationPersonnelTextboxNom->Text, this->CreationPersonnelTextboxPrenom->Text, 7, index, 2, this->CreationPersonnelTextboxMotdepasse->Text, "2022-12-02");
			servicePersonnel->CreerPersonnel(this->CreationPersonnelTextboxEmail->Text, this->CreationPersonnelTextboxNom->Text, this->CreationPersonnelTextboxPrenom->Text, 7, index , 2, this->CreationPersonnelTextboxMotdepasse->Text, this->CreationPersonnelDateTimePicker->Text);
			serviceAdresse->CreerAdresse(System::Convert::ToInt16(this->CreationPersonnelTextboxAdresseNumero->Text), this->CreationPersonnelTextboxAdresseType->Text, this->CreationPersonnelTextboxAdresseNom->Text, this->CreationPersonnelTextboxAdresseCodePostal->Text, this->CreationPersonnelTextboxAdresseVille->Text);
		}
		else if (this->CreationPersonnelRadiobuttonEmploye->Checked)
		{
			int index = System::Convert::ToInt16(ComboCad->getRows("EXECUTE SelIDN", "listeCombobox")->Tables["listeCombobox"]->Rows[this->CreationPersonnelComboboxSuperieur->SelectedIndex]->ItemArray[0]->ToString());
			//servicePersonnel->CreerPersonnel(this->CreationPersonnelTextboxEmail->Text, this->CreationPersonnelTextboxNom->Text, this->CreationPersonnelTextboxPrenom->Text, 7, index, 3, this->CreationPersonnelTextboxMotdepasse->Text, "2022-12-02");
			servicePersonnel->CreerPersonnel(this->CreationPersonnelTextboxEmail->Text, this->CreationPersonnelTextboxNom->Text, this->CreationPersonnelTextboxPrenom->Text, 7, index, 3, this->CreationPersonnelTextboxMotdepasse->Text, this->CreationPersonnelDateTimePicker->Text);
			serviceAdresse->CreerAdresse(System::Convert::ToInt16(this->CreationPersonnelTextboxAdresseNumero->Text), this->CreationPersonnelTextboxAdresseType->Text, this->CreationPersonnelTextboxAdresseNom->Text, this->CreationPersonnelTextboxAdresseCodePostal->Text, this->CreationPersonnelTextboxAdresseVille->Text);
		}


	}

	private: System::Void SupprimerPersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel();
		CLcad^ ComboCad = gcnew CLcad();
		int index = System::Convert::ToInt16(ComboCad->getRows("EXECUTE SelIDN", "listeCombobox")->Tables["listeCombobox"]->Rows[this->SupprimerPersonnelComboBox->SelectedIndex]->ItemArray[0]->ToString());
		servicePersonnel->SupprimerPersonnel(index);
			
	}
	private: System::Void AfficherPersonnelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel();
		CLcad^ ComboCad = gcnew CLcad();
		this->AfficherPersonnelDataGridView->Refresh();
		int index = System::Convert::ToInt16(ComboCad->getRows("EXECUTE SelIDN", "listeCombobox")->Tables["listeCombobox"]->Rows[this->AfficherPersonnelCombobox->SelectedIndex]->ItemArray[0]->ToString());
		this->AfficherPersonnelDataGridView->DataSource = servicePersonnel->AfficherPersonnel(index);
		this->AfficherPersonnelDataGridView->DataMember = "CePersonnel";
	}
	private: System::Void CreationCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModifierCommandeButtonAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModifierCommandeButtonFacture_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModifierCommandeButtonAppliquerRemise_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModifierCommandeButtonPayer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerCommandeCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AfficherCommandeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CreationClientButtonCreer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModifierClientButtonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerClientCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel();
		CLcad^ ComboCad = gcnew CLcad();
		int index = System::Convert::ToInt16(ComboCad->getRows("EXECUTE SelIDN", "listeCombobox")->Tables["listeCombobox"]->Rows[this->CreationPersonnelComboboxSuperieur->SelectedIndex]->ItemArray[0]->ToString());
		servicePersonnel->SupprimerPersonnel(index);
		this->label69->Text = "appuyer sur le bouton suppr";

	}
	private: System::Void AfficherClientButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CLserviceClient^ serviceClient = gcnew CLserviceClient();
		this->AfficherClientDataGridView->Refresh();
		//this->oDs = serviceClient->AfficherClient(12);
		this->AfficherClientDataGridView->DataSource = serviceClient->AfficherClient(3);
		this->AfficherClientDataGridView->DataMember = "CeClient";
	}
	private: System::Void CreationArticleButtonCreer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModificationArticleButtonModification_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerArticleCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerArticleButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AfficherArticleButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SupprimerPersonnelCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModificationPersonnelButtonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		CLcad^ ComboCad = gcnew CLcad();
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel();
		CLserviceAdresse^ serviceAdresse = gcnew CLserviceAdresse();
		this->oDs = servicePersonnel->SelPourModifPersonnel();


		int id_personne = System::Convert::ToInt16(this->oDs->Tables["SelPersonneUpd"]->Rows[this->ModificationPersonnelComboBoxPersonnel->SelectedIndex]->ItemArray[6]->ToString());
		int id_superieur = System::Convert::ToInt16(this->oDs->Tables["SelPersonneUpd"]->Rows[this->ModificationPersonnelComboBoxPersonnel->SelectedIndex]->ItemArray[2]->ToString());
		int idadresse = System::Convert::ToInt16(this->oDs->Tables["SelPersonneUpd"]->Rows[this->ModificationPersonnelComboBoxPersonnel->SelectedIndex]->ItemArray[5]->ToString());

		servicePersonnel->ModifierPersonnel(id_personne, this->ModificationPersonnelTexteboxEmail->Text, this->ModificationPersonnelTexteboxNom->Text, this->ModificationPersonnelTexteboxPrenom->Text, 7, id_superieur, this->ModificationPersonnelTexteboxMotDePasse->Text, this->ModificationPersonnelDatetimepicker->Text);
		serviceAdresse->ModifierAdresse(idadresse,System::Convert::ToInt16(this->textBox5->Text), this->textBox15->Text, this->textBox14->Text, this->textBox3->Text,this->textBox4->Text);
	}
	private: System::Void label52_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ModificationPersonnelComboBoxPersonnel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		CLservicePersonnel^ servicePersonnel = gcnew CLservicePersonnel();

		this->oDs = servicePersonnel->SelPourModifPersonnel();
		int index = this->ModificationPersonnelComboBoxPersonnel->SelectedIndex;

		int indexsup;
		bool etat = false;

		for (int i = 0; i < this->oDs->Tables["SelPersonneUpd"]->Rows->Count - 1; i++)
		{
			if (this->oDs->Tables["SelPersonneUpd"]->Rows[index]->ItemArray[2]->ToString() == this->oDs->Tables["SelPersonneUpd"]->Rows[i]->ItemArray[0]->ToString())
			{
				indexsup = i;
				etat = true;
			}
		}

		this->ModificationPersonnelTexteboxNom->Text = this->oDs->Tables["SelPersonneUpd"]->Rows[index]->ItemArray[8]->ToString();
		this->ModificationPersonnelTexteboxPrenom->Text = this->oDs->Tables["SelPersonneUpd"]->Rows[index]->ItemArray[10]->ToString();
		this->ModificationPersonnelTexteboxEmail->Text = this->oDs->Tables["SelPersonneUpd"]->Rows[index]->ItemArray[9]->ToString();
		this->ModificationPersonnelTexteboxMotDePasse->Text = this->oDs->Tables["SelPersonneUpd"]->Rows[index]->ItemArray[3]->ToString();
		this->ModificationPersonnelDatetimepicker->Text = this->oDs->Tables["SelPersonneUpd"]->Rows[index]->ItemArray[1]->ToString();

		if (etat == true)
		{
			this->ModificationPersonnelComboBoxSuperieur->SelectedIndex = indexsup;
		}
	}
};
}
