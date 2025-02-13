#ifndef STRINGCLASS_H
#define STRINGCLASS_H

#include <string>
using namespace std;

class StringClass {
private:
    string value;
public:
    StringClass(const string& str);
    
    int getLength() const;
    string getReversed() const;
    string getValue() const;
};

#endif // STRINGCLASS_H