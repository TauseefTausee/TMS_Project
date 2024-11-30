#ifndef MTIME_H
#define MTIME_H

#include <iostream>
using namespace std;

class mTime {
private:
    int hour, min, sec;
public:
    mTime(int h = 0, int m = 0, int s = 0);
    void setTime(int h, int m, int s);
    void display() const;
};

#endif
