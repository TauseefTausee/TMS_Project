#ifndef SERVICE_H
#define SERVICE_H

#include "Date.h"
#include "mTime.h"

class Service {
protected:
    char *source;
    char *destination;
    float distance; // in km
    Date bookingDate;
    mTime bookingTime;
    bool status; // false for pending, true if complete
    float fuelRate;
    int cId; // Customer ID
    int dId; // Driver ID
    int vId; // Vehicle ID

public:
    Service(const char* src = "", const char* dest = "", float dist = 0.0, float fuel = 0.0);
    virtual ~Service();
    virtual void display() const;
};

#endif
