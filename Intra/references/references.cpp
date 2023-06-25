//a reference is a pointer that is constant and never unreferenced
// below and example of pointer manipulation and the difference to reference

#include <iostream>

int main(){
	int	numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls; 	// with a reference you assign the variable directly
										// -> the reference will be pointing at this variable
										// it's always pointing at the same item.
										// you can't create an uninitialized reference
										// since it can't point on nothing

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	// ballsRef is like an ALIAS for numberOfBalls

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
}
