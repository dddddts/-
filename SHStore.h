#pragma once
#include "PizzaStore.h"
class SHStore :
	public PizzaStore
{
public:
	virtual Pizza* CreatePizza(PizzaType type) {
		switch (type)
		{
		case CDF:
			std::cout << "SHCDF" << std::endl;
			return new CDFPizza;
			break;
		case KLM:
			std::cout << "SHKLM" << std::endl;
			return new KLMPizza;
			break;
		default:
			break;
		}
	}
};

