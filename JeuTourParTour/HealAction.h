#pragma once
#include "ActionBase.h"
#include <iostream>
class HealAction : public ActionBase
{
	//constructor
	public: HealAction();

	//overrides
public:
	void UseAction() override;
};

