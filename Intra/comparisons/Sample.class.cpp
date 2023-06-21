#include <iostream>
#include "Sample.class.hpp"

// Constructor
Sample::Sample(int v) {
	std::cout << "Constructor called" << std::endl;

	this->setFoo(42);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return;
}

// Destructor
Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "Error: no negative value allowed\n";
	return;
}

int Sample::getFoo(void) const
{
	return this->_foo;
}


int	Sample::compare(Sample * other) const
{
	if (this->_foo < other->getFoo() )
		return -1;
	else if (this->_foo > other->getFoo() )
		return 1;

	return 0;
}

// Damn would it be helpful, if they would actually show the code in the intra videos...