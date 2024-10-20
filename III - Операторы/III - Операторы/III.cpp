#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int x=2;
	/*for (; x <= 12; x = x + 2)
	{
		cout << x << "   " << x * 2.54 << endl;
	}*/
	/*while (x <= 12)
	{
		cout << x << "   " << x * 2.54 << endl;
		x += 2;
	}*/
	do
	{
		cout << x << "   " << x * 2.54 << endl;
		x += 2;
	} while (x <= 12);
}

