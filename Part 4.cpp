#include <iostream>

using namespace std;

int main()
{
	// TASK 1
	// declaring variables
	int num1;
	int num2;
	int num3;

	// getting user input
	cout << "Input 3 numbers" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	// nested if statements checking if one number is bigger than the other two
	if (num1 > num2) {
		if (num1 > num3) {
			cout << num1 << " is the largest";
		}
	}
	if (num2 > num1) {
		if (num2 > num3) {
			cout << num2 << " is the largest";
		}
	}
	if (num3 > num1) {
		if (num3 > num2) {
			cout << num3 << " is the largest";
		}
	}
	if (num1 == num2) {
		if (num2 == num3) {
			cout << "They are all equal";
		}
	}
	cout << endl << endl;

	// TASK 2
	int year;

	// getting user input
	cout << "Input a year: ";
	cin >> year;

	// checking to see if a year is divisible by four, as all leap years are
	if (year % 4 == 0) {
		cout << year << " is a leap year!";
	}
	else {
		cout << year << " is not a leap year";
	}

	return 0;
}