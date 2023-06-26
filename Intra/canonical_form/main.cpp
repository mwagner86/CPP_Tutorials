#include <iostream>
#include "CanonicalClass.hpp"

int main() {

	Sample	instance1;
	Sample	instance2 ( 42);
	Sample	instance3 ( instance1 );

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2; // overloaded operator is used
	std::cout << instance3 << std::endl;

	return 0;
}
