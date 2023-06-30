#include <string>
#include <iostream>

// Abstract Class -> naming Convention Prefix A
class ACharacter {

private:
	std::string		name;

public:
	virtual void	attack(std::string const & target) = 0;
	void 			sayHello(std::string const & target);
};

// Parent class doesn't have attack() because it's set to 0. -> hence abstract.
// Child class need to have the attack() function implemented!
class Warrior : public ACharacter {

public:
	virtual void attack(std::string const & target);
};


void ACharacter::sayHello(const std::string &target) {
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(const std::string &target) {
	std::cout << "*attacks " << target << " with a sword" << std::endl;
}

// Interface. Naming convention Prefix I
class ICoffeeMaker {

public:
	virtual void		fillWaterTank(IWaterSource * src) = 0;
	virtual ICoffee*	makeCoffee(std::string const & type) = 0;
};

int main () {
	ACharacter* 	a = new Warrior();


	// This would NOT be ok because ACharacter is abstract
	// ACharacter* b = new ACharacter();

	a->sayHello("students");
	a->attack("roger");
}