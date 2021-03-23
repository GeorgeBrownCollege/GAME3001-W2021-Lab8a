#include "MoveToPlayer.h"
#include <iostream>

MoveToPlayer::MoveToPlayer()
= default;

MoveToPlayer::~MoveToPlayer()
= default;

void MoveToPlayer::Execute()
{
	std::cout << "Executed the MoveToPlayer Action" << std::endl;
}
