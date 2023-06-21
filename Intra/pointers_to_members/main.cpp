#include <iostream>
#include "Sample.class.hpp"

int	main()
{
	Sample 		instance;
	Sample * 	instancep = &instance;

	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	// instance directly used
	// update the p pointer with the value 21 with the .* operator
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	// instance not directly used, but a pointer on instance
	// ->* operator
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;
	// instance variable directly used: .*
	(instance.*f)();
	// use pointer on instance of class: ->*f
	(instancep->*f)();

	return 0;
}

