#include "State.h"
#include "Transition.h"

State::State()
= default;

State::~State()
= default;

std::vector<Transition*> State::GetTransitions() const
{
	return m_transitions;
}

std::vector<Action*> State::GetActions() const
{
	return m_actions;
}

std::vector<Action*> State::GetEntryActions() const
{
	return m_entryActions;
}

std::vector<Action*> State::GetExitActions() const
{
	return m_exitActions;
}

void State::AddTransition(Condition* condition, State* target_state)
{
	auto* transition = new Transition(condition, target_state);
	m_transitions.push_back(transition);
}

void State::AddAction(Action* action)
{
	m_actions.push_back(action);
}

void State::AddEntryAction(Action* action)
{
	m_entryActions.push_back(action);
}

void State::AddExitActions(Action* action)
{
	m_exitActions.push_back(action);
}
