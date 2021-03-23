#include "Transition.h"

Transition::Transition(Condition* condition, State* target_state)
{
	SetTargetState(target_state);
	SetCondition(condition);
}

Transition::~Transition()
= default;

Condition* Transition::GetCondition() const
{
	return m_condition;
}

void Transition::SetCondition(Condition* condition)
{
	m_condition = condition;
}


bool Transition::IsTriggered() const
{
	return m_isTriggered;
}

State* Transition::GetTargetState() const
{
	return m_targetState;
}

void Transition::SetTargetState(State* state)
{
	m_targetState = state;
}

void Transition::SetIsTriggered(const bool state)
{
	m_isTriggered = state;
}
