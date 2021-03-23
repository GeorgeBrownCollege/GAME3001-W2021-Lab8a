#include "NOTCondition.h"

NOTCondition::NOTCondition(Condition* condition)
{
	m_conditionA = condition;
}

NOTCondition::~NOTCondition()
= default;

bool NOTCondition::Test()
{
	return !m_conditionA->Test();
}
