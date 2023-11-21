#include "Medecin.h"
Medecin::Medecin()
{
	m_name = "Medecin";
	m_health = 2;
	m_action = new HealAction();
}

void Medecin::UseAction()
{
	m_action->UseAction();
}
