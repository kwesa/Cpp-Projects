#include "HelloWorld.h"
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

void HelloWorld::sayHelloWorld()
{
	string input;
	cout << "Would you like to say Hello to the world? (yes/no)";
	cin >> input;
	if(input == "yes")

{
	cout << "HELLO WORLD!!!!!!!!!!!!" << endl;
}
else if(input == "no")
{
		cout << "Why wouldn't you want to say hello are you scared or something?" << endl;
}
system("pause");
}

