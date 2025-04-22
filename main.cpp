#include <iostream>
#include "Animal.h"
#include "Doggo.h"
#include "Kitten.h"
#include "White_Rabbit.h"
#include <vector>
using namespace std;

int main() 
{
	Animal Animals;
	vector<Animal*> AnimalBarking;


	AnimalBarking.push_back(new Doggo());
	AnimalBarking.push_back(new Kitten());
	AnimalBarking.push_back(new White_Rabbit());

	for (auto Animals : AnimalBarking)
	{
		Animals->bark();

	}


	return 0;
}