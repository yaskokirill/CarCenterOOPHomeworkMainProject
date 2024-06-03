#pragma once
#include "Car.h"

class Manager {
public:
	static int getMaxPrice(Car* cars, int length);
	static int getMinPrice(Car* cars, int length);
	static double calcAvgPrice(Car* cars, int length);
	static Car getExpensiveCar(Car* cars, int length);
};