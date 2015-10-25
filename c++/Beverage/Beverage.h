#pragma once
#include<iostream>
#include<string>

using namespace std;

class Beverage {
protected:
	string description;
public:
	virtual string getDescription() {
		return description;
	}
	virtual double cost()=0;
};