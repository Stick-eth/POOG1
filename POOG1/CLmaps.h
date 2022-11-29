#pragma once
namespace Comp_Mappage
{

	ref class CLmaps
	{
	public:
		virtual System::String Select() = 0;
		virtual System::String Insert() = 0;
		virtual System::String Delete() = 0;
		virtual System::String Update() = 0;
	};

}