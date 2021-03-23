#pragma once
#ifndef __TRANSITION__
#define __TRANSITION__
#include "State.h"
#include "Condition.h"

class Transition
{
public:
	Transition(Condition* condition = nullptr, State* target_state = nullptr);
	~Transition();

	bool IsTriggered() const;
	State* GetTargetState() const;
	Condition* GetCondition() const;

	void SetTargetState(State* state);
	void SetIsTriggered(bool state);
	void SetCondition(Condition* condition);
	
private:
	bool m_isTriggered{};
	State* m_targetState{};
	Condition* m_condition{};
};
#endif /* defined (__TRANSITION__) */