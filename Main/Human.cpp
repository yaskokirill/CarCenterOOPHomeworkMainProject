#include "Human.h"
string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	this->age = age;
}

string Human::getInfo() {
	string s = "";
	s += name + ": age = ";
	s += to_string(age);

	return s;
}

int Human::sum(double a, double b) {
	return a + b;
}

int Human::sum(int a, int b) {
	return a + b;
}

int Human::sum(int a, int b, int c) {
	return a + b + c;
}