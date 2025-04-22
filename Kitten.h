#include <iostream>
#include "Animal.h"

using namespace std;

class Kitten : public Animal
{
public : 
	Kitten();
	virtual ~Kitten();
	virtual void bark() override;
};