int main ( void ) {
	int					a = 42;							// Reference value

	int const *			b = &a;							// Implicit promotion -> OK
	int *				c = b;							// Implicit demotion -> NO!
	int *				d = const_cast<int *>(b);		// Explicit demotion -> OK, I obey

	return 0;
}
