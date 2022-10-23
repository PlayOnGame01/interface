#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class morscot : public Animal, public ISwim {

public:
	morscot() = default;
	morscot(string n, double k, string c) : Animal(n, k, c) {}

	virtual void Eat() {
		cout << "Dolphins food: fish" << endl;
	}
	virtual void Move() {
		cout << "Move: moves in water" << endl;
	}
	virtual void Swim() {
		cout << "Swim: high movement speed" << endl;
	}
};