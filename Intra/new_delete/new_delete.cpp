#include <iostream>
#include <string>

class Student {
private:
	std::string _login;

public:
	Student(std::string login) : _login(login){
		std::cout << "Student " << this->_login << " is born" << std::endl;
	}
	~Student(){
		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int	main() {
	Student		bob = Student("bfubar"); // student allocated on the stack, deallocated when the stack is cleaned up
	Student* 	jim = new Student("jfubar"); // student dynamically allocated on the heap with new

	// Do some stuff here

	delete jim; // jim is destroyed deallocated with delete

	return (0); // bob is destroyed
}