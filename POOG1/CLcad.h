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
		System::Data::SqlClient::SqlCommand^ oCmd; // Représente une instruction Transact-SQL ou une procédure stockée à exécuter par rapport à une base de données SQL Server. Cette classe ne peut pas être héritée.
		System::Data::SqlClient::SqlDataAdapter^ oDA; // ensemble de commandes de données et une connexion de base de données qui sont utilisées pour remplir le DataSet et mettre à jour une base de données SQL Server
		System::Data::DataSet^ oDs; // cache en mémoire des données récupérées à partir d’une source de données, il est un composant majeur de l’architecture ADO.NET
	public:
		CLcad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}