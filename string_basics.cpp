/*******************************************************************************
*
* Program: String type Basics
*
* Description: The basics of using the string type in C++.
*
* YouTube Lesson: https://www.youtube.com/watch?v=-5xVrsBguHg
*
* Author: Kevin Browne @ https://portfoliocourses.com
*
*******************************************************************************/

#include <iostream>

// even though some C++ implementations will automatically include the string
// library for us, we should still include it to make our program more portable
#include <string>


int main()
{
	// create a string variable called test1, assign a string literal to it
	std::string test1 = "abcdefghi";

	// we can output strings using cout and <<
	std::cout << test1 << std::endl;

	// output the size of the string (i.e. number of characters)
	std::cout << "size: " << test1.size() << std::endl;

	// we can access individual characters at each index in the string with []
	// and .at()
	std::cout << "test1[1]: " << test1[1] << std::endl;
	std::cout << "test1.at(3): " << test1.at(3) << std::endl;

	// we can modify individual characters in the string with the [] syntax too
	test1[2] = 'C';
	std::cout << test1 << std::endl;

	// there are several ways to concatenate and append strings
	test1 = test1 + "jklmnop";
	test1 += "qrstu";
	test1.append("vwxyz");
	std::cout << test1 << std::endl;

	// the length() function is a synonym for size(), it returns the same value
	std::cout << "length: " << test1.length() << std::endl;

	// we can create more string type variables
	std::string test2 = "123";
	std::string test3;

	// we can concatenate string variables, not just string literals
	test3 = test1 + test2;
	std::cout << "test3: " << test3 << std::endl;

	// empty() will check if a string is empty (test3 should not be)
	if (test3.empty()) std::cout << "test3 is empty" << std::endl;
	else std::cout << "test3 is not empty" << std::endl;

	// clear() will make a string empty
	test3.clear();
	std::cout << "test3: " << test3 << std::endl;

	// test3 should now be empty!
	if (test3.empty()) std::cout << "test3 is empty" << std::endl;
	else std::cout << "test3 is not empty" << std::endl;

	// we can convert values like ints and doubles to strings using to_string()
	// CAVE C++ 11 and upwards
	std::string test4 = std::to_string(-10.5);
	std::cout << test4 << std::endl;

	// we can convert double values to strings using stod(), other functions
	// exist to convert other types as well
	// CAVE C++ 11 and upwards
	double number = stod(test4);
	std::cout << "number: " << number << std::endl;

	// many functions exist for working with strings, for example we can
	// extract a substring from a string using substr, which in this case
	// extracts 4 characters starting from the character at index 2 (i.e. "test")
	std::string test5 = "A test string";
	std::string sub = test5.substr(2,4);
	std::cout << "sub: " << sub << std::endl;

	// we can store use input into a string type variable, for example a name
	std::string name;
	std::cout << "Enter name: ";

	// will only store the string up until the first space character, so a
	// name like 'kevin browne' will only be stored as 'kevin' into name
	//cin >> name;

	// will store the string up until the first newline character into name,
	// so a name like 'kevin browne' will be stored entirely
	getline(std::cin, name);

	// output the name
	std::cout << "Name: " << name << std::endl;

	return 0;
}