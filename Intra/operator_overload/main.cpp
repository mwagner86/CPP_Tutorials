/*

+( 1, 1 ) prefix notation or functional notation
1.+( 1 )

1 + 1 infix notation
1 1 + postfix notation (poetry verse notation?)*/

#include <iostream>
#include "Integer.class.hpp"

int	main() {
	Integer		x( 30 );
	Integer		y( 10 );
	Integer		z( 0 );

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	y = Integer ( 12 );
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return 0;
}