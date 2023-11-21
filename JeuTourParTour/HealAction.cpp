#include "HealAction.h"
HealAction::HealAction()
{
	m_name = "Heal";
	m_cost = 1;
}

void HealAction::UseAction()
{
	std::cout << "HEALING THE TEAM..."<< std::endl;
	//ActionBase::UseAction();
}
