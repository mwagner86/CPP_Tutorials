#include <iostream>

// Overviw:
/* int main (void) {

	int	a = 42;							// Reference value

	double	b = a;						// Implicit promotion -> OK
	int		c = b;						// Implicit demotion -> Hell no!
	int		d = static_cast<int>(b);	// Explicit demotion -> Ok, i obey 
	// (" I wanna make a static cast of the b expression to the int type")

	return (0);
} */


class Parent					{};
class Child1 : public Parent 	{};
class Child2 : public Parent	{};

class Unrelated					{};


int main (void) {


	Child1	 		a;									// Reference value

	Parent *		b = &a;								// Implicit upcast	-> OK
	Child1 *		c = b; 								// Implicit downcast -> NO! : Wont compile
	Child2 *		d = static_cast<Child2 *>(b); 		// Explicit downcast -> Ok, I Obey

	Unrelated * 	e = static_cast<Unrelated *>(&a); 	// Explicit conversion -> NO! : Wont compile

	return 0;
}

// g++ -Wall -Wextra -Wno-unused -Werror 00static_cast.cpp