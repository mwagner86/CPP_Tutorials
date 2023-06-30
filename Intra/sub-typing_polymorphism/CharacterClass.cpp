#include <string>
#include <iostream>

class Character {

public:
	virtual void sayHello(std::string const & target);
};

class Warrior : public Character {

public:
	virtual void sayHello(std::string const & target);
};

class Cat {

};

void Character::sayHello(const std::string &target) {
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(const std::string &target) {
	std::cout <<"Fuck off " << target << ", I don't like you !" << std::endl;
}

int main() {
	// This is OK, obviously, Warrior IS a Warrior
	Warrior*	a = new Warrior();

	// This is also OK because Warrior is a Character
	Character* b = new Warrior();

	// This would NOT be ok, because Character IS NOT a Warrior
	// Although they are related and W is-a C, the reverse is untrue.
	//Warrior*	c = new Character();

	// This would also NOT be ok, because Chat IS NOT a Character
	// They are not related.
	//Character*	d = new Cat();

	a->sayHello("Students");

	b->sayHello("Students");
	// if you don't make use the virtual keyword for the method sayHello, compiler will use the Character
	// ( base class ) version of the function.

	// a virtual member function : method
	// a member function which resolution will be dynamic and be done during execution
}