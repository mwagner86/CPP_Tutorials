int main ( void ) {
	float 		a = 420.042f; 						// Ref Value

	void * 		b = &a;								// Implicit promotion -> OK
	int *		c = reinterpret_cast<int *>(b);		// Explicit demotion -> OK, I obey
	int & 		d = reinterpret_cast<int &>(b);		// Explicit demotion -> OK, I obey

	return 0;
}