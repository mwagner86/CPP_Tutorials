#pragma once
#ifndef TEMPLATE_CLASS_H
# define TEMPLATE_CLASS_H
#include <iostream>

class Template {

public:

	Template();
	Template(int const n);
	Template(Template const & src);
	~Template();

	Template &			operator=( Template const & rhs );
	void				setFoo(int value);
	int 				getFoo(void) const;
	void				setName(std::string name);
	std::string	const & getName(void) const;

private:

	int 				_foo;
	std::string			_name;

};

std::ostream &		operator<<( std::ostream & o, Template const & i );

#endif
