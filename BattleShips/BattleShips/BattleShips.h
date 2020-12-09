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

void PrintFirstRobotShipAlghorithm(char  battleground[10][10]);

void GameBeginPrint();

void PlayerShoot(char  input5[20], char  battleground[10][10]);

void GameTimeBaby(char  input5[20], char  battleground[10][10]);

int InsertFirstShip(char  input[20], char  battleground[10][10], int retflag);

bool ValidateColumnCharacterInput(char c, char battleground[10][10]);

bool ValidateRowCharacterInput(char c, char battleground[10][10]);

bool ValidateSpotIsntOccupiedInput(int c, int r, char battleground[10][10]);

bool InsertShipAtASpot(char symbol, int r, int c, char battleground[10][10]);

bool ValidateInputSpotsAreNeighbours(char input[12], char battleground[10][10]);

bool ValidateInputSpotsAreNeighboursForSecondShip(char input[12], char battleground[10][10]);

bool ValidateInputSpotsAreNeighboursForThirdAndFourthShip(char input[12], char battleground[10][10]);

bool ValidateInputSpotsAreNeighboursForFifthShip(char input[12], char battleground[10][10]);

void PrintSecondRobotShipAlghorithm(char  battleground[10][10]);

void PrintThirdRobotShipAlghorithm(char  battleground[10][10]);

void PrintFourthRobotShipAlghorithm(char  battleground[10][10]);

void PrintFifthRobotShipAlghorithm(char  battleground[10][10]);


