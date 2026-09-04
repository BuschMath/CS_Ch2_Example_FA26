/***********************************************
David Busch
busch@iowacentral.edu
Computer Science Fall 2026
September 4, 2026
Printing customer information to the console using functions.
************************************************/

#include <iostream>
#include <string>

// Global variables. Generally bad practice, but used here for simplicity.
std::string firstName = "John";
std::string lastName = "Doe";
int age = 35;
std::string address = "123 Main Street";

// Function prototypes
// printName() - prints the customer's name
void printName();
// printAge() - prints the customer's age
void printAge();
// printAddress() - prints the customer's address
void printAddress();
// printCustomerInfo() - prints all customer information
void printCustomerInfo();

int main()
{
	printCustomerInfo();

	return 0;
}

void printName() 
{
	std::cout << "Name: " << firstName << " " << lastName << std::endl;
}

void printAge()
{
	std::cout << "Age: " << age << std::endl;
}

void printAddress()
{
	std::cout << "Address: " << address << std::endl;
}

void printCustomerInfo()
{
	printName();
	printAge();
	printAddress();
}