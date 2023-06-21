#include <iostream>
#include "Const.class.hpp"

// Constructor
// This is a very naive approach and even though it works,
// it should be avoided. Use the syntax of Sample2 instead.
ConstClass::ConstClass( float const f ) : pi ( f ), qd ( 42 ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

// Destructor
ConstClass::~ConstClass() {

	std::cout << "Destructor called" << std::endl;
	return;
}

void ConstClass::bar( void ) const {

	std::cout << "this-> pi = " << this-> pi << std::endl;
	std::cout << "this-> qd = " << this-> qd << std::endl;

	return;
}