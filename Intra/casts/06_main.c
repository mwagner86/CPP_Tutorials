#include <stdio.h>


/* 
// c_type_reinterpretation
int main (void)
{
	float	a = 420.042f; 	// Ref value

	void * b = &a;			// Implicit reinterpretation cast
	void * c = (void *) &a;	// Explicit reinterpretation cast

	void *	d = &a;			// Implicit promotion -> OK
	int	*	e = d;			// Implicitit demotion -> Hazardous 	
	int *	f = (int *)d;	// Explicit demotion -> OK, I obey : Always use the Explicit syntax, if you wanna demote.


	printf ( "%p, %f\n", &a, a);

	printf ( "%p\n", b );
	printf ( "%p\n", c );

	printf ( "%p\n", d );
	printf ( "%p, %d\n", e, *e );
	printf ( "%p, %d\n", f, *f );

	return (0);
}
 */

// c_type_qualifier_reinterpretation

int main (void)
{
	int			a = 42; 						// Ref value

	int const * b = &a;					// Implicit type qualifier cast
	int const * c = (int const *) &a;	// Explicit type qualifier cast

	int const *	d = &a;					// Implicit promotion -> OK
	int	*	e = d;						// Implicitit demotion -> Wont work	
	int *	f = (int *)d;				// Explicit demotion -> OK, I obey : Always use the Explicit syntax, if you wanna demote.

	return (0);
}
