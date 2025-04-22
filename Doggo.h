#pragma once
#include "Animal.h"
class Doggo : public Animal 
{
public :
	Doggo();
	virtual ~Doggo();
	virtual void bark() override;
};

