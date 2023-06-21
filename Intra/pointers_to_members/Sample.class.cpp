#include <iostream>
#include "Sample.class.hpp"

// Constructor
Sample::Sample() : foo (0) {
	std::cout << "Constructor called" << std::endl;
	return;
}

// Destructor
Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar() const {
	std::cout << "Member function bar called" << std::endl;
	return;
}
