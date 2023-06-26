#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {

public:

	Sample( void );									// Canonical
	Sample( int const n );
	Sample( Sample const & src );					// Canonical Copy Constructor taking as a parameter an instance of the class we're defining to make a copy of the class
	~Sample( void );

	Sample &		operator=( Sample const & rhs );	// Canonical

	int 	getFoo( void ) const;

private:

	int 	_foo;

};


std::ostream &		operator<<( std::ostream & o, Sample const & i );


#endif
