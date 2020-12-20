#pragma once

void PrintBattleground(char  battleground[10][10]);

void FillBattlegroundWithBlanks(char  battleground[10][10]);

int Translate(char c);

void PrintExamples();

void PrintSecondShip();

void PrintThirdShip();

void PrintFourthShip();

void PrintFifthShip();

void PrintError();

void PrintFirstRobotShipAlghorithm(char  battleground[10][10], int firstEnemyShipX[4], int firstEnemyShipY[4]);

void GameBeginPrint();

void PlayerShoot(char  input5[20], char  battleground[10][10]);

void GameTimeBaby(char  input5[20], char  battleground[10][10]);

int InsertFirstShip(char  input[20], char  battleground[10][10], int retflag);

bool ValidateColumnCharacterInput(char c, char battleground[10][10]);

bool ValidateRowCharacterInput(char c, char battleground[10][10]);

bool ValidateSpotIsntOccupiedInput(int c, int r, char battleground[10][10]);

bool InsertShipAtASpot(char symbol, int x, int y, char battleground[10][10]);

bool ValidateInputSpotsAreNeighbours(char input[12], char battleground[10][10]);

bool ValidateInputSpotsAreNeighboursForSecondShip(char input[12], char battleground[10][10]);

bool ValidateInputSpotsAreNeighboursForThirdAndFourthShip(char input[12], char battleground[10][10]);

bool ValidateInputSpotsAreNeighboursForFifthShip(char input[12], char battleground[10][10]);

void PrintSecondRobotShipAlghorithm(char  battleground[10][10], int secondEnemyShipX[4], int secondEnemyShipY[4]);

void PrintThirdRobotShipAlghorithm(char  battleground[10][10], int thirdEnemyShipX[4], int thirdEnemyShipY[4]);

void PrintFourthRobotShipAlghorithm(char  battleground[10][10], int fourthEnemyShipX[4], int fourthEnemyShipY[4]);

void PrintFifthRobotShipAlghorithm(char  battleground[10][10], int fifthEnemyShipX[4], int fifthEnemyShipY[4]);

void RemoveAllSizeFourShips(char battleground[10][10]);

void RemoveAllSizeThreeShips(char battleground[10][10]);

void RemoveAllSizeTwoShips(char battleground[10][10]);

void RemoveAllSizeTwov2Ships(char battleground[10][10]);

void RemoveAllSizeOneShips(char battleground[10][10]);

bool CheckIfIhaveAllyLeft(char battleground[10][10]);

int random_int(int min, int max);

bool AreThere8starsAroundIt(char battleground[10][10], int x, int y);

void RemoveAllEShips(char battleground[10][10], int Xes[], int Yes[], int count);

bool AreEnemiesAlive(char  battleground[10][10], int firstEnemyShipX[4], int firstEnemyShipY[4], int secondEnemyShipX[4], int secondEnemyShipY[4], int thirdEnemyShipX[4],
	int thirdEnemyShipY[4], int fourthEnemyShipX[4], int fourthEnemyShipY[4], int FifthEnemyShipX[4], int FifthEnemyShipY[4]);

void PlayerShootEnemy(char  input5[20], int  firstEnemyShipX[5], int  firstEnemyShipY[5], char  battleground[10][10], int  secondEnemyShipX[4], int  secondEnemyShipY[4], int  thirdEnemyShipX[3], int  thirdEnemyShipY[3], int  fourthEnemyShipX[3], int  fourthEnemyShipY[3], int  FifthEnemyShipX[2], int  FifthEnemyShipY[2]);

bool AreBothEnemiesAndAlliesAlive(char  battleground[10][10], int firstEnemyShipX[4], int firstEnemyShipY[4], int secondEnemyShipX[4], int secondEnemyShipY[4],
	int thirdEnemyShipX[4],
	int thirdEnemyShipY[4], int fourthEnemyShipX[4], int fourthEnemyShipY[4], int FifthEnemyShipX[4], int FifthEnemyShipY[4],
	int firstAllyShipX[4], int firstAllyShipY[4], int secondAllyShipX[4], int secondAllyShipY[4], int thirdAllyShipX[4],
	int thirdAllyShipY[4], int fourthAllyShipX[4], int fourthAllyShipY[4], int fifthAllyShipX[4], int fifthAllyShipY[4]);

int FindOpenSpotInArray(int* arr, int size);

int FillArrayWithNegativeNumbers(int* arr, int size);

int IsThereAnAllyAtCoords(int x, int y, int firstAllyShipX[4], int firstAllyShipY[4], int secondAllyShipX[4], int secondAllyShipY[4], int thirdAllyShipX[4],
	int thirdAllyShipY[4], int fourthAllyShipX[4], int fourthAllyShipY[4], int fifthAllyShipX[4], int fifthAllyShipY[4]);
