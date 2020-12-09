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

	FillBattlegroundWithBlanks(battleground);
	PrintBattleground(battleground);

	////FIRST ALLY SHIP
	PrintExamples();
	fgets(input, 20, stdin);
	input[sizeof(input) - 1] = '0';

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

		InsertShipAtASpot('A', rowToInsertShip, columnToInsertShip, battleground);
	}
	PrintBattleground(battleground);

	////SECOND ALLY SHIP
	PrintSecondShip();
	fgets(input1, 20, stdin);
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

		InsertShipAtASpot('A', rowToInsertShip, columnToInsertShip, battleground);
	}
	PrintBattleground(battleground);

	////THIRD ALLY SHIP
	PrintThirdShip();
	fgets(input2, 20, stdin);
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

		InsertShipAtASpot('A', rowToInsertShip, columnToInsertShip, battleground);
	}
	PrintBattleground(battleground);

	////FOURTH ALLY SHIP
	PrintFourthShip();
	fgets(input3, 20, stdin);
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

		InsertShipAtASpot('A', rowToInsertShip, columnToInsertShip, battleground);
	}
	PrintBattleground(battleground);

	////FIFTH ALLY SHIP
	PrintFifthShip();
	fgets(input4, 20, stdin);
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

		InsertShipAtASpot('A', rowToInsertShip, columnToInsertShip, battleground);
	}
	PrintBattleground(battleground);

	//START OF COMPUTER PLANTING PHASE
	PrintFirstRobotShipAlghorithm(battleground);
	PrintSecondRobotShipAlghorithm(battleground);
	PrintThirdRobotShipAlghorithm(battleground);
	PrintFourthRobotShipAlghorithm(battleground);
	PrintFifthRobotShipAlghorithm(battleground);

	GameBeginPrint();

	GameTimeBaby(input5, battleground);
}

void GameTimeBaby(char  input5[20], char  battleground[10][10])
{
	fgets(input5, 5, stdin);
	input5[sizeof(input5) - 1] = '0';
	int hitXCoords[200];
	int hitYCoords[200];
	int counter = 1;
	while (strchr(battleground, 'A') != NULL
		&& strchr(battleground, 'E') != NULL)
	{
		PlayerShoot(input5, battleground);
			int x = rand() % 10;
			int y = rand() % 10;

			bool hasHit = false;
			while (!hasHit)
			{
				for (int i = 0; i < counter; i++)
				{
					if (hitXCoords[i] == x)
					{
						if (hitYCoords[i] == y)
						{
							x = rand() % 10;
							y = rand() % 10;
						}
					}
					else
					{
						hitXCoords[counter - 1] = x;
						hitYCoords[counter - 1] = y;
						if (battleground[x][y] == 'A' || battleground[x][y] == 'E')
						{
							battleground[x][y] = 'X';
							PrintBattleground(battleground);
							hasHit = true;
							break;
						}

					}
				}
			}
			fgets(input5, 5, stdin);
			input5[sizeof(input5) - 1] = '0';
			PlayerShoot(input5, battleground);
			counter++;
		}
		if (strchr(battleground, 'A') != NULL)
		{
			printf("\n \nCongratulations you won!!!!!!\n");
			printf("\n \n \n");
		}
		else
		{
			printf("\n \nUnfortunately you weren't good enough... AND YOU LOST\n");
			printf("\n \n \n");
		}
	}

	void PlayerShoot(char  input5[20], char  battleground[10][10])
	{
		for (int i = 0; i < sizeof(input5); i++)
		{
			if (input5[i] < 0 || input5[i] == '0')
			{
				break;
			}
			int columnToDestroyShip = Translate(input5[0]);
			int rowToDestroyShip;
			if (input5[1] == '1' && input5[2] == '0')
			{
				rowToDestroyShip = 9;
			}
			else
			{
				rowToDestroyShip = input5[1] - '0' - 1;
			}
			if (battleground[rowToDestroyShip][columnToDestroyShip] == 'E')
			{
				battleground[rowToDestroyShip][columnToDestroyShip] = 'X';
				printf("You've succesfully landed a bomb onto an enemy warship! Keep it up!!!\n \n");
			}
			else if (battleground[rowToDestroyShip][columnToDestroyShip] == 'A')
			{
				battleground[rowToDestroyShip][columnToDestroyShip] = 'X';
				printf("Oh no! You've landed a bomb onto an ally warship! Be more careful!!!\n \n");
				break;
			}
		}
		PrintBattleground(battleground);
	}

	void GameBeginPrint()
	{
		printf("You've planted your ships, the computer has planted it's ships let the game BEGIN!!!.\n \n");
		printf("Now you need to select a square which has an enemy tank in it so you can blow them up!.\n \n");
		printf("Once again select a square in the format A4, C2, B8, G9 etc.. you can pick one at a time and take turns with the computer!.\n \n");
	}

	void PrintFirstRobotShipAlghorithm(char  battleground[10][10])
	{
		printf("You've succesfully planted all of your battleships, now it's the computer's turn.\n \n");
		srand((unsigned)time(0));
		int x = rand() % 10;
		int y = rand() % 10;

		bool foundFirstRandomCoordinate = false;
		bool foundFirstCombinationOfFreeCoordinates = false;
		bool foundSecondCombinationOfFreeCoordinates = false;
		bool foundThirdCombinationOfFreeCoordinates = false;
		bool foundFourthCombinationOfFreeCoordinates = false;

		while (!foundFirstCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(x + '0', battleground) &&
				ValidateColumnCharacterInput(y + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(x, y, battleground))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', x, y, battleground);
				break;
			}
			x = rand() % 10;
			y = rand() % 10;
		}
		InsertShipAtASpot('E', x, y, battleground);

		int xmax = x + 1;
		int xmin = x - 1 < 0 ? 0 : x - 1;
		int ymax = y + 1;
		int ymin = y - 1 < 0 ? 0 : y - 1;

		int firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
		int secondSecondCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundSecondCombinationOfFreeCoordinates)
		{
			printf("470.\n \n");

			if (ValidateColumnCharacterInput(firstSecondCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondSecondCoordinate + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstSecondCoordinate, secondSecondCoordinate, battleground)
				&& foundFirstRandomCoordinate)
			{
				if (x == firstSecondCoordinate && y == secondSecondCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondSecondCoordinate - 1 && y != secondSecondCoordinate &&
					y != secondSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstSecondCoordinate - 1 && x != firstSecondCoordinate &&
					x != firstSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				if (xmax - xmin == xmax)
				{
					firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
				}
				else
				{
					firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
				}
				if (ymax - ymin == ymax)
				{
					firstSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

				}
				else
				{
					secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
				}
				foundSecondCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstSecondCoordinate, secondSecondCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;
			}
			else
			{
				secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
			}
		}

		int firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
		int secondThirdCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundThirdCombinationOfFreeCoordinates)
		{
			printf("574.\n \n");
			if (ValidateColumnCharacterInput(firstThirdCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondThirdCoordinate + '0', battleground))
			{
				foundThirdCombinationOfFreeCoordinates = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstThirdCoordinate, secondThirdCoordinate, battleground)
				&& foundThirdCombinationOfFreeCoordinates)
			{
				if (firstThirdCoordinate == firstSecondCoordinate &&
					secondSecondCoordinate == secondThirdCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x == firstThirdCoordinate && y == secondThirdCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondThirdCoordinate - 1 && y != secondThirdCoordinate &&
					y != secondThirdCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstThirdCoordinate - 1 && x != firstThirdCoordinate &&
					x != firstThirdCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				if (xmax - xmin == xmax)
				{
					firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
				}
				else
				{
					firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
				}
				if (ymax - ymin == ymax)
				{
					secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

				}
				else
				{
					secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
				}
				if (xmax - xmin == xmax)
				{
					firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
				}
				else
				{
					firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
				}
				foundThirdCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstThirdCoordinate, secondThirdCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

			}
			else
			{
				secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
			}
			foundThirdCombinationOfFreeCoordinates = false;
		}

		int firstFourthCoordinate = rand() % (xmax - xmin) + xmin;
		int secondFourthCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundFourthCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(firstFourthCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondFourthCoordinate + '0', battleground))
			{
				foundFourthCombinationOfFreeCoordinates = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstFourthCoordinate, secondFourthCoordinate, battleground)
				&& foundFourthCombinationOfFreeCoordinates)
			{
				if (firstFourthCoordinate == firstSecondCoordinate &&
					secondSecondCoordinate == secondFourthCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstFourthCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstFourthCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondFourthCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondFourthCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x == firstFourthCoordinate && y == secondFourthCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstFourthCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstFourthCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondFourthCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondFourthCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondFourthCoordinate - 1 && y != secondFourthCoordinate &&
					y != secondFourthCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstFourthCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstFourthCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondFourthCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondFourthCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstFourthCoordinate - 1 && x != firstFourthCoordinate &&
					x != firstFourthCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstFourthCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstFourthCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondFourthCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondFourthCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				if (xmax - xmin == xmax)
				{
					firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
				}
				else
				{
					firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
				}
				if (ymax - ymin == ymax)
				{
					secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

				}
				else
				{
					secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
				}
				foundSecondCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstFourthCoordinate, secondFourthCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstFourthCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstFourthCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondFourthCoordinate = rand() % (ymax + 1 - ymin) + ymin;

			}
			else
			{
				secondFourthCoordinate = rand() % (ymax - ymin) + ymin;
			}
			foundFourthCombinationOfFreeCoordinates = false;
		}

		PrintBattleground(battleground);
	}

	void PrintSecondRobotShipAlghorithm(char  battleground[10][10])
	{
		srand((unsigned)time(0));
		int x = rand() % 10;
		int y = rand() % 10;

		bool foundFirstRandomCoordinate = false;
		bool foundFirstCombinationOfFreeCoordinates = false;
		bool foundSecondCombinationOfFreeCoordinates = false;
		bool foundThirdCombinationOfFreeCoordinates = false;

		while (!foundFirstCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(x + '0', battleground) &&
				ValidateColumnCharacterInput(y + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(x, y, battleground))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', x, y, battleground);
				break;
			}
			x = rand() % 10;
			y = rand() % 10;
		}
		InsertShipAtASpot('E', x, y, battleground);

		int xmax = x + 1;
		int xmin = x - 1 < 0 ? 0 : x - 1;
		int ymax = y + 1;
		int ymin = y - 1 < 0 ? 0 : y - 1;

		int firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
		int secondSecondCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundSecondCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(firstSecondCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondSecondCoordinate + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstSecondCoordinate, secondSecondCoordinate, battleground)
				&& foundFirstRandomCoordinate)
			{
				if (x == firstSecondCoordinate && y == secondSecondCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondSecondCoordinate - 1 && y != secondSecondCoordinate &&
					y != secondSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstSecondCoordinate - 1 && x != firstSecondCoordinate &&
					x != firstSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				foundSecondCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstSecondCoordinate, secondSecondCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;
			}
			else
			{
				secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
			}
		}

		int firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
		int secondThirdCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundThirdCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(firstThirdCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondThirdCoordinate + '0', battleground))
			{
				foundThirdCombinationOfFreeCoordinates = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstThirdCoordinate, secondThirdCoordinate, battleground)
				&& foundThirdCombinationOfFreeCoordinates)
			{
				if (firstThirdCoordinate == firstSecondCoordinate &&
					secondSecondCoordinate == secondThirdCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x == firstThirdCoordinate && y == secondThirdCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondThirdCoordinate - 1 && y != secondThirdCoordinate &&
					y != secondThirdCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstThirdCoordinate - 1 && x != firstThirdCoordinate &&
					x != firstThirdCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				foundThirdCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstThirdCoordinate, secondThirdCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstThirdCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstThirdCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondThirdCoordinate = rand() % (ymax + 1 - ymin) + ymin;

			}
			else
			{
				secondThirdCoordinate = rand() % (ymax - ymin) + ymin;
			}
			foundThirdCombinationOfFreeCoordinates = false;
		}

		PrintBattleground(battleground);
	}

	void PrintThirdRobotShipAlghorithm(char  battleground[10][10])
	{
		srand((unsigned)time(0));
		int x = rand() % 10;
		int y = rand() % 10;

		bool foundFirstRandomCoordinate = false;
		bool foundFirstCombinationOfFreeCoordinates = false;
		bool foundSecondCombinationOfFreeCoordinates = false;

		while (!foundFirstCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(x + '0', battleground) &&
				ValidateColumnCharacterInput(y + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(x, y, battleground))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', x, y, battleground);
				break;
			}
			x = rand() % 10;
			y = rand() % 10;
		}
		InsertShipAtASpot('E', x, y, battleground);

		int xmax = x + 1;
		int xmin = x - 1 < 0 ? 0 : x - 1;
		int ymax = y + 1;
		int ymin = y - 1 < 0 ? 0 : y - 1;

		int firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
		int secondSecondCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundSecondCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(firstSecondCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondSecondCoordinate + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstSecondCoordinate, secondSecondCoordinate, battleground)
				&& foundFirstRandomCoordinate)
			{
				if (x == firstSecondCoordinate && y == secondSecondCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondSecondCoordinate - 1 && y != secondSecondCoordinate &&
					y != secondSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstSecondCoordinate - 1 && x != firstSecondCoordinate &&
					x != firstSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				foundSecondCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstSecondCoordinate, secondSecondCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;
			}
			else
			{
				secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
			}
		}

		PrintBattleground(battleground);
	}

	void PrintFourthRobotShipAlghorithm(char  battleground[10][10])
	{
		srand((unsigned)time(0));
		int x = rand() % 10;
		int y = rand() % 10;

		bool foundFirstRandomCoordinate = false;
		bool foundFirstCombinationOfFreeCoordinates = false;
		bool foundSecondCombinationOfFreeCoordinates = false;

		while (!foundFirstCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(x + '0', battleground) &&
				ValidateColumnCharacterInput(y + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(x, y, battleground))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', x, y, battleground);
				break;
			}
			x = rand() % 10;
			y = rand() % 10;
		}
		InsertShipAtASpot('E', x, y, battleground);

		int xmax = x + 1;
		int xmin = x - 1 < 0 ? 0 : x - 1;
		int ymax = y + 1;
		int ymin = y - 1 < 0 ? 0 : y - 1;

		int firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
		int secondSecondCoordinate = rand() % (ymax - ymin) + ymin;

		while (!foundSecondCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(firstSecondCoordinate + '0', battleground) &&
				ValidateColumnCharacterInput(secondSecondCoordinate + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(firstSecondCoordinate, secondSecondCoordinate, battleground)
				&& foundFirstRandomCoordinate)
			{
				if (x == firstSecondCoordinate && y == secondSecondCoordinate)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (y != secondSecondCoordinate - 1 && y != secondSecondCoordinate &&
					y != secondSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}
				if (x != firstSecondCoordinate - 1 && x != firstSecondCoordinate &&
					x != firstSecondCoordinate + 1)
				{
					if (xmax - xmin == xmax)
					{
						firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
					}
					else
					{
						firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
					}
					if (ymax - ymin == ymax)
					{
						secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;

					}
					else
					{
						secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
					}
					continue;
				}

				foundSecondCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', firstSecondCoordinate, secondSecondCoordinate, battleground);

				break;
			}
			if (xmax - xmin == xmax)
			{
				firstSecondCoordinate = rand() % (xmax + 1 - xmin) + xmin;
			}
			else
			{
				firstSecondCoordinate = rand() % (xmax - xmin) + xmin;
			}
			if (ymax - ymin == ymax)
			{
				secondSecondCoordinate = rand() % (ymax + 1 - ymin) + ymin;
			}
			else
			{
				secondSecondCoordinate = rand() % (ymax - ymin) + ymin;
			}
		}

		PrintBattleground(battleground);
	}

	void PrintFifthRobotShipAlghorithm(char  battleground[10][10])
	{
		srand((unsigned)time(0));
		int x = rand() % 10;
		int y = rand() % 10;

		bool foundFirstRandomCoordinate = false;
		bool foundFirstCombinationOfFreeCoordinates = false;

		while (!foundFirstCombinationOfFreeCoordinates)
		{
			if (ValidateColumnCharacterInput(x + '0', battleground) &&
				ValidateColumnCharacterInput(y + '0', battleground))
			{
				foundFirstRandomCoordinate = true;
			}
			if (ValidateSpotIsntOccupiedInput(x, y, battleground))
			{
				foundFirstCombinationOfFreeCoordinates = true;
				InsertShipAtASpot('E', x, y, battleground);
				break;
			}
			x = rand() % 10;
			y = rand() % 10;
		}
		InsertShipAtASpot('E', x, y, battleground);

		PrintBattleground(battleground);
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
		if (battleground[r][c] == '*')
		{
			return true;
		}
		return false;
	}

	bool InsertShipAtASpot(char symbol, int r, int c, char battleground[rows][columns])
	{
		battleground[r][c] = symbol;
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
					if (battleground[i][j] == 'E')
					{
						printf_s("  '%c'  ", battleground[i][j]);
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
