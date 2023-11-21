#pragma region Using and includes
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <array>
#include <conio.h>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <Windows.h>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
using namespace std;

#include "GameData.h"
#pragma endregion


//class Actiona
//{
//	public:
//		virtual void f()
//		{
//			cout << "ParentAction";
//		}
//};
//class ActionaChild : public Actiona
//{
//	public:
//		void f() override
//		{
//			cout << "ChildAction";
//		}
//};
//class ParentA
//{
//	protected:
//		Actiona* action = new Actiona();
//
//	public:
//		virtual void functiontest()
//		{
//			cout << "Parent A:";
//			action->f();
//		}
//
//};
//class ChildB : public ParentA
//{
//	public: 
//		ChildB()
//		{
//			this->action = new ActionaChild();
//		}
//	public:
//		void functiontest() override
//		{
//			cout << "child B:";
//			action -> f();
//		}
//};


GameData gameData = GameData::GetInstance();
int main()
{
	/*ParentA a = *new ParentA();
	a.functiontest();
	cout<<endl;


	ChildB b = *new ChildB();
	b.functiontest();
	cout << endl;


	ParentA &c = *new ChildB();
	c.functiontest();
	cout << endl;*/



	gameData.InitializeGameData();

	gameData.playerTeam[0].UseAction();
	gameData.playerTeam[1].UseAction();

	////WORK
	//Character medecin0 = *new Medecin();
	//medecin0.UseAction();
	////WORK
	//Character& medecin1 = *new Medecin();
	//medecin1.UseAction();
	////WORK
	//Medecin& medecin2 = *new Medecin();
	//medecin2.UseAction();

	////DONT WORK 
	//ActionBase action = *new HealAction();
	//action.UseAction();
	////WORK 
	//ActionBase& action2 = *new HealAction();
	//action2.UseAction();

	////WORK
	//HealAction healAction = *new HealAction();
	//healAction.UseAction();
	return 0;
}
