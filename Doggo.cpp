#include "Doggo.h"
#include <iostream>

using namespace std;

Doggo::Doggo()
{
	Name = "Doggo";
}

Doggo::~Doggo()
{
}

void Doggo::bark()
{
	cout << "Woof Woof!" << endl;
}
