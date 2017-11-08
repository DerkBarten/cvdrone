#include "ardrone/ardrone.h"
// 1 battery +- 5min

int main(){
	ARDrone ardrone;
	// Initialize
    if (!ardrone.open()) {
        std::cout << "Failed to initialize." << std::endl;
        return -1;
	}
	
	std::cout << "Battery = " << ardrone.getBatteryPercentage() << "[%]" << std::endl;
	ardrone.takeoff();
	return 0;
}

