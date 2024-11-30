#ifndef NAME_H
#define NAME_H

#include <iostream>
using namespace std;

class Name {
private:
    char *fName;
    char *lName;
public:
    Name(const char* fN = "", const char* lN = "");
    ~Name();
    Name(const Name &n);
    Name& operator=(const Name &n);
    friend ostream& operator<<(ostream &out, const Name &n);
};

#endif
