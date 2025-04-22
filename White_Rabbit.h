#pragma once
#include "Animal.h"
#include <iostream>

class Doggo;
class Kitten;

using namespace std;

class WhiteRabbit : public Animal
{
public : 
	WhiteRabbit();
	virtual ~WhiteRabbit();
	virtual void talk();
};

