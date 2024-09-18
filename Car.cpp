#include "Car.h"

void Car::setWheel(int index, Wheel w)
{   
	if (index<4 && index>=0)
	Wheels[index] = w;
}

Wheel Car::getWheel(int index)
{
	if (index < 4 && index >= 0)
		return Wheels[index];
	else
		return NULL; 
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

}
