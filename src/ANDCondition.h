#pragma once
#ifndef __AND_CONDITION__
#define __AND_CONDITION__
#include "Condition.h"

class ANDCondition : public Condition
{
public:
	ANDCondition(Condition* condition_a, Condition* condition_b);
	~ANDCondition();

	bool Test() override;
private:
	Condition* m_conditionA;
	Condition* m_conditionB;
};

#endif /* defined (__AND_CONDITION__) */