#include <iostream>
#include "Sample.class.hpp"

// Constructor
Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

// Destructor
Sample::~Sample()
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

int	Sample::getNbInst() {

	return Sample::_nbInst;
}

// initialisation of the non Member attribute: a static attribute
int	Sample::_nbInst = 0;