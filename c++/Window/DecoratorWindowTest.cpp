#include"Window.h"
#include"HSBDecorator.h"
#include"VSBDecorator.h"
#include"SimpleWindow.h"

int main() {
	Window *window = new HSBDecorator(new VSBDecorator(new SimpleWindow()));
	cout << window->getDescription() << endl;
	return 0;
}