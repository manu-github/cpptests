//permuite---not fully by myself
#include <iostream>
#include <string>

using namespace std;

string switchchars(string, int, int);
void permute(string, int);

int main()
{	
	permute("manu", 0);
	system("pause");
}

string switchchars(string topermute, int x, int y)
{
	string newstring = topermute;
	newstring[x] = newstring[y];
	newstring[y] = topermute[x]; //avoids temp variable
	return newstring;
}
void permute(string topermute, int place)
{
	if (place == topermute.length() - 1)
	{
		cout << topermute << endl;
	}
	for (int nextchar = place; nextchar < topermute.length(); nextchar++)
	{
		permute(switchchars(topermute, place, nextchar), place + 1);
	}
}
