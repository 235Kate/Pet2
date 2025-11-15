#include "UserInterface.h"

int main() {
	UserInterface userInterface = UserInterface();
	userInterface.start();
	Dealership KyivDealership = Dealership();
	Dealership NewYorkDealership = Dealership();
	Dealership BerlinDealership = Dealership();
	KyivDealership.displayInventory();
};


