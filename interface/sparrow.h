#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class sparrow : public Animal, public IFly {

public:
	sparrow() = default;
	sparrow(string n, double k, string c) :Animal(n, k, c) {}

	virtual void Eat() {
		cout << "Parrot food: seeds\n";
	}
	virtual void Move() {
		cout << "Move: mid movement speed\n";
	}

	virtual void Fly() {
		cout << "Fly: average flight altitude\n";
	}
};