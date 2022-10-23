#include <iostream>
#include "Animal.h"
#include "sparrow.h"
#include "Pingvin.h"
#include "morscot.h"
#include "Lion.h"
using namespace std;

int main() {
	IAnimal* ptr = nullptr;

	ptr = new sparrow("Parrot", 2, "Africa");
	ptr->Eat();
	ptr->Move();
	sparrow* p = static_cast<sparrow*>(ptr);
	p->Print();
	p->Fly();
	delete ptr;

	cout << "\n//////////////////////////////\n\n";
	ptr = new pinguin("Pinguin", 41, "Antarctica");
	ptr->Eat();
	ptr->Move();
	pinguin* pn = static_cast<pinguin*>(ptr);
	pn->Print();
	pn->Swim();
	delete ptr;
	
	cout << "\n////////////////////////////\n\n";
	ptr = new morscot("Striped morscot", 160, "Cold and aliaska waters");
	ptr->Eat();
	ptr->Move();
	morscot* d = static_cast<morscot*>(ptr);
	d->Print();
	d->Swim();
	delete ptr;

	cout << "\n////////////////////\n\n";
	ptr = new Lion("Lion", 8, "City");
	ptr->Eat();
	ptr->Move();
	Lion* Lion = static_cast<Lion*>(ptr);
	Lion->Print();
	delete ptr;

}