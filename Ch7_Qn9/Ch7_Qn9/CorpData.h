#pragma once
class CorpData
{
private:
	int nEast, nWest, nSouth, nNorth, avgS;
public:
	CorpData();
	~CorpData();
	void eastSales(int* e);
	void westSales(int* w);
	void southSales(int* s);
	void northSales(int* n); 
	void avgSales(int* e, int* w, int* s, int* n, int* a);
	void totAvg();
	void setTot(int *e, int* w, int* s, int* n, int* t);
};