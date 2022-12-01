#pragma once
#include "CLmap.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmap^ oMapp;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		System::Data::DataSet^ voirListeLogin();
		void ajouterLogin(System::String^, System::String^);
		System::Data::DataSet^ seConnecter(System::String^, System::String^);

		System::String^ lireTable();
	};
}