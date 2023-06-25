#include <iostream>
#include <string>

class Student {
private:
	std::string _login;

public:
	Student(std::string const & login) : _login(login) {
	}

	std::string&	getLoginRef() {
		return this->_login;
	}

	std::string const &	getLoginRefConst() const {
		return this->_login;
	}

	std::string*	getLoginPtr() {
		return &(this->_login);
	}

	std::string const * getLoginPtrConst() const {
		return &(this->_login);
	}

/*	~Student(){
		std::cout << "Student " << this->_login << " died" << std::endl;
	}*/
};

int	main() {
	Student			bob = Student("bfubar");
	Student const 	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl; 			// you may use const on both the student
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl; 	// using a const function on a non const variable is not a problem
																								// however afterward you won't be able to change jim's login as it is constants

	bob.getLoginRef() = "bobfubar"; // assign bobfubar to this return. like using a pointer on this login
									// Dereferences it, then assigns it
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}

// Use-case Example for Pointers and References:
// Create a character class that may have a weapon or not. A weapon that won't always be here.
// If you reference it at the beginning it can never change.
// In this case you need a pointer. Using a pointer you're able to point at something that doesn't exist at the beginning
// you're able to point at different "weapons" or not have a weapon again by pointing at NULL.