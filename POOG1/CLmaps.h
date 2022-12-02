#pragma once
namespace Comp_Mappage
{
	ref class CLmaps
	{
	public:
		virtual System::String Select(int) = 0;
		virtual System::String Insert(void) = 0;
		virtual System::String Delete(void) = 0;
		virtual System::String Update(void) = 0;
	};
}

/* SELECT * FROM CLIENT WHERE CUSTOMER_ID = @hgk (le nom c'est SALUT)

execute SALUT @hgk 25;



*/