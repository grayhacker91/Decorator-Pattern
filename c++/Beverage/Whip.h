#pragma once
#include"Beverage.h"
#include"CondimentDecorator.h"

class Whip : public CondimentDecorator {
private:
	Beverage *beverage;
public:
	Whip(Beverage *beverage) {
		this->beverage = beverage;
	}
	string getDescription() {
		string s = beverage->getDescription().append(", Whip");
		return s;
	}
	double cost() {
		double d = 0.10 + beverage->cost();
		return d;
	}
};