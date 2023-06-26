

#include <iostream>
#include <fstream>

int main() {
	// ifstream = inputfilestream
	std::ifstream	ifs("numbers");
	unsigned int	dst = 8;
	unsigned int	dst2 = 12;

	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	// ofstream = outputfilestream
	std::ofstream ofs("test.out");
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
}