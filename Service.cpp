#include "Service.h"
#include <iostream>
#include <cstring>

Service::Service(const char* src, const char* dest, float dist, float fuel) 
    : distance(dist), fuelRate(fuel), status(false), cId(-1), dId(-1), vId(-1) {
    source = new char[strlen(src) + 1];
    destination = new char[strlen(dest) + 1];
    strcpy(source, src);
    strcpy(destination, dest);
}

Service::~Service() {
    delete[] source;
    delete[] destination;
}

void Service::display() const {
    cout << "Source: " << source << ", Destination: " << destination 
         << ", Distance: " << distance << " km, Status: " 
         << (status ? "Complete" : "Pending") << endl;
}
