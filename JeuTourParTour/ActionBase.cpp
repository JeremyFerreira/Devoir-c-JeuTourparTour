#include "ActionBase.h"
#pragma once
#include <iostream>
//constructors
ActionBase::ActionBase(std::string name, int cost)
{
	m_name = name;
	m_cost = cost;
}
ActionBase::ActionBase()
{

}

//functions
void ActionBase::UseAction()
{
	std::cout << m_name + " is used, " + std::to_string(m_cost) + " action points has been spend" << std::endl;
}
std::string ActionBase::GetName()
{
	return m_name;
}