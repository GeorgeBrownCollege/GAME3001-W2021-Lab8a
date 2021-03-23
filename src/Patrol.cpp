#include "Patrol.h"

#include <iostream>

Patrol::Patrol()
= default;

Patrol::~Patrol()
= default;

void Patrol::Execute()
{
	std::cout << "Executed the Patrol Action" << std::endl;
}
