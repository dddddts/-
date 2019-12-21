#pragma once
#include"Pizza.h"
#include"KLMPizza.h"
#include"CDFPizza.h"
enum PizzaType {CDF,KLM};
class PizzaStore
{
public:
	virtual Pizza* CreatePizza(PizzaType type) {
		switch (type)
		{
		case CDF:
			std::cout << "111" << std::endl;
			return new CDFPizza;
			break;
		case KLM:
			std::cout << "222" << std::endl;
			return new KLMPizza;
			break;
		default:
			break;
		}
	}
	void showPizza(PizzaType type) {
		Pizza* p = CreatePizza(type);
		p->Show();
	}
};

