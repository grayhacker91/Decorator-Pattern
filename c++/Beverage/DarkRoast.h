#pragma once
#include"Beverage.h"

class DarkRoast : public Beverage {
private:
public:
	DarkRoast() {
		description = "Dark Roast Coffee";
	}
	double cost() {
		return .99;
	}
};