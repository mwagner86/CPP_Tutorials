#include <string>

class Animal {

private:
	int	_numberOfLegs;

public:
	Animal();
	Animal(Animal const &);
	Animal& operator=(Animal const &);
	~Animal();

	void	run(int distance);
	void	call();
	void	eat(std::string const & what);
	void	Walk(int distance);
};

class Cat : public Animal {

public:
	Cat();
	Cat(Cat const &);
	Cat& operator=(Cat const &);
	~Cat();

	void scornSomeone(std::string const & target);
};

class Otter : public Animal {

public:
	Otter();
	Otter(Cat const &);
	Otter& operator=(Otter const &);
	~Otter();
};

class Pony : Animal {

public:
	Pony();
	Pony(Cat const &);
	Pony& operator=(Pony const &);
	~Pony();

	void 	doMagic(std::string const & target);
	void 	run(int distance); // would replace the run function in Animal
};
