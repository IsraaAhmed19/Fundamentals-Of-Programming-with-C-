
#include <iostream>
using namespace std;

int main()
{
	// Normal If-Else
	int age = 20;
	cout << "Welcome\n";

	// Check if the age is less than 18
	if (age < 18) // False
	{
		cout << "Accepted\n";
	}
	// Executes when the if condition is false
	else
	{
		cout << "Rejected\n";
	}

	// Nested If
	int salary = 15000;

	// Check if the salary is less than or equal to 10000
	if (salary <= 10000)
	{
		cout << "you are a rich man" << endl;
	}
	else
	{
		// Check the age only if the salary condition is false
		if (age >= 18)
		{
			cout << "you are an adult" << endl;
		}
		else
		{
			cout << "you are a child" << endl;
		}
	}

	return 0;
}
