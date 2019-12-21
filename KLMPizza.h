#pragma once
#include "Pizza.h"
class KLMPizza :
	public Pizza
{
public:
	void Show() {
		std::cout << "我是一个烤冷面pizza" << std::endl;
	}
};

