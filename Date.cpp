#include "Date.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

void Date::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::display() const {
    cout << day << "/" << month << "/" << year << endl;
}
