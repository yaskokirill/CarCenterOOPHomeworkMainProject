#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string name;
	int age;

public:
	Human() {
		//cout << "Human default constructor" << endl;
	}

	Human(string name, int age) :
		name(name), age(age) {}

	Human(const Human& human) {
		cout << "copy-constructor" << endl;
	}

	~Human() {
		cout << "Human destructor" << endl;
	}

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);

	int sum(double a, double b);
	int sum(int a, int b);
	int sum(int a, int b, int c);

	Human& operator+(int value) {
		Human h(name, age + value);
		return h;
	}

	Human& operator+(Human& human) {
		Human h(name + "-" + human.name,
			age + human.age);
		return h;
	}

	string getInfo();
};
