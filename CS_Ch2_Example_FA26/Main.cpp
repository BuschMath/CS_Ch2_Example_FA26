#include <iostream>

// Function prototype
void exampleFunction();

int main()
{
	std::cout << "Before calling the function." << std::endl;
	// Call the function
	exampleFunction();
	std::cout << "After calling the function." << std::endl;

	return 0;
}

// Function definition
void exampleFunction()
{
	std::cout << "Inside the function." << std::endl;
}