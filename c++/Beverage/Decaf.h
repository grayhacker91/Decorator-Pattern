#pragma once
#include"Beverage.h"

class Decaf : public Beverage {
private:
public:
	Decaf() {
		description = "Decaf Coffee";
	}
	double cost() {
		return 1.05;
	}
};