#pragma once
#include "PizzaStore.h"
class BJStort :
	public PizzaStore
{
public:
	virtual Pizza* CreatePizza(PizzaType type) {
		switch (type)
		{
		case CDF:
			std::cout << "BJCDF" << std::endl;
			return new CDFPizza;
			break;
		case KLM:
			std::cout << "BJKLM" << std::endl;
			return new KLMPizza;
			break;
		default:
			break;
		}
	}
};

