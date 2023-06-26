#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H_CLASS_H
#include <iostream>

class Integer {

public:

	Integer(  int const n ); // Constructor
	~Integer( void ); // Destructor

	int	getValue( void ) const;

	Integer & 	operator=( Integer const & rhs); // operator overload :: rhs = right hand side
	Integer		operator+( Integer const & rhs) const;


private:
	int _n;
};


std::ostream & operator<<( std::ostream & o, Integer const & rhs );

#endif
