# include <iostream>

using namespace std;

int main() {
	float num1;
	float num2;
	int choice;
	float total;

	cout << "Input two numbers" << endl;
	cin >> num1 >> num2;
	cout << "What process would you like to preform?" << endl << endl;
	cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << endl;
	cin >> choice;
	cout << endl;

	switch (choice) {
	case 1:
		total = num1 + num2;
		break;

	case 2:
		total = num1 - num2;
		break;

	case 3:
		total = num1 * num2;
		break;

	case 4:
		total = num1 / num2;
		break;
	}

	cout << "Answer: " << total;
	
	return 0;
}