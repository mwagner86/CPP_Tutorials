#include <iostream>
#include "Visibility.class.hpp"

int	main() {

	Sample instance;
	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;

// What's commented out will cause compilation errors, because of the private member attribute
//	instance._privateFoo = 42;
//	std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
//	instance._privateBar();

	return 0;
}


// Takeaway:
// Try to make only parts of the program public that needs to be accessed by the user
// Try to make as much of the code private, if it doesn't have to do anything with the user