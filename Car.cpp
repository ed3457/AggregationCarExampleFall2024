#include "Car.h"
#include <iostream>
using namespace std; 
void Car::setWheel(int index, Wheel w)
{   
	if (index<4 && index>=0)
	Wheels[index] = w;
}

Wheel & Car::getWheel(int index)
{
	if (index < 4 && index >= 0)
		return Wheels[index];
	
}

void Car::setMake(string m)
{
	make = m;
}

string Car::getMake()
{
	return make;
}

void Car::setVin(string v)
{
	vin = v;
}

string Car::getVin()
{
	return vin;
}

void Car::PrintCarInfo()
{
	// print car make, car vin, and the diameter for all the wheels 
	cout << getMake() << endl;
	cout << getVin() << endl;

	for (int i = 0; i < 4; i++)
		cout << "Wheel "<<i <<" " << getWheel(i).getDiameter() << endl;
}
