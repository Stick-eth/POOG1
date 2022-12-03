#include "CLremise.h"

namespace Comp_Mappage
{
	void CLremise::setid_remise(int newid)
	{
		this->id_remise = newid;
	}

	void CLremise::setnom_remise(System::String^ newnom)
	{
		this->nom_remise = newnom;
	}

	void CLremise::setvaleur(float newval)
	{
		this->valeur = newval;
	}
	
	int CLremise::getid_remise(void)
	{
		return this->id_remise;
	}

	System::String^ CLremise::getnom_remise(void)
	{
		return this->nom_remise;
	}

	float CLremise::getvaleur(void)
	{
		return this->valeur;
	}
}
