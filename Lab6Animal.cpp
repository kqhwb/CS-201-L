#include <iostream>
#include <string>
#include <fstream>
#include "Animal.h"

using namespace std;


Animal::Animal(){}
double Animal::getweight()
	{
        return Animal::m_weight;
    }
    void Animal::setWeight(double weight)
    {
		Animal::m_weight = weight;
    }
 double Animal::getlength()
    {
		return Animal::m_length;
    }
    void Animal::setlength(double length)
    {
		Animal::m_length = length;
    }

	void Animal::Setup(double weight, double length)
	{
		Animal::m_weight = weight;
		Animal::m_length = length;
	}
	
	







