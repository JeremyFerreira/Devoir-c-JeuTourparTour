#pragma once
#include <string>
class ActionBase
{
	protected:
		std :: string m_name = "none";
		int m_cost = 0;
		//Constructor
	public:
		ActionBase(std::string name, int cost)
		{
			m_name = name;
			m_cost = cost;
		}
	public:
		std::string GetName();
		void UseAction();
};

