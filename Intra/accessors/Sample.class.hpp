#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample( void ); // Constructor
	~Sample( void ); // Destructor

	int		getFoo( void ) const; 	// Getter Function
	void	setFoo( int v );		// Setter Function

private:

	int _foo;
};

#endif
