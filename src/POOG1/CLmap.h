#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmap
	{
	private:
		//System::String^ returning;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ login;
		System::String^ mdp;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		System::String^ SelectLogin(void);
		System::String^ InsertLogin();
		System::String^ Selectconnection();
		System::String^ NombreLigne(void);

		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setLogin(System::String^);
		void setMdp(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getLogin(void);
		System::String^ getMdp(void);
	};
}