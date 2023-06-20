#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	int publicFoo;

	Sample( void );
	~Sample( void );

	void publicBar( void ) const;

private:
	// internal to my class, not accessible by a user
	// use _ prefix for private Identifiers: Naming convention

	int _privateFoo;

	void _privateBar( void ) const;

};

#endif
