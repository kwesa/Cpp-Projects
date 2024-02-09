#pragma once
class LowScoreDrop
{
private:
	int test1, test2, test3, test4;
public:
	LowScoreDrop();
	void getScore(int* t1, int* t2, int* t3, int* t4);
	void calcAverage(int* t1, int* t2, int* t3, int* t4);
	int findLowest(int* t1, int* t2, int* t3, int* t4);
};