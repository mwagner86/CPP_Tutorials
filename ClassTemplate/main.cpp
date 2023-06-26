#include <iostream>
#include "TemplateClass.hpp"

int main() {

	Template	instance1;
	Template	instance2 ( 42);
	Template	instance3 ( instance1 );

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}
