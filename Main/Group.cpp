#include "Group.h"

void Group::add(Car c) {
	if (size == 0) {
		list = new Car[1];
		*list = c;
	}
	else {
		Car* temp = new Car[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = c;

		delete[] list;
		list = temp;
	}

	size++;
}

void Group::remove(int index) {
	if (index >= 0 && index < size) {
		Car* temp = new Car[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}

void Group::remove(Car car) {
	int index = getFirstIndex(car);

	if (index != -1) {

		Car* temp = new Car[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

int Group::getFirstIndex(Car car) {
	for (int i = 0; i < size; i++)
	{
		if (car.getName() == list[i].getName()
			&& car.getAge() == list[i].getAge()
			&& car.getPrice() == list[i].getPrice()) {
			return i;
		}
	}

	return -1;
}

int Group::getLastIndex(Car car) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (car.getName() == list[i].getName()
			&& car.getAge() == list[i].getAge()
			&& car.getPrice() == list[i].getPrice()) {
			return i;
		}
	}

	return -1;
}

bool Group::contain(Car car) {
	for (int i = 0; i < size; i++)
	{
		if (car.getName() == list[i].getName()
			&& car.getAge() == list[i].getAge()
			&& car.getPrice() == list[i].getPrice()) {
			return true;
		}
	}

	return false;
}


int Group::getSize() {
	return size;
}

Car Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return Car();
}

string Group::convertToString() {
	string s = "Group of cars:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].convert() + "\n";
	}

	return s;
}