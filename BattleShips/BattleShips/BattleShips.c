#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "BattleShips.h"

#define rows 10
#define columns 10	

int main()
{
	char input[20];

	char input1[20];

	char input2[20];

	char input3[20];

	char input4[20];

	char input5[20];

	char battleground[rows][columns];

	int firstEnemyShipX[5];
	int firstEnemyShipY[5];

	int secondEnemyShipX[4];
	int secondEnemyShipY[4];

	int thirdEnemyShipX[3];
	int thirdEnemyShipY[3];

	int fourthEnemyShipX[3];
	int fourthEnemyShipY[3];

	int FifthEnemyShipX[2];
	int FifthEnemyShipY[2];

	int firstAllyShipX[5];
	int firstAllyShipY[5];

	int secondAllyShipX[4];
	int secondAllyShipY[4];

	int thirdAllyShipX[3];
	int thirdAllyShipY[3];

	int fourthAllyShipX[3];
	int fourthAllyShipY[3];

	int FifthAllyShipX[2];
	int FifthAllyShipY[2];

	FillBattlegroundWithBlanks(battleground);
	PrintBattleground(battleground);

	////FIRST ALLY SHIP
	PrintExamples();
	fgets(input, 20, stdin);
	input[sizeof(input) - 1] = '0';
	int count1 = 0;
	if (!ValidateInputSpotsAreNeighbours(input, battleground))
	{
		PrintError();
		return 69;
	}
	for (int i = 0; i < sizeof(input); i += 3)
	{
		if (input[i + 1] < 0 || input[i] < 0 || input[i] == '\n')
		{
			break;
		}
		if (input[i + 1] == ' ')
		{
			PrintError();
			return 69;
		}
		if (input[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input[i + 1];
		if (input[i + 1] == '1' && input[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			PrintError();
			return 69;
		}

		InsertShipAtASpot('1', rowToInsertShip, columnToInsertShip, battleground);
		firstAllyShipX[count1] = rowToInsertShip;
		firstAllyShipY[count1] = columnToInsertShip;
		count1++;
	}
	PrintBattleground(battleground);

	////SECOND ALLY SHIP
	PrintSecondShip();
	fgets(input1, 20, stdin);
	count1 = 0;
	input1[sizeof(input1) - 1] = '0';

	if (!ValidateInputSpotsAreNeighboursForSecondShip(input1, battleground))
	{
		PrintError();
		return 69;
	}
	for (int i = 0; i < sizeof(input1); i += 3)
	{
		if (input1[i + 1] < 0 || input1[i] < 0 || input1[i] == '\n')
		{
			break;
		}
		if (input1[i + 1] == ' ')
		{
			PrintError();
			return 69;
		}
		if (input1[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input1[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input1[i + 1];
		if (input1[i + 1] == '1' && input1[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '9';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			PrintError();
			return 69;
		}

		InsertShipAtASpot('2', rowToInsertShip, columnToInsertShip, battleground);
		secondAllyShipX[count1] = rowToInsertShip;
		secondAllyShipY[count1] = columnToInsertShip;
		count1++;
	}
	PrintBattleground(battleground);

	////THIRD ALLY SHIP
	PrintThirdShip();
	fgets(input2, 20, stdin);
	count1 = 0;
	input2[sizeof(input2) - 1] = '0';

	if (!ValidateInputSpotsAreNeighboursForThirdAndFourthShip(input2, battleground))
	{
		PrintError();;
		return 69;
	}
	for (int i = 0; i < sizeof(input2); i += 3)
	{
		if (input2[i + 1] < 0 || input2[i] < 0 || input2[i] == '\n')
		{
			break;
		}
		if (input2[i + 1] == ' ')
		{
			PrintError();
			return 69;
		}
		if (input2[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input2[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input2[i + 1];
		if (input2[i + 1] == '1' && input2[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			PrintError();
			return 69;
		}

		InsertShipAtASpot('3', rowToInsertShip, columnToInsertShip, battleground);
		thirdAllyShipX[count1] = rowToInsertShip;
		thirdAllyShipY[count1] = columnToInsertShip;
		count1++;
	}
	PrintBattleground(battleground);

	////FOURTH ALLY SHIP
	PrintFourthShip();
	fgets(input3, 20, stdin);
	count1 = 0;
	input3[sizeof(input3) - 1] = '0';

	if (!ValidateInputSpotsAreNeighboursForThirdAndFourthShip(input3, battleground))
	{
		PrintError();
		return 69;
	}
	for (int i = 0; i < sizeof(input3); i += 3)
	{
		if (input3[i + 1] < 0 || input3[i] < 0 || input3[i] == '\n')
		{
			break;
		}
		if (input3[i + 1] == ' ')
		{
			PrintError();
			return 69;
		}
		if (input3[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input3[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input3[i + 1];
		if (input3[i + 1] == '1' && input3[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			return 69;
		}

		InsertShipAtASpot('4', rowToInsertShip, columnToInsertShip, battleground);
		fourthAllyShipX[count1] = rowToInsertShip;
		fourthAllyShipY[count1] = columnToInsertShip;
		count1++;
	}
	PrintBattleground(battleground);

	////FIFTH ALLY SHIP
	PrintFifthShip();
	fgets(input4, 20, stdin);
	count1 = 0;
	input4[sizeof(input4) - 1] = '0';

	if (!ValidateInputSpotsAreNeighboursForFifthShip(input4, battleground))
	{
		PrintError();
		return 69;
	}
	for (int i = 0; i < sizeof(input4); i += 3)
	{
		if (input4[i + 1] < 0 || input4[i] < 0 || input4[i] == '\n')
		{
			break;
		}
		if (input4[i + 1] == ' ')
		{
			PrintError();
			return 69;
		}
		if (input4[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input4[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input4[i + 1];
		if (input4[i + 1] == '1' && input4[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			PrintError();
			return 69;
		}

		InsertShipAtASpot('5', rowToInsertShip, columnToInsertShip, battleground);
		FifthAllyShipX[count1] = rowToInsertShip;
		FifthAllyShipY[count1] = columnToInsertShip;
		count1++;
	}
	PrintBattleground(battleground);

	//START OF COMPUTER PLANTING PHASE
	PrintFirstRobotShipAlghorithm(battleground, firstEnemyShipX, firstEnemyShipY);
	PrintSecondRobotShipAlghorithm(battleground, secondEnemyShipX, secondEnemyShipY);
	PrintThirdRobotShipAlghorithm(battleground, thirdEnemyShipX, thirdEnemyShipY);
	PrintFourthRobotShipAlghorithm(battleground, fourthEnemyShipX, fourthEnemyShipY);
	PrintFifthRobotShipAlghorithm(battleground, FifthEnemyShipX, FifthEnemyShipY);

	PrintBattleground(battleground);
	GameBeginPrint();

	int xEnemyAttackCoords[100] = { -1 };
	int yEnemyAttackCoords[100] = { -1 };
	int PlayerOrComputerStartsFirst = 0;
	FillArrayWithNegativeNumbers(xEnemyAttackCoords, 100);
	FillArrayWithNegativeNumbers(yEnemyAttackCoords, 100);
	int count = 0;
	bool reIterate = false;
	while (AreBothEnemiesAndAlliesAlive(battleground,
		firstEnemyShipX, firstEnemyShipY, secondEnemyShipX, secondEnemyShipY, thirdEnemyShipX, thirdEnemyShipY,
		fourthEnemyShipX, fourthEnemyShipY, FifthEnemyShipX, FifthEnemyShipY,
		firstAllyShipX, firstAllyShipY, secondAllyShipX, secondAllyShipY, thirdAllyShipX, thirdAllyShipY,
		fourthAllyShipX, fourthAllyShipY, FifthAllyShipX, FifthAllyShipY))
	{
		if (!reIterate)
		{
			PlayerShootEnemy(input5,
				firstEnemyShipX, firstEnemyShipY, battleground, secondEnemyShipX, secondEnemyShipY, thirdEnemyShipX, thirdEnemyShipY,
				fourthEnemyShipX, fourthEnemyShipY, FifthEnemyShipX, FifthEnemyShipY);
		}

		int enemyX = random_int(0, 10);
		int enemyY = random_int(0, 10);
		for (size_t i = 0; i < 100; i++)
		{
			if (enemyX == xEnemyAttackCoords[i] && enemyY == yEnemyAttackCoords[i])
			{
				reIterate = true;
				break;
			}
		}
		
		if (reIterate)
		{
			reIterate = false;
			continue;
		}
		int xOpenSpot = FindOpenSpotInArray(xEnemyAttackCoords, 100);
		int YOpenSpot = FindOpenSpotInArray(yEnemyAttackCoords, 100);
		xEnemyAttackCoords[xOpenSpot] = enemyX;
		yEnemyAttackCoords[YOpenSpot] = enemyY;

		int result = IsThereAnAllyAtCoords(enemyX, enemyY, firstAllyShipX, firstAllyShipY, secondAllyShipX, secondAllyShipY, thirdAllyShipX, thirdAllyShipY,
			fourthAllyShipX, fourthAllyShipY, FifthAllyShipX, FifthAllyShipY);

		if (result == 4)
		{
			RemoveAllSizeFourShips(battleground);
		}
		if (result == 3)
		{
			RemoveAllSizeThreeShips(battleground);
		}
		if (result == 2)
		{
			RemoveAllSizeTwoShips(battleground);
		}
		if (result == 1)
		{
			RemoveAllSizeTwov2Ships(battleground);
		}
		if (result == 0)
		{
			RemoveAllSizeOneShips(battleground);
		}

		if (result != -1)
		{
			PrintBattleground(battleground);
		}

		count++;
	}

	bool EnemiesAlive = AreEnemiesAlive(battleground, firstEnemyShipX, firstEnemyShipY, secondEnemyShipX, secondEnemyShipY, thirdEnemyShipX, thirdEnemyShipY,
		fourthEnemyShipX, fourthEnemyShipY, FifthEnemyShipX, FifthEnemyShipY);

	bool AlliesAlive =
		AreEnemiesAlive(battleground, firstAllyShipX, firstAllyShipY, secondAllyShipX, secondAllyShipY, thirdAllyShipX, thirdAllyShipY,
			fourthAllyShipX, fourthAllyShipY, FifthAllyShipX, FifthAllyShipY);

	if (!AlliesAlive) 
	{
		printf("You lost, and it took %d rounds to beat you! \n \n \n", count);
	}

	if (!EnemiesAlive)
	{
		printf("Gratz you won! You and the robot played a total of %d rounds! \n \n \n", count);
	}
}

int IsThereAnAllyAtCoords(int x, int y, int firstAllyShipX[4], int firstAllyShipY[4], int secondAllyShipX[4], int secondAllyShipY[4], int thirdAllyShipX[4],
	int thirdAllyShipY[4], int fourthAllyShipX[4], int fourthAllyShipY[4], int fifthAllyShipX[4], int fifthAllyShipY[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (x == firstAllyShipX[i] && y == firstAllyShipY[i])
		{
			return 4;
		}
		else if (x == secondAllyShipX[i] && y == secondAllyShipY[i])
		{
			return 3;
		}
		else if (x == thirdAllyShipX[i] && y == thirdAllyShipY[i])
		{
			return 2;
		}
		else if (x == fourthAllyShipX[i] && y == fourthAllyShipY[i])
		{
			return 1;
		}
		else if (x == fifthAllyShipX[i] && y == fifthAllyShipY[i])
		{
			return 0;
		}
	}

	return -1;
}

int IsThereAnEnemyAtCoords(char  battleground[10][10], int x, int y, int firstEnemyShipX[4], int firstEnemyShipY[4], int secondEnemyShipX[4], int secondEnemyShipY[4], int thirdEnemyShipX[4],
	int thirdEnemyShipY[4], int fourthEnemyShipX[4], int fourthEnemyShipY[4], int FifthEnemyShipX[4], int FifthEnemyShipY[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (x == firstEnemyShipX[i] && y == firstEnemyShipY[i])
		{
			RemoveAllEShips(battleground, firstEnemyShipX, firstEnemyShipY, 4);
			return 1;
		}
		else if (x == secondEnemyShipX[i] && y == secondEnemyShipY[i])
		{
			RemoveAllEShips(battleground, secondEnemyShipX, secondEnemyShipY, 3);
			return 1;
		}
		else if (x == thirdEnemyShipX[i] && y == thirdEnemyShipY[i])
		{
			RemoveAllEShips(battleground, thirdEnemyShipX, thirdEnemyShipY, 2);
			return 1;
		}
		else if (x == fourthEnemyShipX[i] && y == fourthEnemyShipY[i])
		{
			RemoveAllEShips(battleground, fourthEnemyShipX, fourthEnemyShipY, 2);
			return 1;
		}
		else if (x == FifthEnemyShipX[i] && y == FifthEnemyShipY[i])
		{
			RemoveAllEShips(battleground, FifthEnemyShipX, FifthEnemyShipY, 1);
			return 1;
		}
	}

	return -1;
}

int FindOpenSpotInArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
}

int FillArrayWithNegativeNumbers(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = -5000 + i;
	}
}

void PlayerShootEnemy(char  input5[20], int  firstEnemyShipX[5], int  firstEnemyShipY[5], char  battleground[10][10], int  secondEnemyShipX[4], int  secondEnemyShipY[4], int  thirdEnemyShipX[3], int  thirdEnemyShipY[3], int  fourthEnemyShipX[3], int  fourthEnemyShipY[3], int  FifthEnemyShipX[2], int  FifthEnemyShipY[2])
{
	bool shot = false;
	fgets(input5, 5, stdin);
	input5[sizeof(input5) - 1] = '0';
	int y = Translate(input5[0]);
	int x;
	if (input5[1] == '1' && input5[2] == '0')
	{
		x = 9;
	}
	else
	{
		x = input5[1] - '0' - 1;
	}
	for (int i = 0; i < 4; i++)
	{
		if (x == firstEnemyShipX[i] && y == firstEnemyShipY[i])
		{
			RemoveAllEShips(battleground, firstEnemyShipX, firstEnemyShipY, 4);
			shot = true;
		}
		else if (x == secondEnemyShipX[i] && y == secondEnemyShipY[i])
		{
			RemoveAllEShips(battleground, secondEnemyShipX, secondEnemyShipY, 3);
			shot = true;
		}
		else if (x == thirdEnemyShipX[i] && y == thirdEnemyShipY[i])
		{
			RemoveAllEShips(battleground, thirdEnemyShipX, thirdEnemyShipY, 2);
			shot = true;
		}
		else if (x == fourthEnemyShipX[i] && y == fourthEnemyShipY[i])
		{
			RemoveAllEShips(battleground, fourthEnemyShipX, fourthEnemyShipY, 2);
			shot = true;
		}
		else if (x == FifthEnemyShipX[i] && y == FifthEnemyShipY[i])
		{
			RemoveAllEShips(battleground, FifthEnemyShipX, FifthEnemyShipY, 1);
			shot = true;
		}
	}
	if (shot) {
		PrintBattleground(battleground);
	}
}

bool AreEnemiesAlive(char  battleground[10][10], int firstEnemyShipX[4], int firstEnemyShipY[4], int secondEnemyShipX[4], int secondEnemyShipY[4], int thirdEnemyShipX[4],
	int thirdEnemyShipY[4], int fourthEnemyShipX[4], int fourthEnemyShipY[4], int FifthEnemyShipX[4], int FifthEnemyShipY[4])
{
	int alive = 5;

	if (battleground[firstEnemyShipX[0]][firstEnemyShipY[0]] == 'X')
	{
		alive--;
	}

	if (battleground[secondEnemyShipX[0]][secondEnemyShipY[0]] == 'X')
	{
		alive--;
	}

	if (battleground[thirdEnemyShipX[0]][thirdEnemyShipY[0]] == 'X')
	{
		alive--;
	}

	if (battleground[fourthEnemyShipX[0]][fourthEnemyShipY[0]] == 'X')
	{
		alive--;
	}
	if (battleground[FifthEnemyShipX[0]][FifthEnemyShipY[0]] == 'X')
	{
		alive--;
	}

	if (alive == 0)
	{
		return false;
	}

	return true;
}

bool AreBothEnemiesAndAlliesAlive(char  battleground[10][10], int firstEnemyShipX[4], int firstEnemyShipY[4], int secondEnemyShipX[4], int secondEnemyShipY[4], int thirdEnemyShipX[4],
	int thirdEnemyShipY[4], int fourthEnemyShipX[4], int fourthEnemyShipY[4], int FifthEnemyShipX[4], int FifthEnemyShipY[4],
	int firstAllyShipX[4], int firstAllyShipY[4], int secondAllyShipX[4], int secondAllyShipY[4], int thirdAllyShipX[4],
	int thirdAllyShipY[4], int fourthAllyShipX[4], int fourthAllyShipY[4], int fifthAllyShipX[4], int fifthAllyShipY[4])
{
	bool result = AreEnemiesAlive(battleground, firstEnemyShipX, firstEnemyShipY, secondEnemyShipX, secondEnemyShipY, thirdEnemyShipX, thirdEnemyShipY,
		fourthEnemyShipX, fourthEnemyShipY, FifthEnemyShipX, FifthEnemyShipY);

	bool result1 =
		AreEnemiesAlive(battleground, firstAllyShipX, firstAllyShipY, secondAllyShipX, secondAllyShipY, thirdAllyShipX, thirdAllyShipY,
			fourthAllyShipX, fourthAllyShipY, fifthAllyShipX, fifthAllyShipY);

	return result1 == true && result == true ? true : false;
}

void GameBeginPrint()
{
	printf("You've planted your ships, the computer has planted it's ships let the game BEGIN!!!.\n \n");
	printf("Now you need to select a square which has an enemy tank in it so you can blow them up!.\n \n");
	printf("Once again select a square in the format A4, C2, B8, G9 etc.. you can pick one at a time and take turns with the computer!.\n \n");
}

int random_int(int min, int max)
{
	return min + rand() % (max - min);
}

void PrintFirstRobotShipAlghorithm(char  battleground[10][10], int firstEnemyShipX[4], int firstEnemyShipY[4])
{
	srand((unsigned)time(0));

	int x = random_int(1, 9);
	int y = random_int(1, 9);

	bool foundFirstCombinationOfFreeCoordinates = false;
	bool foundSecondCombinationOfFreeCoordinates = false;

	while (!foundFirstCombinationOfFreeCoordinates)
	{
		if (ValidateSpotIsntOccupiedInput(x, y, battleground))
		{
			if (AreThere8starsAroundIt(battleground, x, y))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				firstEnemyShipX[0] = x;
				firstEnemyShipY[0] = y;
				InsertShipAtASpot('E', x, y, battleground);
				break;
			}
		}
		x = random_int(1, 9);
		y = random_int(1, 9);
	}

	int x1 = random_int(x - 1, x + 1);
	int y1 = random_int(y - 1, y + 1);

	while (!foundSecondCombinationOfFreeCoordinates)
	{
		if (x1 == x && y1 == y)
		{
			x1 = random_int(x - 1, x + 1);
			y1 = random_int(y - 1, y + 1);
			continue;
		}

		if (x1 == x + 1)
		{
			if (y1 == y + 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}
		else if (x1 == x - 1)
		{
			if (y1 == y - 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}

		if (ValidateSpotIsntOccupiedInput(x1, y1, battleground))
		{
			foundSecondCombinationOfFreeCoordinates = true;
			InsertShipAtASpot('E', x1, y1, battleground);
			firstEnemyShipX[1] = x1;
			firstEnemyShipY[1] = y1;
			break;
		}
		x1 = random_int(x - 1, x + 1);
		y1 = random_int(y - 1, y + 1);
	}
	if (y1 == y - 1)
	{
		bool result = false;
		if (ValidateSpotIsntOccupiedInput(x1, y1 - 1, battleground))
		{
			if (ValidateSpotIsntOccupiedInput(x1, y1 - 2, battleground))
			{
				result = true;
				InsertShipAtASpot('E', x1, y1 - 1, battleground);
				InsertShipAtASpot('E', x1, y1 - 2, battleground);
				firstEnemyShipX[2] = x1;
				firstEnemyShipX[3] = x1;
				firstEnemyShipY[2] = y1 - 1;
				firstEnemyShipY[3] = y1 - 2;
			}
		}
		if (!result)
		{
			if (ValidateSpotIsntOccupiedInput(x1, y + 1, battleground))
			{
				if (ValidateSpotIsntOccupiedInput(x1, y + 2, battleground))
				{
					InsertShipAtASpot('E', x1, y + 1, battleground);
					InsertShipAtASpot('E', x1, y + 2, battleground);
					firstEnemyShipX[2] = x1;
					firstEnemyShipX[3] = x1;
					firstEnemyShipY[2] = y + 1;
					firstEnemyShipY[3] = y + 2;
				}
			}
		}
	}
	else if (y1 == y + 1)
	{
		bool result = false;

		if (ValidateSpotIsntOccupiedInput(x1, y1 + 1, battleground))
		{
			if (ValidateSpotIsntOccupiedInput(x1, y1 + 2, battleground))
			{
				result = true;
				InsertShipAtASpot('E', x1, y1 + 1, battleground);
				InsertShipAtASpot('E', x1, y1 + 2, battleground);
				firstEnemyShipX[2] = x1;
				firstEnemyShipX[3] = x1;
				firstEnemyShipY[2] = y1 + 1;
				firstEnemyShipY[3] = y1 + 2;
			}
		}
		if (!result)
		{
			if (ValidateSpotIsntOccupiedInput(x1, y - 1, battleground))
			{
				if (ValidateSpotIsntOccupiedInput(x1, y - 2, battleground))
				{
					result = true;
					InsertShipAtASpot('E', x1, y - 1, battleground);
					InsertShipAtASpot('E', x1, y - 2, battleground);
					firstEnemyShipX[2] = x1;
					firstEnemyShipX[3] = x1;
					firstEnemyShipY[2] = y1 - 1;
					firstEnemyShipY[3] = y1 - 2;
				}
			}
		}
	}
	else
	{
		bool result = false;
		if (ValidateSpotIsntOccupiedInput(x1 - 1, y1, battleground))
		{
			if (ValidateSpotIsntOccupiedInput(x1 - 2, y1, battleground))
			{
				result = true;
				InsertShipAtASpot('E', x1 - 1, y1, battleground);
				InsertShipAtASpot('E', x1 - 2, y1, battleground);
				firstEnemyShipX[2] = x1 - 1;
				firstEnemyShipX[3] = x1 - 2;
				firstEnemyShipY[2] = y1;
				firstEnemyShipY[3] = y1;
			}
		}
		if (!result)
		{
			if (ValidateSpotIsntOccupiedInput(x + 1, y1, battleground))
			{
				if (ValidateSpotIsntOccupiedInput(x + 2, y1, battleground))
				{
					InsertShipAtASpot('E', x + 1, y1, battleground);
					InsertShipAtASpot('E', x + 2, y1, battleground);
					firstEnemyShipX[2] = x + 1;
					firstEnemyShipX[3] = x + 2;
					firstEnemyShipY[2] = y1;
					firstEnemyShipY[3] = y1;
				}
			}
		}
	}
}

void PrintSecondRobotShipAlghorithm(char  battleground[10][10], int secondEnemyShipX[4], int secondEnemyShipY[4])
{
	srand((unsigned)time(0));

	int x = random_int(1, 9);
	int y = random_int(1, 9);

	bool foundFirstCombinationOfFreeCoordinates = false;
	bool foundSecondCombinationOfFreeCoordinates = false;


	while (!foundFirstCombinationOfFreeCoordinates)
	{
		if (ValidateSpotIsntOccupiedInput(x, y, battleground))
		{
			if (AreThere8starsAroundIt(battleground, x, y))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				secondEnemyShipX[0] = x;
				secondEnemyShipY[0] = y;
				InsertShipAtASpot('B', x, y, battleground);
				break;
			}
		}
		x = random_int(1, 9);
		y = random_int(1, 9);
	}
	PrintBattleground(battleground);

	int x1 = random_int(x - 1, x + 1);
	int y1 = random_int(y - 1, y + 1);

	while (!foundSecondCombinationOfFreeCoordinates)
	{
		if (x1 == x && y1 == y)
		{
			x1 = random_int(x - 1, x + 1);
			y1 = random_int(y - 1, y + 1);
			continue;
		}

		if (x1 == x + 1)
		{
			if (y1 == y + 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}
		else if (x1 == x - 1)
		{
			if (y1 == y - 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}

		if (ValidateSpotIsntOccupiedInput(x1, y1, battleground))
		{
			foundSecondCombinationOfFreeCoordinates = true;
			InsertShipAtASpot('B', x1, y1, battleground);
			secondEnemyShipX[1] = x1;
			secondEnemyShipY[1] = y1;
			break;
		}
		x1 = random_int(x - 1, x + 1);
		y1 = random_int(y - 1, y + 1);
	}
	PrintBattleground(battleground);

	if (y1 == y - 1)
	{
		bool result = false;
		if (ValidateSpotIsntOccupiedInput(x1, y1 - 1, battleground))
		{
			InsertShipAtASpot('B', x1, y1 - 1, battleground);
			secondEnemyShipX[2] = x1;
			secondEnemyShipY[2] = y1 - 1;
			result = true;
		}
		if (!result)
		{
			if (ValidateSpotIsntOccupiedInput(x1, y + 1, battleground))
			{
				InsertShipAtASpot('B', x1, y + 1, battleground);
				secondEnemyShipX[2] = x1;
				secondEnemyShipY[2] = y1 + 1;
			}
		}
	}
	else if (y1 == y + 1)
	{
		bool result = false;

		if (ValidateSpotIsntOccupiedInput(x1, y1 + 1, battleground))
		{
			result = true;
			InsertShipAtASpot('B', x1, y1 + 1, battleground);
			secondEnemyShipX[2] = x1;
			secondEnemyShipY[2] = y1 + 1;
		}
		if (!result)
		{
			if (ValidateSpotIsntOccupiedInput(x1, y - 1, battleground))
			{
				result = true;
				InsertShipAtASpot('B', x1, y - 1, battleground);
				secondEnemyShipX[2] = x1;
				secondEnemyShipY[2] = y1 - 1;
			}
		}
	}
	else
	{
		bool result = false;
		if (ValidateSpotIsntOccupiedInput(x1 - 1, y1, battleground))
		{
			result = true;
			InsertShipAtASpot('B', x1 - 1, y1, battleground);
			secondEnemyShipX[2] = x1 - 1;
			secondEnemyShipY[2] = y1;
		}
		if (!result)
		{
			if (ValidateSpotIsntOccupiedInput(x + 1, y1, battleground))
			{
				InsertShipAtASpot('B', x + 1, y1, battleground);
				secondEnemyShipX[2] = x + 1;
				secondEnemyShipY[2] = y1;
			}
		}
	}
}

void PrintThirdRobotShipAlghorithm(char  battleground[10][10], int thirdEnemyShipX[4], int thirdEnemyShipY[4])
{
	srand((unsigned)time(0));

	int x = random_int(1, 9);
	int y = random_int(1, 9);

	bool foundFirstCombinationOfFreeCoordinates = false;
	bool foundSecondCombinationOfFreeCoordinates = false;


	while (!foundFirstCombinationOfFreeCoordinates)
	{
		if (ValidateSpotIsntOccupiedInput(x, y, battleground))
		{
			if (AreThere8starsAroundIt(battleground, x, y))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				thirdEnemyShipX[0] = x;
				thirdEnemyShipY[0] = y;
				InsertShipAtASpot('C', x, y, battleground);
				break;
			}
		}
		x = random_int(1, 9);
		y = random_int(1, 9);
	}

	int x1 = random_int(x - 1, x + 1);
	int y1 = random_int(y - 1, y + 1);

	while (!foundSecondCombinationOfFreeCoordinates)
	{
		if (x1 == x && y1 == y)
		{
			x1 = random_int(x - 1, x + 1);
			y1 = random_int(y - 1, y + 1);
			continue;
		}

		if (x1 == x + 1)
		{
			if (y1 == y + 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}
		else if (x1 == x - 1)
		{
			if (y1 == y - 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}

		if (ValidateSpotIsntOccupiedInput(x1, y1, battleground))
		{
			foundSecondCombinationOfFreeCoordinates = true;
			thirdEnemyShipX[1] = x1;
			thirdEnemyShipY[1] = y1;
			InsertShipAtASpot('C', x1, y1, battleground);
			break;
		}
		x1 = random_int(x - 1, x + 1);
		y1 = random_int(y - 1, y + 1);
	}
}

void PrintFourthRobotShipAlghorithm(char  battleground[10][10], int fourthEnemyShipX[4], int fourthEnemyShipY[4])
{
	srand((unsigned)time(0));

	int x = random_int(1, 9);
	int y = random_int(1, 9);

	bool foundFirstCombinationOfFreeCoordinates = false;
	bool foundSecondCombinationOfFreeCoordinates = false;

	while (!foundFirstCombinationOfFreeCoordinates)
	{
		if (ValidateSpotIsntOccupiedInput(x, y, battleground))
		{
			if (AreThere8starsAroundIt(battleground, x, y))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				fourthEnemyShipX[0] = x;
				fourthEnemyShipY[0] = y;
				InsertShipAtASpot('V', x, y, battleground);
				break;
			}
		}
		x = random_int(1, 9);
		y = random_int(1, 9);
	}

	int x1 = random_int(x - 1, x + 1);
	int y1 = random_int(y - 1, y + 1);

	while (!foundSecondCombinationOfFreeCoordinates)
	{
		if (x1 == x && y1 == y)
		{
			x1 = random_int(x - 1, x + 1);
			y1 = random_int(y - 1, y + 1);
			continue;
		}

		if (x1 == x + 1)
		{
			if (y1 == y + 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}
		else if (x1 == x - 1)
		{
			if (y1 == y - 1)
			{
				x1 = random_int(x - 1, x + 1);
				y1 = random_int(y - 1, y + 1);
				continue;
			}
		}

		if (ValidateSpotIsntOccupiedInput(x1, y1, battleground))
		{
			foundSecondCombinationOfFreeCoordinates = true;
			fourthEnemyShipX[1] = x1;
			fourthEnemyShipY[1] = y1;
			InsertShipAtASpot('V', x1, y1, battleground);
			break;
		}
		x1 = random_int(x - 1, x + 1);
		y1 = random_int(y - 1, y + 1);
	}
}

void PrintFifthRobotShipAlghorithm(char  battleground[10][10], int FifthEnemyShipX[4], int FifthEnemyShipY[4])
{
	printf("You've succesfully planted all of your battleships, now it's the computer's turn.\n \n");
	srand((unsigned)time(0));

	int x = random_int(1, 9);
	int y = random_int(1, 9);

	bool foundFirstCombinationOfFreeCoordinates = false;
	bool foundSecondCombinationOfFreeCoordinates = false;

	while (!foundFirstCombinationOfFreeCoordinates)
	{
		if (ValidateSpotIsntOccupiedInput(x, y, battleground))
		{
			if (AreThere8starsAroundIt(battleground, x, y))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				FifthEnemyShipX[0] = x;
				FifthEnemyShipY[0] = y;
				InsertShipAtASpot('N', x, y, battleground);
				break;
			}
		}
		x = random_int(1, 9);
		y = random_int(1, 9);
	}
}

bool AreThere8starsAroundIt(char battleground[rows][columns], int x, int y)
{
	if (battleground[x - 1][y - 1] == '*')
	{
		if (battleground[x - 1][y] == '*')
		{
			if (battleground[x - 1][y + 1] == '*')
			{
				if (battleground[x][y - 1] == '*')
				{
					if (battleground[x][y + 1] == '*')
					{
						if (battleground[x + 1][y + 1] == '*')
						{
							if (battleground[x + 1][y - 1] == '*')
							{
								if (battleground[x + 1][y] == '*')
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void PrintError()
{
	printf("Invalid input please restart the application!\n");
}

void PrintFifthShip()
{
	printf("Please enter the coordinates of your first ship of size 1: \n \n");
}

void PrintFourthShip()
{
	printf("Please enter the coordinates of your second ship of size 2: \n \n");
}

void PrintThirdShip()
{
	printf("Please enter the coordinates of your first ship of size 2: \n \n");
}

void PrintSecondShip()
{
	printf("Please enter the coordinates of your first ship of size 3: \n \n");
}

void PrintExamples()
{
	printf("Coordinates that are already occupied, don't exist or are invalid will be ignored.\n");
	printf("Example of valid coordinates for ship size 4: A1 A2 A3 A4\n");
	printf("Example of valid coordinates for ship size 3: G8 H8 H7 \n");
	printf("Example of valid coordinates for ship size 2: J4 J3 \n");
	printf("Example of valid coordinates for ship size 1: C9 \n");
	printf("Please enter the coordinates of your first ship of size 4: \n \n");
}

int Translate(char c) {
	switch (c)
	{
	case 'A': return 0;
		break;
	case 'B': return 1;
		break;
	case 'C': return 2;
		break;
	case 'D': return 3;
		break;
	case 'E': return 4;
		break;
	case 'F': return 5;
		break;
	case 'G': return 6;
		break;
	case 'H': return 7;
		break;
	case 'I': return 8;
		break;
	case 'J': return 9;
		break;
	default: return 69;
		break;
	}
}

bool NumberExistsInArray(int n, int arr[])
{
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (arr[i] == n)
		{
			return true;
		}
	}
	return false;
}

bool ValidateColumnCharacterInput(char c, char battleground[rows][columns])
{
	if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' ||
		c == '6' || c == '7' || c == '8' || c == '9' || c == '10' || c == '0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool ValidateRowCharacterInput(char c, char battleground[rows][columns])
{
	if (c == 'A' || c == 'B' || c == 'C' || c == 'D' ||
		c == 'E' || c == 'F' || c == 'G' || c == 'H' ||
		c == 'I' || c == 'J')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool ValidateSpotIsntOccupiedInput(int r, int c, char battleground[rows][columns])
{
	if (r < 0 || c < 0)
	{
		return false;
	}
	if (r >= 10 || c >= 10)
	{
		return false;
	}
	if (battleground[r][c] != '*')
	{
		return false;
	}
	return true;
}

bool InsertShipAtASpot(char symbol, int x, int y, char battleground[rows][columns])
{
	if (ValidateSpotIsntOccupiedInput(x, y, battleground)) {
		battleground[x][y] = symbol;
	}
}

bool ValidateInputSpotsAreNeighbours(char input[12], char battleground[rows][columns])
{
	char validatedInput[9];
	char doubleValidatedInput[2];
	int counter = 0;
	bool result = true;
	for (int i = 0; i < sizeof(input) * 3; i += 3)
	{
		if (input[i + 1] == ' ')
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		if (input[i] < 0 || input[i + 1] < 0)
		{
			break;
		}
		if (input[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input[i + 1];
		if (input[i + 1] == '1' && input[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		validatedInput[counter] = columnToInsertShip;
		counter++;
		validatedInput[counter] = rowToInsertShip;
		counter++;
	}
	for (int i = 0; i < (sizeof(validatedInput) - 1); i += 2)
	{
		int column = validatedInput[i];
		int row = validatedInput[i + 1];
		if (doubleValidatedInput[0] < 0)
		{
			doubleValidatedInput[0] = column;
			doubleValidatedInput[1] = row;
			continue;
		}

		for (int i = 0; i < sizeof(doubleValidatedInput); i++)
		{
			int testColumn = doubleValidatedInput[0];
			int testRow = doubleValidatedInput[1];
			if (row == testRow && column == testColumn)
			{
				result = false;
				break;
			}
			if (column != testColumn - 1 && column != testColumn &&
				column != testColumn + 1)
			{
				result = false;
				break;
			}
			if (row != testRow - 1 && row != testRow &&
				row != testRow + 1)
			{
				result = false;
				break;
			}
		}
		doubleValidatedInput[0] = column;
		doubleValidatedInput[1] = row;
	}
	return result;
}

bool ValidateInputSpotsAreNeighboursForSecondShip(char input[12], char battleground[rows][columns])
{
	char validatedInput[7];
	char doubleValidatedInput[2];
	int counter = 0;
	bool result = true;
	for (int i = 0; i < sizeof(input) * 3; i += 3)
	{
		if (input[i + 1] == ' ')
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		if (input[i] < 0 || input[i + 1] < 0)
		{
			break;
		}
		if (input[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input[i + 1];
		if (input[i + 1] == '1' && input[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		validatedInput[counter] = columnToInsertShip;
		counter++;
		validatedInput[counter] = rowToInsertShip;
		counter++;
	}
	for (int i = 0; i < (sizeof(validatedInput) - 1); i += 2)
	{
		int column = validatedInput[i];
		int row = validatedInput[i + 1];
		if (doubleValidatedInput[0] < 0)
		{
			doubleValidatedInput[0] = column;
			doubleValidatedInput[1] = row;
			continue;
		}

		for (int i = 0; i < sizeof(doubleValidatedInput); i++)
		{
			int testColumn = doubleValidatedInput[0];
			int testRow = doubleValidatedInput[1];
			if (row == testRow && column == testColumn)
			{
				result = false;
				break;
			}
			if (column != testColumn - 1 && column != testColumn &&
				column != testColumn + 1)
			{
				result = false;
				break;
			}
			if (row != testRow - 1 && row != testRow &&
				row != testRow + 1)
			{
				result = false;
				break;
			}
		}
		doubleValidatedInput[0] = column;
		doubleValidatedInput[1] = row;
	}
	return result;
}

bool ValidateInputSpotsAreNeighboursForThirdAndFourthShip(char input[12], char battleground[rows][columns])
{
	char validatedInput[5];
	char doubleValidatedInput[2];
	int counter = 0;
	bool result = true;
	for (int i = 0; i < sizeof(input) * 3; i += 3)
	{
		if (input[i + 1] == ' ')
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		if (input[i] < 0 || input[i + 1] < 0)
		{
			break;
		}
		if (input[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input[i + 1];
		if (input[i + 1] == '1' && input[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		validatedInput[counter] = columnToInsertShip;
		counter++;
		validatedInput[counter] = rowToInsertShip;
		counter++;
	}
	for (int i = 0; i < (sizeof(validatedInput) - 1); i += 2)
	{
		int column = validatedInput[i];
		int row = validatedInput[i + 1];
		if (doubleValidatedInput[0] < 0)
		{
			doubleValidatedInput[0] = column;
			doubleValidatedInput[1] = row;
			continue;
		}

		for (int i = 0; i < sizeof(doubleValidatedInput); i++)
		{
			int testColumn = doubleValidatedInput[0];
			int testRow = doubleValidatedInput[1];
			if (row == testRow && column == testColumn)
			{
				result = false;
				break;
			}
			if (column != testColumn - 1 && column != testColumn &&
				column != testColumn + 1)
			{
				result = false;
				break;
			}
			if (row != testRow - 1 && row != testRow &&
				row != testRow + 1)
			{
				result = false;
				break;
			}
		}
		doubleValidatedInput[0] = column;
		doubleValidatedInput[1] = row;
	}
	return result;
}

bool ValidateInputSpotsAreNeighboursForFifthShip(char input[12], char battleground[rows][columns])
{
	char validatedInput[3];
	char doubleValidatedInput[2];
	int counter = 0;
	bool result = true;
	for (int i = 0; i < sizeof(input) * 3; i += 3)
	{
		if (input[i + 1] == ' ')
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		if (input[i] < 0 || input[i + 1] < 0)
		{
			break;
		}
		if (input[i] == ' ')
		{
			i++;
		}
		char inputColumnToInsertShip = input[i];
		char inputRowToInsertShip;
		int rowToInsertShip;
		inputRowToInsertShip = input[i + 1];
		if (input[i + 1] == '1' && input[i + 2] == '0')
		{
			rowToInsertShip = 9;
			inputRowToInsertShip = '10';
		}
		else
		{
			rowToInsertShip = inputRowToInsertShip - '0' - 1;
		}


		if (!ValidateColumnCharacterInput(inputRowToInsertShip, battleground) ||
			!ValidateRowCharacterInput(inputColumnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}

		int columnToInsertShip = Translate(inputColumnToInsertShip);

		if (!ValidateSpotIsntOccupiedInput(rowToInsertShip, columnToInsertShip, battleground))
		{
			printf("Invalid input please restart the application!\n");
			break;
		}
		validatedInput[counter] = columnToInsertShip;
		counter++;
		validatedInput[counter] = rowToInsertShip;
		counter++;
	}
	for (int i = 0; i < (sizeof(validatedInput) - 1); i += 2)
	{
		int column = validatedInput[i];
		int row = validatedInput[i + 1];
		if (doubleValidatedInput[0] < 0)
		{
			doubleValidatedInput[0] = column;
			doubleValidatedInput[1] = row;
			continue;
		}

		for (int i = 0; i < sizeof(doubleValidatedInput); i++)
		{
			int testColumn = doubleValidatedInput[0];
			int testRow = doubleValidatedInput[1];
			if (row == testRow && column == testColumn)
			{
				result = false;
				break;
			}
			if (column != testColumn - 1 && column != testColumn &&
				column != testColumn + 1)
			{
				result = false;
				break;
			}
			if (row != testRow - 1 && row != testRow &&
				row != testRow + 1)
			{
				result = false;
				break;
			}
		}
		doubleValidatedInput[0] = column;
		doubleValidatedInput[1] = row;
	}
	return result;
}

void FillBattlegroundWithBlanks(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			battleground[i][j] = '*';
		}
	}
}

bool CheckIfIhaveAllyLeft(char battleground[rows][columns])
{
	bool result = false;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (battleground[i][j] == '1' ||
				battleground[i][j] == '2' ||
				battleground[i][j] == '3' ||
				battleground[i][j] == '4' ||
				battleground[i][j] == '5')
			{
				return result = true;
			}
		}
	}
	return result;
}

void RemoveAllSizeFourShips(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if (battleground[i][j] == '1')
			{
				battleground[i][j] = 'X';
			}
		}
	}
}

void RemoveAllEShips(char battleground[rows][columns], int x[], int y[], int count)
{
	for (int i = 0; i < count; i++)
	{
		battleground[x[i]][y[i]] = 'X';
	}
}

void RemoveAllSizeThreeShips(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if (battleground[i][j] == '2')
			{
				battleground[i][j] = 'X';
			}
		}
	}
}

void RemoveAllSizeTwoShips(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if (battleground[i][j] == '3')
			{
				battleground[i][j] = 'X';
			}
		}
	}
}

void RemoveAllSizeTwov2Ships(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if (battleground[i][j] == '4')
			{
				battleground[i][j] = 'X';
			}
		}
	}
}

void RemoveAllSizeOneShips(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if (battleground[i][j] == '5')
			{
				battleground[i][j] = 'X';
			}
		}
	}
}

void PrintBattleground(char battleground[rows][columns])
{
	for (int i = 0; i < rows; i++)
	{
		if (i < 9)
		{
			printf_s("  %d   ", i + 1);

		}
		else
		{
			printf_s("  %d  ", i + 1);
		}
		printf_s("   |");

		for (int j = 0; j < columns; j++)
		{
			if (battleground[i][j] != NULL)
			{
				if (battleground[i][j] == 'E' || battleground[i][j] == 'C' || battleground[i][j] == 'V' || battleground[i][j] == 'N' || battleground[i][j] == 'B')
				{
					printf_s("   *   ");
				}
				else
				{
					printf_s("   %c   ", battleground[i][j]);
				}
			}
		}
		printf_s("\n");
	}
	printf_s("         |");
	printf_s("____________________________________________________________________\n");
	printf_s("             A      B      C      D      E      F      G      H      I      J");
	printf_s("\n \n");
}
