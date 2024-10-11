#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	Car c1;
	cout << sizeof(c1) << endl;
	c1.setModel("BMW");
	c1.setMark("X5");
	c1.setYear(2020);
	c1.showCar();
}