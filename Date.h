#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d = 1, int m = 1, int y = 2000);
    void setDate(int d, int m, int y);
    void display() const;
};

#endif
