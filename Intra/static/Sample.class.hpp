#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(); // Constructor
	~Sample(); // Destructor

	static int	getNbInst(); // non Member function

private:

	static int	_nbInst; // non Member attribute to keep track of the no of Instances
};

#endif
