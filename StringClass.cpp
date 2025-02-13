#include "StringClass.h"
#include <algorithm>
using namespace std;
StringClass::StringClass(const std::string& str) : value(str) {}

int StringClass::getLength() const {
    return value.length();
}

string StringClass::getReversed() const {
    string reversed = value;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string StringClass::getValue() const {
    return value;
}