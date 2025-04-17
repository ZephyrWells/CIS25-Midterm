#include <iostream>
using namespace std;

int main() {
    int number = 10;
    if (number == 20) { // = -> ==
        cout << "Number is 20" << endl;
    }
    else {
        cout << "Number is not 20" << endl;
    }

    for (int i = 0; i <= 5; i++) // removed semicolon
    { // added curly brackets
        cout << i << endl;
    } // added curly brackets

    return 0;
}
