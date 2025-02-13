#include <iostream>
#include "StringClass.h"
 using namespace std;
 
int main() {
    string input;
    cout << "Enter line: ";
    getline(cin, input);

    StringClass myString(input);

    cout << "your line: " << myString.getValue() << endl;
    cout << "length: " << myString.getLength() << endl;
    cout << "reverse line: " << myString.getReversed() << endl;

    return 0;
}
