#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample2 {

	int	foo;

	Sample2( void );
	~Sample2( void );

	void	bar( void ) const;
};

#endif

// private or public is not specified
// the scope of a class is private by default
// preferably use classes, since it's private by default even if you don't set it
// better control