#include "Manager.h"
#include <iostream>
using namespace std;

int main() {
	Car c1("Toyota", 4, 30000);
	Car c2("Lexus", 7, 60000);
	Car c3("Kia", 5, 38000);
	Car c4("Mercedes", 6, 100000);
	Car c5("Honda", 2, 70000);

	Car cars[]{ c1,c2,c3,c4,c5 };

	Manager manager;

	cout << "Most expensive car is " << manager.getMaxPrice(cars, 5) << endl;
	cout << "Cheapest car is " << manager.getMinPrice(cars, 5) << endl;

	return 0;
}