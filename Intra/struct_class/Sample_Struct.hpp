#ifndef SAMPLE_STRUCT_H
# define SAMPLE_STRUCT_H

struct Sample1 {

	int	foo;

	Sample1( void );
	~Sample1( void );

	void	bar( void ) const;
};

#endif

// private or public is not specified
// the scope of a structure is public by default
