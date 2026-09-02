#include <iostream>

// Function prototype
void exampleFunction();
int modifyValue(int value);

int main()
{
	std::cout << "Before calling the function." << std::endl;
	// Call the function
	exampleFunction();
	std::cout << "After calling the function." << std::endl;

	std::cout << "We are modifying the value of 5. It is now: " << modifyValue(5) << std::endl;

	return 0;
}

// Function definition
void exampleFunction()
{
	std::cout << "Inside the function." << std::endl;
}

int modifyValue(int value)
{
	value = value * value * value;

	return value;
}