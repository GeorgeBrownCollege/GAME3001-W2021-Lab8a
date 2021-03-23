#pragma once
#ifndef __NOT_CONDITION__
#define __NOT_CONDITION__
#include "Condition.h"

class NOTCondition : public Condition
{
public:
	NOTCondition(Condition* condition);
	~NOTCondition();

	bool Test() override;
private:
	Condition* m_conditionA;
};

#endif /* defined (__AND_CONDITION__) */