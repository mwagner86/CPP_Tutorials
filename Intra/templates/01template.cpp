#include <iostream>

template < typename T >
class List {

public:

	List<T>( T const & content ) {
		// etc...
	}
	List<T>( List<T> const & list) {
		// etc...
	}
	~List<T> ( void ) {
		// etc...
	}

	// etc...

private:
	T *			_content;
	List<T> * 	_next;

};

int main ( void ) {
	List < int >			a(42);
	List < float >			b(3.14f);
	List < List < int > >	c(a); // 2-dimensional list ( a list of list ) in a single line.

	// etc...
	return 0;
}