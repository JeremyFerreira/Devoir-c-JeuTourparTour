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



GameData gameData = GameData::GetInstance();
int main()
{
	gameData.InitializeGameData();
	return 0;
}
