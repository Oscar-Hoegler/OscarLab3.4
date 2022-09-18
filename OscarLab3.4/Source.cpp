/* Oscar Hoegler, September 8th, Laboratory 3.4
 *OscarLab3.4, Calculate cost of vehicle over its lifetime */

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	double carCOST, carMPG, carMPY, carYEARS, gasCOST, carRESALE;
	cout << "What is the cost of the vehicle? "; cin >> carCOST;
	cout << "How many miles does the car get per gallon? "; cin >> carMPG;
	cout << "How many miles are you going to drive the car per year? "; cin >> carMPY;
	cout << "How many years do you plan on driving the vehicle? "; cin >> carYEARS;
	cout << "What is the current cost of gas? "; cin >> gasCOST;
	cout << "What do you plan on reselling the car for?"; cin >> carRESALE;
	cout << "You will lose around $" << carCOST + (carMPY / carMPG) * gasCOST * carYEARS - carRESALE << " on this vehicle.";
	return 0;
}