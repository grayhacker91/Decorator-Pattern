#pragma once
#include<iostream>
#include<string>

using namespace std;

class Window {
private:
public:
	virtual void draw() = 0;
	virtual string getDescription()=0;
};