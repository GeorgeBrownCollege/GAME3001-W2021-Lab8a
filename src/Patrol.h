#pragma once
#ifndef  __PATROL__
#define __PATROL__
#include "Action.h"

class Patrol : public Action
{
public:
	Patrol();
	~Patrol();

	void Execute() override;
private:
};
#endif /* defined (__PATROL__) */