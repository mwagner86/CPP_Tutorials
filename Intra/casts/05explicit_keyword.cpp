#include <iostream>



class A {};
class B {};

class C {

public:
					C ( A const &_ )	{ return; } // allows us to constract an instace of C from an A class.
		explicit	C ( B const &_ )	{ return; } // explicit keyword prevents the implicit contruction of the instance
};


void	f( C const & _ ) {

	return;
}


int	main ( void ) {

	f ( A() ); 			// Implicit conversion OK : From A to C
	f ( B() );			// Implicit conversion NOT OK, constructor is explicit. Making an implicit conversion wont work.

	return 0;
}