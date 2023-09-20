#include <iostream>
#include <array>
#include <chrono>

#include <algorithm>
#include <vector>

int main () {

/*	std::array<int, 10> b;

	for (int i = 0; i < 10; i++) {
		b[i] = something();
	}

	for (int i = 0; i < b.size(); i++) {
		b[i] = something();
	}

	for (std::array<int, 10>::iterator i = b.begin(); i != b.end(); ++i) {
		*i = something();
	}

	for (auto i = b.begin(); i != b.end(); ++i) { // modern c++ syntax using the auto keyword
		*i = something();
	}

	for (auto& i : b) { // ranged for loop
		i = something();
	}

	std::fill(b.begin(), b.end(), something());

	b = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};*/


	// Lambda function to roll a die
	auto roll = []() {
		return rand() % 6 + 1;
	};

	// Create Container
	std::vector<int> container;

	// Add 1 item
	container.push_back(roll());
	const int* pAddressOfOriginalItemZero = &(*container.begin());

	std::chrono::duration<double> durInsertTime(0);

	do
	{
		// Get Address of first item
		const int* pAddressOfItemZero = &(*container.begin());

		std::cout << "Contains " << container.size() << " elements, took " <<
		std::chrono::duration_cast<std::chrono::microseconds>(durInsertTime).count() << "us\n";

		for (const auto& i : container)
		{
			const int* pAddressOfItemX = &i;
			int pItemOffset = pAddressOfItemX - pAddressOfItemZero;
			int pItemOffsetOriginal = pAddressOfItemX - pAddressOfItemZero;
			std::cout << "Offset From Original: " << pItemOffsetOriginal << "  Offset From Zero: " << pItemOffset << "  Content: " << i << std::endl;
		}

		auto tp1 = std::chrono::high_resolution_clock::now();
		container.push_back(roll());
		auto tp2 = std::chrono::high_resolution_clock::now();
		durInsertTime = (tp2 - tp1);
	} while (getc(stdin));

	return 0;
}
