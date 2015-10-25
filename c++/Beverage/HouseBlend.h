#pragma once
#include"Beverage.h"

class HouseBlend : public Beverage {
private:
public:
	HouseBlend() {
		description = "House Blend Coffee";
	}
	double cost() {
		return .89;
	}
};