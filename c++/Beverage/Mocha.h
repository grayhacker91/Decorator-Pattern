#pragma once
#include"Beverage.h"
#include"CondimentDecorator.h"

class Mocha : public CondimentDecorator {
private:
	Beverage *beverage;
public:
	Mocha(Beverage *beverage) {
		this->beverage = beverage;
	}
	string getDescription() {
		return beverage->getDescription().append(", Mocha");
	}
	double cost() {
		double d = 0.20 + beverage->cost();
		return d;
	}
};