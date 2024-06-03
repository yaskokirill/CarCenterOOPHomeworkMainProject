#include "Manager.h"
#include "Car.h"

int Manager::getMaxPrice(Car* cars, int length) {
	int max = cars[0].price;

	for (int i = 1; i < length; i++)
	{
		if (max < cars[i].price) {
			max = cars[i].price;
		}
	}

	return max;
}

int Manager::getMinPrice(Car* cars, int length) {
	int min = cars[0].price;

	for (int i = 1; i < length; i++)
	{
		if (min > cars[i].price) {
			min = cars[i].price;
		}
	}

	return min;
}

double Manager::calcAvgPrice(Car* cars, int length) {
	double avg = 0;

	for (int i = 1; i < length; i++)
	{
		avg += cars[i].price;
	}

	return avg / length;
}

Car Manager::getExpensiveCar(Car* cars, int length) {
	double maxPrice = getMaxPrice(cars, length);
	Car c = NULL;

	for (int i = 0; i < length; i++)
	{
		if (cars[i].price == maxPrice) {
			c = cars[i];
			break;
		}
	}

	return c;
}