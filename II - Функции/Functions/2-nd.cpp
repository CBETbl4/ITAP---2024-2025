#include <iostream>
#include <cmath>
using namespace std;
float f(float x, int j)
{
	float S = 0;
	for (int i = 2; i <= j; i += 2)
	{
	    S+=x*x/j;
	}
	return S;
}
int main()
{
	float x, Summ=0;
	int n;
	cin >> x;
	cin >> n;
	for (int j = 2; j <= n; j += 2)
	{
	    Summ+=f(x,j);
	}
	cout << Summ;
	return 0;
}

