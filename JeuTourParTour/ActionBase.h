#pragma once
#include <string>
class ActionBase
{
	protected:
		std :: string m_name = "none";
		int m_cost = 0;
		//Constructor
	public:
		ActionBase(std::string name, int cost);
		ActionBase();
		//functions
	public:
		std::string GetName();
		virtual void UseAction();
};

