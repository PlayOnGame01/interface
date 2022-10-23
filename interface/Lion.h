#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Lion : public Animal {

public:
	Lion() = default;
	Lion(string n, double k, string c) : Animal(n, k, c) {}

	virtual void Eat() {
		cout << "Dogs food: raw meat" << endl;
	}
	virtual void Move() {
		cout << "Move: mid movement speed" << endl;
	}
};