#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
	string name;
	int age;
	int price;

	// default constructor
	Car() {
		//cout << "calling default constructor" << endl;
		name = "no name";
		age = 5;
		price = 4;
	}

	// canonical constructor with parameters (arguments)
	Car(string nm, int a, double p) {
		//cout << "calling canonical constructor" << endl;
		name = nm;
		age = a;
		price = p;
	}

	// constructor with parameters (arguments)
	Car(string nm) {
		//cout << "calling canonical constructor" << endl;
		name = nm;
		age = 0;
		price = 0;
	}

	// constructor with parameters (arguments)
	Car(double p) {
		//cout << "calling canonical constructor" << endl;
		name = "no name";
		age = 0;
		price = p;
	}

	~Car() {
		cout << "calling destructor" << endl;
	}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", price = " + to_string(price);
		return s;
	}
};