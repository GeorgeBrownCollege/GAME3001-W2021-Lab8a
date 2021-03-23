#include "StateMachine.h"
#include "Transition.h"

StateMachine::StateMachine(State* initial_state)
{
	m_initialState = initial_state;
}

StateMachine::~StateMachine()
= default;

State* StateMachine::GetInitialState() const
{
	return m_initialState;
}

State* StateMachine::GetCurrentState() const
{
	return m_currentState;
}

State* StateMachine::GetTargetState() const
{
	return m_targetState;
}

void StateMachine::SetInitialState(State* initial_state)
{
	m_initialState = initial_state;
}

void StateMachine::SetCurrentState(State* current_state)
{
	m_currentState = current_state;
}

void StateMachine::SetTargetState(State* target_state)
{
	m_targetState = target_state;
}

std::vector<Action*> StateMachine::Update()
{
	std::vector<Action*> actions;
	m_triggered = nullptr;

	for (Transition* transition : GetCurrentState()->GetTransitions())
	{
		if(transition->IsTriggered())
		{
			m_triggered = transition;
		}
	}

	if(m_triggered)
	{
		m_targetState = m_triggered->GetTargetState();

		actions = m_currentState->GetExitActions();
		actions.insert(
			actions.end(), 
			m_targetState->GetActions().begin(), 
			m_targetState->GetActions().end());
		m_currentState = m_targetState;
		return actions;
	}
	else
	{
		return m_currentState->GetActions();
	}
}
