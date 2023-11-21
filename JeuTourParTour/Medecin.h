#pragma once
#include "Character.h"
#include "HealAction.h"
class Medecin : public Character
{
	//constructor
	public: Medecin();

		  void UseAction() override;
};

