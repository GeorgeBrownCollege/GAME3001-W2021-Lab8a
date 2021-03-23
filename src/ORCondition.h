#pragma once
#ifndef __OR_CONDITION__
#define __OR_CONDITION__
#include "Condition.h"

class ORCondition : public Condition
{
public:
	ORCondition(Condition* condition_a, Condition* condition_b);
	~ORCondition();

	bool Test() override;
private:
	Condition* m_conditionA;
	Condition* m_conditionB;
};

#endif /* defined (__OR_CONDITION__) */
