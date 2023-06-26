#include <iostream>
#include "Sample.class.hpp"

// Constructor
Sample::Sample( void ) {
	std::cout << "Constructor called" << std::endl;
	return;
}

// Destructor
Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar (char const c) const {

	std::cout << "Member function bar called with char overload : " << c << std::endl;
	return;
}

void	Sample::bar (int const n ) const {

	std::cout << "Member function bar called with int overload : " << n << std::endl;
	return;
}

void	Sample::bar (double const z) const {

	std::cout << "Member function bar called with float overload : " << z << std::endl;
	return;
}

void	Sample::bar (Sample const & i) const {

	std::cout << "Member function bar called with Sample class overload : " << &i << std::endl;
	return;
}
