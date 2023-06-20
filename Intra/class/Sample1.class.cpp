#include <iostream>
#include "Sample1.class.hpp"

// Constructor
// This is a very naive approach and even though it works,
// it should be avoided. Use the syntax of Sample2 instead.
Sample1::Sample1( char p1, int p2, float p3 ) {
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return;
}

// Destructor
Sample1::~Sample1( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}
