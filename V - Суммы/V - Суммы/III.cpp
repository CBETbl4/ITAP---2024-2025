#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i=0;
	double S=0, a=1.0/(sqrt(3)), e;
	cin >> e;
	while (a > e)
	{
		S += a;
		i++; a /= sqrt(3);
	}
	cout << "S = " << S;
	return 0;
}
