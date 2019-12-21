#pragma once
#include<iostream>

class Pizza
{
public:
	virtual void Show() {
		std::cout << "pizza father" <<std::endl;
	}
};

