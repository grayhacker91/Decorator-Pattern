#pragma once
#include"Beverage.h"
#include"CondimentDecorator.h"

class Soy : public CondimentDecorator {
private:
	Beverage *beverage;
public:
	Soy(Beverage *beverage) {
		this->beverage = beverage;
	}
	string getDescription() {
		string s = beverage->getDescription().append(", Soy");
		return s;
	}
	double cost() {
		double d = 0.15 + beverage->cost();
		return d;
	}
};