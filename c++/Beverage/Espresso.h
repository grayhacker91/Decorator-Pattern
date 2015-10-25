#pragma once
#include"Beverage.h"

class Espresso : public Beverage {
private:
public:
	Espresso() {
		description = "Espresso";
	}
	double cost() {
		return 1.99;
	}
};