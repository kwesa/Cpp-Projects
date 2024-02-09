#pragma once
class CorpData
{
private:
	
	
public:
	CorpData();
	~CorpData();
	void compSales(int* qt1, int* qt2, int* qt3, int* qt4, int* e, int* w, int* s, int* n);
	void compTotal(int* qt1, int* qt2, int* qt3, int* qt4, int* tot1, int* tot2, int* tot3, int* tot4);
	void compAvg(int* tot1, int* tot2, int* tot3, int* tot4);
};