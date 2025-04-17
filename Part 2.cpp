#include <iostream>

using namespace std;

int main()
{
	for (int i = 2; i <= 50; i = i + 2) // counter starts at two and increases by two everytime
	{
		cout << i << ' '; // printing whatever the counter is at
	}
	cout << endl;
	
	int numbers[10] = { 0 }; // populating the array with zeros
	int count = 0;
	while (numbers[9] == 0)
	{
		cout << "Input a number: ";
		cin >> numbers[count]; // replacing each zero with a user input
		count++;
	}
	
	for (int z = 0; z < 10; z++)
	{
		cout << numbers[z] << endl; // iterating through the array and printing each number
	}
	return 0;
}