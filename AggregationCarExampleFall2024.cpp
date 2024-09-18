// AggregationCarExampleFall2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include "Wheel.h"
int main()
{
	Wheel w1(20);
	Wheel w2(20);
	Wheel w3(20);
	Wheel w4(20);

	Car Jeep1;
	Jeep1.setMake("Jeep Compass");
	Jeep1.setVin("1VKPr54tte4t");
	Jeep1.setWheel(0, w1);
	Jeep1.setWheel(1, w2);
	Jeep1.setWheel(2, w3);
	Jeep1.setWheel(3, w4);

	//cout << Jeep1.getWheel(1).getDiameter() << endl;

	Jeep1.getWheel(2).setDiameter(25);
	Jeep1.getWheel(3).setDiameter(25);

	Jeep1.PrintCarInfo();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
