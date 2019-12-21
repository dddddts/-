#pragma once
#include "Pizza.h"
class CDFPizza :
	public Pizza
{
public:
	void Show() {
		std::cout << "我是一个臭豆腐pizza"<<std::endl;
	}
};

