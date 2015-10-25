#pragma once
#include"WindowDecorator.h"

class HSBDecorator : public WindowDecorator {
private:
public:
	HSBDecorator(Window *window) : WindowDecorator(window) {
	}
	void draw() {
		WindowDecorator::draw();
		//�߰���� ����
	}
	string getDescription() {
		return WindowDecorator::getDescription().append(", including horizontal scrollbars");
	}
};