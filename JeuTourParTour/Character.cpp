#include "Character.h"
#include "GameData.h"

#pragma region Getters
	std::string Character::GetName()
	{
		return m_name;
	}
	float Character::GetHealth()
	{
		return m_health;
	}
	bool Character::IsDead()
	{
		return m_isDead;
	}
	ActionBase Character::GetAction()
	{
		return *m_action;
	}
#pragma endregion
	//constructor
	Character::Character(std::string name = "none", float health = 3, ActionBase& action = *new ActionBase("default", 0))
	{
		m_name = name;
		m_health = health;
		*m_action = action;
	}
	Character::Character(){}

	//base action implementation
	void Character::UseAction()
	{
		m_action->UseAction();
	}

	// Hérité via IDamageable
	void Character::TakeDamage(float damage)
	{
		m_health -= damage;
		if (m_health <= 0)
		{
			Death();
		}
	}
	void Character::Death()
	{
		m_isDead = true;
		std::cout << m_name << " is Dead\n";
	}