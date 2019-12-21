#include<iostream>
#include"BJStort.h"
#include"SHStore.h"
int main() {
	PizzaStore* ps = new BJStort;
	ps->showPizza(CDF);
	ps->showPizza(KLM);
	PizzaStore* sh = new SHStore;
	sh->showPizza(CDF);
	sh->showPizza(KLM);
	system("pause");
}