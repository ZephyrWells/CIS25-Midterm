#include <iostream>

using namespace std;

int main()
{
	string name;
	int age;
	int favNum;

	// getting user info
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "How old are you?" << endl;
	cin >> age;
	cout << "What is your favorite number?" << endl;
	cin >> favNum;

	//printing user info
	cout << "Your name is " << name << ", you are " << age << " years old, and your favorite number is " << favNum << '!' << endl << endl;


	//declaring and initializing each variable
	int apple = 7;
	float banana = 7.7777777;
	char carrot = 's';
	string duck = "seven";

	//printing each variable
	cout << apple << endl;
	cout << banana << endl;
	cout << carrot << endl;
	cout << duck << endl;

	return 0;
}