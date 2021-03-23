#pragma once
#ifndef __STATE__
#define __STATE__
#include <vector>
#include "Action.h"
#include "Condition.h"

class State
{
	friend class Transition;
public:
	State();
	~State();
	
	// getters
	std::vector<Transition*> GetTransitions() const;
	std::vector<Action*> GetActions() const;
	std::vector<Action*> GetEntryActions() const;
	std::vector<Action*> GetExitActions() const;

	void AddTransition(Condition* condition, State* target_state);
	void AddAction(Action* action);
	void AddEntryAction(Action* action);
	void AddExitActions(Action* action);
	
private:
	std::vector<Transition*> m_transitions;
	std::vector<Action*> m_actions;
	std::vector<Action*> m_entryActions;
	std::vector<Action*> m_exitActions;
};

#endif /* defined (__STATE__) */