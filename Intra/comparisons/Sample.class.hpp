#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample( int v ); // Constructor
	~Sample( void ); // Destructor

	void	setFoo( int v );		// Setter Function
	int		getFoo( void ) const; 	// Getter Function
	int		compare(Sample * other) const;		// compare function

private:

	int _foo;
};

#endif
