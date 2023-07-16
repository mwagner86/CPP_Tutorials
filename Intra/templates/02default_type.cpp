#include <iostream>
#include "Vertex.class.tpp"

int main ( void ) {
	Vertex< int >		v1 ( 12, 23, 42);
	Vertex<>			v2 (12, 23, 42); // syntax allowing to use the default type

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}