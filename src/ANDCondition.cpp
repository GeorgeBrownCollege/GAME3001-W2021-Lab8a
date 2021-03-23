#include "ANDCondition.h"

ANDCondition::ANDCondition(Condition* condition_a, Condition* condition_b)
{
	m_conditionA = condition_a;
	m_conditionB = condition_b;
}

ANDCondition::~ANDCondition()
= default;

bool ANDCondition::Test()
{
	return m_conditionA->Test() && m_conditionB->Test();
}
