#ifndef CONST_CLASS_H
# define CONST_CLASS_H

class ConstClass {

public:

	float const pi;
	int			qd;

	ConstClass( float const f );
	~ConstClass( void );

	void	bar( void ) const;
};

#endif
