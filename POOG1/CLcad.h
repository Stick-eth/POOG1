#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLcad
	{
	private:
		System::String^ sSql; // le stockage de la commande sql		
		System::String^ sCnx; // adresse du serveur
		System::Data::SqlClient::SqlConnection^ oCnx; // Stockage instance de la classe SqlConnection
		System::Data::SqlClient::SqlCommand^ oCmd; // Repr�sente une instruction Transact-SQL ou une proc�dure stock�e � ex�cuter par rapport � une base de donn�es SQL Server. Cette classe ne peut pas �tre h�rit�e.
		System::Data::SqlClient::SqlDataAdapter^ oDA; // ensemble de commandes de donn�es et une connexion de base de donn�es qui sont utilis�es pour remplir le DataSet et mettre � jour une base de donn�es SQL Server
		System::Data::DataSet^ oDs; // cache en m�moire des donn�es r�cup�r�es � partir d�une source de donn�es, il est un composant majeur de l�architecture ADO.NET
	public:
		CLcad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}