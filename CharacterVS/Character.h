#pragma once

#include <string>
using namespace std;
class Character
{
public:
	Character();
	~Character();
	int minDistance(const string& source, const string& target);
private:
	int minValue(int a, int b, int c);
};

