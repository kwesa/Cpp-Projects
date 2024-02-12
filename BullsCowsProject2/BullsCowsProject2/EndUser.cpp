#include "BullsCow.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int SIZE = 4;
	int input[SIZE] = {}, guess[SIZE] = {}, bull = 0, cow = 0, count = 0;
	BullsCow b;
	BullsCow* bc = new BullsCow[SIZE];
		// Input the numbers
	do
	{
		cout << "Enter 4 numbers: ";
		for (int i = 0; i < 4; i++)
		{
			cin >> input[i];
			bc[i].setInput(input[i]);
		}
		// check for duplicates and range errors
	} while (b.checkForValidInput(bc) != true);
	do
	{
		// Input the guesses
		do
		{
			cout << "Enter 4 guesses: ";
			for (int i = 0; i < 4; i++)
			{
				cin >> guess[i];
				bc[i].setGuess(guess[i]);
			}
			cout << "You have " << 10 - count << " guesses left." << endl;
			// check for duplicates and range errors
		}while(b.checkForValidGuess(bc) != true);
			// check for bulls and cows
		for (int i = 0; i < 4; i++)
		{
			// this checks to see if the input and guess in the same spot in the array
			if (bc[i].getInput() == bc[i].getGuess())
			{
				bull++;
			}
			// this checks to see if the input is in the array 
			else
			{
				for (int j = 0; j < 4; j++)
				{
					if (bc[i].getInput() == bc[j].getGuess())
					{
						cow++;
					}
				}
			}
		}
			// reset the bull and cow count
		if (b.checkForWinCondition(bull, cow) == true)
		{
			cout << "You win!" << endl;
			break;
		}
		else
		{
			cout << "Bulls: " << bull << endl;
			cout << "Cows: " << cow << endl;
			bull = 0;
			cow = 0;
		}
		count++;
	} while (count != 10);
	if (count == 10)
	{
		cout << "You lose!" << endl;
	}
	return 0;
};