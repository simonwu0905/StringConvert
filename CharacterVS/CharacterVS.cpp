// CharacterVS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Character.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string source, target;
	Character character;
	while (true)
	{
		cout << "kindly input the source string:" << endl;
		getline(std::cin, source);
		cout << "kindly input the target string:" << endl;
		getline(std::cin, target);
		cout << "Minimum convert number is " << character.minDistance(source, target) << endl;
	}
	return 0;
}

