#include "pch.h"

namespace Comp_Mappage
{
	CLcad::CLcad(void)
	{
		this->sCnx = "Data Source=34.155.91.73;Initial Catalog=poog1v2;Persist Security Info=True;User ID=sqlserver;Password=1234";
		//"Data Source=34.155.91.73;Initial Catalog=poog1;Persist Security Info=True;User ID=sqlserver;Password=1234"
		//"Data Source=34.155.91.73;Initial Catalog=poog1;Persist Security Info=True;User ID=sqlserver;Password=***"
		//"Data Source=LAPTOP-AAKF7SNO\\MSSQLSERVER02;Persist Security Info=True;User ID=ClydeBarrull;Password=SQLClyde"
		//Data Source=LAPTOP-MIE2PNL6\\MSSQL_AXEL;Persist Security Info=True;User ID=CNX_PROJET;Password=***
		this->sSql = "Rien";

		this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
		this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
		this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
		this->oDs = gcnew System::Data::DataSet();

		this->oCmd->CommandType = System::Data::CommandType::Text;
	}
	System::Data::DataSet^ CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
	{
		//std::cout << "on est bien dans la partie( NS_Comp_Data::CLcad::getRows )" << std::endl;
		this->oDs->Clear();
		this->sSql = sSql;
		this->oCmd->CommandText = this->sSql;
		this->oDA->SelectCommand = this->oCmd;
		this->oDA->Fill(this->oDs, sDataTableName);

		return this->oDs;
	}
	void CLcad::actionRows(System::String^ sSql)
	{
		this->sSql = sSql;
		this->oCmd->CommandText = this->sSql;
		this->oDA->SelectCommand = this->oCmd;
		this->oCnx->Open();
		this->oCmd->ExecuteNonQuery();
		this->oCnx->Close();
	}
}