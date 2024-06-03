#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string name;
	int age;
	//int price;

	static int count;

public:
	int price;

	static const int MAX_PRICE = 10000000;
	static const int MIN_PRICE = 0;

	static const int MAX_AGE = 20;
	static const int MIN_AGE = 0;

	Car();
	Car(string, int, int);
	Car(string);

	~Car();

	string getName();

	int getAge();
	void setAge(int);

	int getPrice();
	void setPrice(int);

	static int getCount();

	string convert();

	Car operator+(int number) {
		if (price + number > 10 || price + number < 0) {
			return *this;
		}

		return Car(name, age, price + number);
	}
};