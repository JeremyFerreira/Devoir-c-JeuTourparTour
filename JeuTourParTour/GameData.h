#pragma once
#include <iostream>
#include <vector>
#include "Character.h"
#include "Enemy.h"
#include "Knight.h"
#include "Medecin.h"
class GameData
{
	public: 
		static GameData& GetInstance();
		#pragma region Level
		std::vector<std::vector<int>> LevelData = *new std::vector<std::vector<int>>;
		#pragma endregion

		#pragma region Characters
	public :
		std::vector<Character> playerTeam;
		std::vector<Character> enemyTeam;
		int numberOfEnemy = 5;
		#pragma endregion

		// Static instance
		static GameData instance;
		//constructor
		GameData();

	public :
		void InitializeGameData();
	private: 
		int AskForNumberOfCharacters();
		Character AskForCharacterType();
		std::vector<Character> GetRemainingPlayerTeamCharacters();
		void PrintPlayerTeam();
		std::vector<Character> GetRemainingEnemyTeamCharacters();
		void PrintEnemyTeam();
		
};

