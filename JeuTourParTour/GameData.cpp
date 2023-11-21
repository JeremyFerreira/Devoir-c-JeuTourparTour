#include "GameData.h"

// Initialize the static instance
GameData GameData::instance;

GameData::GameData()
{
	
}

GameData& GameData::GetInstance() {
	return instance;
}

void GameData::InitializeGameData()
{
	//fill up the enemy team
	for (int i = 0; i < numberOfEnemy; i++)
	{
		Enemy enemy = Enemy("Mechant",3,*new ActionBase("default", 1), 0,0);
		enemyTeam.push_back(enemy);
	}
	PrintEnemyTeam();

	//fill up the players team
	int numberOfCharacters = AskForNumberOfCharacters();
	for (int i = 0; i < numberOfCharacters; i++)
	{
		Character chara = AskForCharacterType();
		playerTeam.push_back(chara);
	}
	PrintPlayerTeam();

	
}

int GameData::AskForNumberOfCharacters()
{
	std::string input;
	std::cout << "How many characters does your team have ?" << std::endl;
	std::cin >> input;
	return stoi(input);
}

Character GameData::AskForCharacterType()
{
	std::string input;
	std::cout << "What is the character Type ? (1: Knight, 2: Medecin)" << std::endl;
	std::cin >> input;
	switch (stoi(input))
	{
		case 1:
			return Knight();
			break;
		case 2:
			return Medecin();
			break;
		default :
			return Character("yo", 10, ActionBase("action1", 1));
	}
}

std::vector<Character> GameData::GetRemainingPlayerTeamCharacters() {
	std::vector<Character> playerTeamUndead = {};
	for (int i = 0; i < playerTeam.size(); i++) {
		if (!playerTeam[i].IsDead()) {
			playerTeamUndead.push_back(playerTeam[i]);
		}
	}
	return playerTeamUndead;
}
void GameData::PrintPlayerTeam()
{
	std::vector<Character> remainingTeam = GetRemainingPlayerTeamCharacters();
	std::cout << "your team consists of : ";
	for (int i = 0; i < remainingTeam.size(); i++)
	{
		std::cout << remainingTeam[i].GetName() + ", ";
	}
	std::cout << std::endl;
}

std::vector<Character> GameData::GetRemainingEnemyTeamCharacters() {
	std::vector<Character> playerTeamUndead = {};
	for (int i = 0; i < enemyTeam.size(); i++) {
		if (!enemyTeam[i].IsDead()) {
			playerTeamUndead.push_back(enemyTeam[i]);
		}
	}
	return playerTeamUndead;
}
void GameData::PrintEnemyTeam()
{
	std::vector<Character> remainingTeam = GetRemainingEnemyTeamCharacters();
	std::cout << "Enemy team consists of : ";
	for (int i = 0; i < remainingTeam.size(); i++)
	{
		std::cout << remainingTeam[i].GetName() + ", ";
	}
	std::cout << std::endl;
}
