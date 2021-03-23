#pragma once
#ifndef  __ATTACK__
#define __ATTACK__
#include "Action.h"

class Attack : public Action
{
public:
	Attack();
	~Attack();

	void Execute() override;
private:
};
#endif /* defined (__ATTACK__) */