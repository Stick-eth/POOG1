#pragma once
#include "pch.h"

using namespace Comp_Mappage;

namespace Comp_Services
{
	ref class CLserviceArticle:CLservice
	{
	private:
		CLarticle^ article;
	public:
		virtual void Creer(System::String^ a,System::String^ b,float c,float d,int e,int f,int g,int h,int i) override;
		virtual void Modifier(int id, System::String^ a, System::String^ b, float c, float d, int e, int f, int g, int h, int i) override;
		virtual void Supprimer(int id) override;
		System::Data::DataSet^ Afficher(int id) override;
	};
}