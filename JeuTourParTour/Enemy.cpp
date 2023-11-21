#include "Enemy.h"

//constructor
Enemy::Enemy(std::string name, float health, ActionBase action, int xPos, int yPos) : Character(name, health, action), m_position({ xPos, yPos })
{
}
//getters
Point Enemy::GetPosition()
{
	return m_position;
}
//Functions
void Enemy::Move(int xVelocity, int yVelocity)
{
	m_position.x += xVelocity;
	m_position.y += yVelocity;
}