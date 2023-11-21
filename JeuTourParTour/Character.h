#pragma once
#include "Idamageable.h"
#include "ActionBase.h"
#include <iostream>
class Character : public IDamageable
{
#pragma region properties
protected:
	std::string m_name = "none";
	float m_health = 3;
	bool m_isDead = false;
	ActionBase m_action = ActionBase("actionName", 0);
#pragma endregion

#pragma region Getters
public:
	std::string GetName();
	float GetHealth();
	bool IsDead();
	ActionBase GetAction();
#pragma endregion

	//constructor
public:
	Character(std::string name, float health, ActionBase action);
	Character();

	//base action
	virtual void UseAction();

	// Hérité via IDamageable
public:
	void TakeDamage(float damage) override;
	void Death() override;
};

