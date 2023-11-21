#pragma once
#include "Point.h"
#include <iostream>
#include "ActionBase.h"
#include "Character.h"
class Enemy : public Character
{
private:
	Point m_position;
public:
	//constructor
	Enemy(std::string name, float health, ActionBase action, int xPos, int yPos);
	//getters
	Point GetPosition();
	//Functions
	void Move(int xVelocity, int yVelocity);
};

