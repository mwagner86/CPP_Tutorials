#include <string>
// Can access name, run() and legs
class Quadruped {


private:
	std::string	_name; // Only accessible from Quadruped object

protected:
	Leg			legs[4]; // Accessible from a Quadruped or derived object

public:
	void		run(); // Accessible from wherever
};

// Can access run() and legs: since it's a child class of Quadruped.
class Dog : public Quadruped {

};

// Can only access run()
int main() {};
