#pragma once
#ifndef __FLOAT_CONDITION__
#define __FLOAT_CONDITION__
#include "Condition.h"

class FloatCondition : public Condition
{
public:
	FloatCondition(float min_value, float max_value);
	~FloatCondition();

	void SetTestValue(float value);
	
	bool Test() override;
private:
	float m_minValue;;
	float m_maxValue;
	float m_currentTestValue;
};

#endif /* defined (__FLOAT_CONDITION__) */