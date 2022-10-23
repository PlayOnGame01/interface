#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class pinguin : public Animal, public ISwim {

public:
	pinguin() = default;
	pinguin(string n, double k, string c) :Animal(n, k, c) {}

	virtual void Eat() {
		cout << "Pinguins food: fish" << endl;
	}

	virtual void Move() {
		cout << "Move: high movement speed" << endl;
	}

	virtual void Swim() {
		cout << "Swim: mid movement speed" << endl;
	}
};