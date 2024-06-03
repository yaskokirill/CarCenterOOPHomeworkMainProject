#pragma once
#include "Human.h"

class Worker : public Human
{
private:
	double salary;

protected:


public:
	int id;
	Worker() : Human() {
		cout << "Worker default constructor" << endl;

	}

	Worker(string name, int age, double salary) : Human(name, age),
		salary(salary) {}

	~Worker() {
		cout << "Worker destructor" << endl;
	}

	double getSalary();
	void setSalary(double slary);

	string getInfo();
};
