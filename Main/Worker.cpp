#include "Worker.h"

double Worker::getSalary() {
	return this->salary;
}

void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::getInfo() {
	string s = "";
	s += name + ": age = ";
	s += to_string(age);
	s += ", salary = ";
	s += to_string(salary);

	return s;
}