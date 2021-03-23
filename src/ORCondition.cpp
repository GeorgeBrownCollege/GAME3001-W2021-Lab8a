#include "ORCondition.h"

ORCondition::ORCondition(Condition* condition_a, Condition* condition_b)
{
	m_conditionA = condition_a;
	m_conditionB = condition_b;
}

ORCondition::~ORCondition()
= default;

bool ORCondition::Test()
{
	return m_conditionA->Test() || m_conditionB->Test();
}
