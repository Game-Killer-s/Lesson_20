#include <iostream>
#include "Car.h"

void Car :: showCar() {
	cout << mark << " " << model << " " << yearCreat << endl;
}

string Car::getModel() {
	return model;
}

string Car::getMark() {
	return mark;
}

int Car::getYear() {
	return yearCreat;
}

void Car::setModel(string model) {
	Car::model = model;
}

void Car::setMark(string m) {
	mark = m;
}

void Car::setYear(int y) {
	yearCreat = y;
}