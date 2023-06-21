#include <iostream>
#include "Sample.class.hpp"

void	f0()
{
	Sample instance;
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
}

void	f1()
{
	Sample instance;
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f0();
}

int	main()
{
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return 0;
}
