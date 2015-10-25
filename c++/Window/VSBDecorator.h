#pragma once
#include"WindowDecorator.h"

class VSBDecorator : public WindowDecorator {
private:
public:
	VSBDecorator(Window *window) : WindowDecorator(window){
	}
	void draw() {
		WindowDecorator::draw();
		//추가기능 수행
	}
	string getDescription() {
		return WindowDecorator::getDescription().append(", including vertical scrollbars");
	}
};