#pragma once
#include "main.h"
class CarCenter {
public:
	string name;
	string best_seller;
	int cars_count;
	int ovr_price;
	int cheap_car;

	CarCenter() {
		//cout << "calling default constructor" << endl;
		name = "no info";
		best_seller = "no info";
		cars_count = 0;
		ovr_price = 0;
		cheap_car = 0;
	}

	CarCenter(string nm, int bs, int cc, int op, int chc) {
		//cout << "calling canonical constructor" << endl;
		name = nm;
		best_seller = bs;
		cars_count = cc;
		ovr_price = op;
		cheap_car = chc;
	}
};