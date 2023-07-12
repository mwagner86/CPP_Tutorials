#include <iostream>

class Foo {

public:

	Foo ( float const v) : _v ( v ) { }

	float getV ( void )				{ return this->_v; }

	operator float()				{ return this->_v; }
	operator int()					{ return static_cast<int>( this->_v ); }

private:

	float _v;

};

// thanks to cast operators we are able to initalize float b directly from our a instance.
// compiler will check for float operators, and since we have one, it will use it.
// same for the implicit cast c = a : it uses the int type cast operator.
int	main ( void ) {
	Foo		a( 420.024f );
	float	b = a;
	int		c = a;

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}
