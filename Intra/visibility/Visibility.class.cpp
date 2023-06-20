#include <iostream>
#include "Visibility.class.hpp"

// Constructor
Sample::Sample( void ) {
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 1;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 1;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

// Destructor
Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

// outside Constructor
void	Sample::publicBar( void ) const {

	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar( void ) const {

	std::cout << "Member function _privateBar called" << std::endl;
	return;
}
