#pragma once
#include "pch.h"

namespace Comp_Mappage
{
	ref class CLmaps
	{
	public:
		virtual System::String^ Select(int) = 0;
		virtual System::String^ Insert(void) = 0;
		virtual System::String^ Delete(void) = 0;
		virtual System::String^ Update(void) = 0;
	};
}