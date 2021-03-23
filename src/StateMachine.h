#pragma once
#ifndef __STATE_MACHINE__
#define __STATE_MACHINE__

#include "State.h"
#include <vector>

class StateMachine
{
public:
	StateMachine(State* initial_state = nullptr);
	~StateMachine();

	// getters and setters
	State* GetInitialState() const;
	State* GetCurrentState() const;
	State* GetTargetState() const;

	void SetInitialState(State* initial_state);
	void SetCurrentState(State* current_state);
	void SetTargetState(State* target_state);
	
	
	 std::vector<Action*> Update();
private:
	State* m_initialState;
	State* m_currentState;
	State* m_targetState;
	Transition* m_triggered;
};
#endif /* defined (__STATE_MACHINE__) */