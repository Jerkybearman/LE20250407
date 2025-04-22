#include <iostream>
#include "Animal.h"
#include "Doggo.h"
#include "Kitten.h"
#include "White_Rabbit.h"
#include <vector>
using namespace std;

int main() 
{
	vector<Animal*> everyone;

	everyone.push_back(new Doggo());
	everyone.push_back(new Kitten());
	everyone.push_back(new WhiteRabbit());


	for (auto LilAnimals : everyone)
	{
		LilAnimals->bark();
		if (LilAnimals->Name == "WhiteRabbit")
		{
			LilAnimals->talk();
		}
	}


	return 0;
}