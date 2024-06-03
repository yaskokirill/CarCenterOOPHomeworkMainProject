#pragma once
#include "Car.h"

class Group
{
private:
	Car* list;
	int size;

public:
	Group() : size(0) {}

	void add(Car c);
	void remove(int index);
	void remove(Car car);

	bool contain(Car car);
	int getFirstIndex(Car car);
	int getLastIndex(Car car);

	int getSize();
	Car get(int index);

	string convertToString();
};
