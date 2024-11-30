#include "mTime.h"

mTime::mTime(int h, int m, int s) : hour(h), min(m), sec(s) {}

void mTime::setTime(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
}

void mTime::display() const {
    cout << hour << ":" << min << ":" << sec << endl;
}
