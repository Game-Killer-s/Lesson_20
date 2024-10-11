#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	Car c1, c2;
	cout << sizeof(c1) << endl;
	c1.setModel("BMW");
	c1.setMark("X5");
	c1.setYear(2020);


	c2.setModel("Renault");
	c2.setMark("asdwae");
	c2.setYear(2024);

	c1.showCar();
	c2.showCar();
}