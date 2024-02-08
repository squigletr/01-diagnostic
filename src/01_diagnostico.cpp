#include <iostream>
#include <string>

enum steeringType {
	wheel,
	handlebar,
	rudder,
	rail,
	yoke,
	rc,
	body
};

enum specialVehicleType {
	NA,
	golfCart,
	NEV,
	ROV,
	UTV,
};

enum powerSourceType {
	gas,
	electric,
	hybrid,
	wind,
	gravity,
	nuclear,
	animal,
	human
};

class vehicle {
	double speed;
	double acceleration;
	double brakeForce;
	double fuel;
	int maxPassengerCapacity;
	double maxCargoCapacity;
	steeringType steering;
	powerSourceType powerSource;
public:
	virtual ~vehicle(){}
	virtual void accel() {
		std::cout<<"Vehiculo acelera\n";
	}
	virtual void move() {
		std::cout<<"Vehiculo se mueve\n";
	}
	virtual void brake() {
		std::cout<<"Vehiculo se detiene\n";
	}
};

class landVehicle: public vehicle {
	int noWheels;
	specialVehicleType specialVehicle;
	std::string registrationNo;
	std::string regIssuingAgency;
	std::string insuranceNo;
public:
	void move() override {
		std::cout<<"Vehiculo terrestre se mueve\n";
	}
	void accel() override {
		std::cout<<"Vehiculo terrestre acelera\n";
	}
	void brake() override {
		std::cout<<"Vehiculo terrestre se detiene\n";
	}
};

class watercraft: public vehicle {
	double maxUnderwaterDepth;
	double downwardAccelerationRate;
	double upwardAccelerationRate;
public:
	void move() override {
		std::cout<<"Vehiculo acuatico se mueve\n";
	}
	void accel() override {
		std::cout<<"Vehiculo acuatico acelera\n";
	}
	void brake() override {
		std::cout<<"Vehiculo acuatico se detiene\n";
	}
};

class aircraft: public vehicle {
	double maxHeight;
	double upwardAccelerationRate;
	double downwardAccelerationRate;
public:
	void move() override {
		std::cout<<"Vehiculo aereo se mueve\n";
	}
	void accel() override {
		std::cout<<"Vehiculo aereo acelera\n";
	}
	void brake() override {
		std::cout<<"Vehiculo aereo se detiene\n";
	}
};

int main(){
	landVehicle* car = new landVehicle();
	car->accel();

	((vehicle)(*car)).accel();

	delete car;
	return 0;
}
