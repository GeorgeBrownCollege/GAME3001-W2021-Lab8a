#include "Attack.h"
#include <iostream>

Attack::Attack()
= default;

Attack::~Attack()
= default;

void Attack::Execute()
{
	std::cout << "Executed the Attack Action" << std::endl;
}
