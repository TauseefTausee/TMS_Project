#ifndef TMS_H
#define TMS_H

#include "Service.h"
#include "Name.h"
#include "Date.h"
#include "mTime.h"

class TMS {
private:
    Service **services;
    int serviceCount;

public:
    TMS();
    ~TMS();
    void addService(Service* s);
    void displayAllServices() const;
};

#endif
