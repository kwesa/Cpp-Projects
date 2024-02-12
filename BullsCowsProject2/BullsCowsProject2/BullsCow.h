#pragma once
#include <string>

class BullsCow
{
private:
	int input, guess, cows, bulls;
	const int SIZE = 4;
public:
	int getInput()
	{
		return input;
	}
	void setInput(int input)
	{
		this->input = input;
	}
	int getGuess()
	{
		return guess;
	}
	void setGuess(int guess)
	{
		this->guess = guess;
	}
	bool checkForValidInput(BullsCow bc[4]);
	bool checkForValidGuess(BullsCow bc[4]);
	bool checkForWinCondition(int bull, int cow);
};
