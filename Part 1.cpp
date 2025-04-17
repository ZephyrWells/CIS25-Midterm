#include <iostream>

using namespace std;

// initializing functions
float calculateArea(float length, float width);
bool isPrime(int number);

int main()
{
	// calling functions
	cout << calculateArea(4.5, 21.4) << endl;
	cout << isPrime(29);

	return 0;
}

float calculateArea(float length, float width)
{
	float area; // initializing variable

	area = length * width; // mulitplying length by width

	return area;
}

bool isPrime(int number)
{
	bool prime = true;

	for (int i = 2; i < number; i++) // iterating through all numbers from 2 to the chosen number
	{
		if (number % i == 0) // checking if the remained is zero
		{
			prime = false;
			break;
		}
	}
	return prime;
}