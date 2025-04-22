#pragma once
#include <iostream>
#include <vector>

class Animal
{
public:
	std::string Name;
	Animal();
	virtual ~Animal();
	virtual void bark();
	virtual void talk();
};

