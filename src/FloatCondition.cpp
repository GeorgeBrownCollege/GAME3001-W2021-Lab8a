#include "FloatCondition.h"

FloatCondition::FloatCondition(const float min_value, const float max_value)
{
	m_minValue = min_value;
	m_maxValue = max_value;
}

FloatCondition::~FloatCondition()
= default;

void FloatCondition::SetTestValue(const float value)
{
	m_currentTestValue = value;
}

bool FloatCondition::Test()
{
	return (m_minValue <= m_currentTestValue) && (m_currentTestValue <= m_maxValue);
}
