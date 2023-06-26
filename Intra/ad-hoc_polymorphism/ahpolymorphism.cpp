// also known as function overloading

#include <iostream>
#include "Sample.class.hpp"

int main() {
	Sample overload;

	overload.bar('A');
	overload.bar(10);
	overload.bar(3.14);
	overload.bar(overload);

	return 0;
}

// Jesus these intra videos are horrible...