#include "TMS.h"
#include <iostream>

TMS::TMS() : serviceCount(0) {
    services = new Service*[20]; // Assume max 20 services
}

TMS::~TMS() {
    for (int i = 0; i < serviceCount; ++i) {
        delete services[i];
    }
    delete[] services;
}

void TMS::addService(Service* s) {
    services[serviceCount++] = s;
}

void TMS::displayAllServices() const {
    for (int i = 0; i < serviceCount; ++i) {
        services[i]->display();
    }
}
