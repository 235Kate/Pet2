#ifndef Dealership_hpp
#define Dealership_hpp
#include <vector>
#include "Vehicle.h"

class Dealership {
public:
	vector<Vehicle> inventory;

	Dealership(const vector<Vehicle>& vehicles);
	Dealership();
	void displayInventory();
	void addVehicle(Vehicle vehicle);
	Vehicle& searchVehicleByVin(int vin);
	void deleteVehicleByVin(int vin);
	Vehicle& editVehicleColor(int vin, string color);

private:
	vector<Vehicle> parseVehicles(const string& csvData);
	string trim(const string& str);

	const string vehicleData =
		"vin | year | make | model | color | price\n"
		"1 | 2015 | Toyota | Corolla | white | 10000\n"
		"2 | 2020 | Volkswagen | Polo | red | 20000\n"
		// Example of a line with incorrect format for error handling:
		"3 | 2022 | Ford | Fiesta | blue | NOT_A_PRICE\n";
};

#endif




