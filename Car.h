#pragma once
#include "Wheel.h"
#include "string"
using namespace std; 
class Car
{
private:
	Wheel Wheels[4];
	string make;
	string vin; 
public:
	void setWheel(int index, Wheel w); 
	Wheel & getWheel(int index);

	void setMake(string m);
	string getMake();

	void setVin(string v);
	string getVin();

	// functions
	void PrintCarInfo();


};

