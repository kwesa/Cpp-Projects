#include "BullsCow.h"
#include <iostream>
using namespace std;
bool BullsCow::checkForValidInput(BullsCow bc[4])
{
	// This checks for valid input
	// check to see if each digit is greater than 0 and less than 10
	for (int i = 0; i < 4; i++)
	{
		if (bc[i].getInput() < 0 || bc[i].getInput() > 9)
		{
			cout << "Invalid select number from 0 to 9" << endl;
			return false;
		}
	}
	// check for duplicates
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (bc[i].getInput() == bc[j].getInput())
			{
				cout << "Invalid input no duplicates" << endl;
				return false;
			}
		}
	}
	return true;
}
bool BullsCow::checkForValidGuess(BullsCow bc[4])
{
	// checks to see if each digit is greater than 0 and less than 10
	for (int i = 0; i < 4; i++)
	{
		if (bc[i].getGuess() < 0 || bc[i].getGuess() > 9)
		{
			cout << "Invalid select number from 0 to 9" << endl;
			return false;
		}
	}
	// checks for duplicates
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (bc[i].getGuess() == bc[j].getGuess())
			{
				cout << "Invalid input no duplicates" << endl;
				return false;
			}
		}
	}
	return true;
}
bool BullsCow::checkForWinCondition(int bull, int cow)
{
	// This checks for the win condition
	if (bull == 4)
	{
		return true;
	}
	else
	{
		return false;
	}
}