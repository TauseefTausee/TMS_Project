#include "Name.h"
#include <cstring>

Name::Name(const char* fN, const char* lN) {
    fName = new char[strlen(fN) + 1];
    lName = new char[strlen(lN) + 1];
    strcpy(fName, fN);
    strcpy(lName, lN);
}

Name::~Name() {
    delete[] fName;
    delete[] lName;
}

Name::Name(const Name &n) {
    fName = new char[strlen(n.fName) + 1];
    lName = new char[strlen(n.lName) + 1];
    strcpy(fName, n.fName);
    strcpy(lName, n.lName);
}

Name& Name::operator=(const Name &n) {
    if (this != &n) {
        delete[] fName;
        delete[] lName;
        fName = new char[strlen(n.fName) + 1];
        lName = new char[strlen(n.lName) + 1];
        strcpy(fName, n.fName);
        strcpy(lName, n.lName);
    }
    return *this;
}

ostream& operator<<(ostream &out, const Name &n) {
    out << n.fName << " " << n.lName;
    return out;
}
