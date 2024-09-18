#include "Wheel.h"

void Wheel::setDiameter(float d)
{
	diameter = d;
}

float Wheel::getDiameter()
{
	return diameter;
}

Wheel::Wheel():Wheel(15)
{
	//setDiameter(15);
}

Wheel::Wheel(float d)
{
	setDiameter(d);
}
