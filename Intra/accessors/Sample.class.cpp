#include <iostream>
#include "Sample.class.hpp"

// Constructor
Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return;
}

// Destructor
Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int Sample::getFoo(void) const
{
	return this->_foo;
}

// assign value only if the user input is >= 0
void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "Error: no negative value allowed\n";
	return;
}
