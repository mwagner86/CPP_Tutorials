#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample( void ); // Constructor
	~Sample( void ); // Destructor

	void	bar(char const c ) const;
	void	bar( int const n ) const;
	void 	bar( double const z ) const;
	void	bar( Sample const & i ) const;

};

#endif


// function overloading works on any function, not only class function.
// specialize the process of function based on its parameters