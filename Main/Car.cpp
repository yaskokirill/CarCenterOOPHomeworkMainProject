#include "Car.h"

int Car::count = 0;

int Car::getCount() {
	return count;
}

Car::Car() : Car("no_name", 6, 50000) {

}

Car::Car(string name) : name(name), age(6), price(50000) {
	count++;
}

Car::Car(string name, int age, int price)
	: name(name), age(age), price(price) {
	count++;
}

Car::~Car() {
	count--;
}

string Car::getName() {
	return name;
}

int Car::getAge() {
	return age;
}

void Car::setAge(int age) {
	if (age > MIN_AGE && age < MAX_AGE) {
		this->age = age;
	}
}

int Car::getPrice() {
	return price;
}

void Car::setPrice(int price) {
	if (price >= MIN_PRICE && price <= MAX_PRICE) {
		this->price = price;
	}
}

string Car::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", price = " + to_string(price);

	return s;
}