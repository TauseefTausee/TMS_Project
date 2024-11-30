#include "TMS.h"
#include "Service.h"

int main() {
    TMS system;

    Service* ride1 = new Service("City A", "City B", 100, 10.5);
    Service* delivery1 = new Service("Warehouse", "Shop", 50, 8.0);

    system.addService(ride1);
    system.addService(delivery1);

    system.displayAllServices();

    return 0;
}
