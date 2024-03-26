#include "main.h"
class CarCenter {
public:
	string name;
	string best_seller;
	int cars_count;
	int ovr_price;
	int cheap_car;
};
int main(void) {
	CarCenter center1;

	cout << "Input name of your car center: ";
	cin >> center1.name;

	cout << "Input model of a car that selling best: ";
	cin >> center1.best_seller;

	cout << "Input number of car in your car center: ";
	cin >> center1.cars_count;

	cout << "Input overall price of your car center (sum of all cars prices): ";
	cin >> center1.ovr_price;

	cout << "Input price of the cheapest car in your center: ";
	cin >> center1.cheap_car;

	cout << "\nInfo about your car:" << endl;

	return 0;
}