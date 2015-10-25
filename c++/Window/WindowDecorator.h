#pragma once
#include"Window.h"

using namespace std;

class WindowDecorator : public Window {
protected:
	Window *window;
public:
	WindowDecorator(Window *window) {
		this->window = window;
	}
	void draw() {
		window->draw();
	}
	string getDescription() {
		return window->getDescription();
	}
};