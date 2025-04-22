#pragma once
#include <vector>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void bark();
protected: 
	std::vector<Animal*> everyone;
};

