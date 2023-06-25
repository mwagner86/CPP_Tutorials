#include <iostream>
#include <string>

class Student {
private:
	std::string _login;

public:
	Student() : _login("ldefautl") {
		std::cout << "Student " << this->_login << " is born" << std::endl;
	}
	~Student(){
		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int	main() {
	// [] = new bracket or new array operator according to intra ;)
	Student* 	Students = new Student[42]; // array of 42 students dynamically allocated on the heap with new

	// Do some stuff here

	delete [] Students; // Array of Students destroyed: deallocated with delete

	return (0);
}
