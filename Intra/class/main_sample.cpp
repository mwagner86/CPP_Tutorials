#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int	main()	{

	// naive approach
	Sample1 instance1( 'a', 42, 4.2f );
	Sample1 instance2( 'z', 21, 3.14f );

	// init list
	Sample2 instance3( 'a', 42, 4.2f );
	Sample2 instance4( 'z', 21, 3.14f );

	return 0;
}


// TAKEAWAY:
// USE INITIALISATION LISTS OF EXAMPLE2