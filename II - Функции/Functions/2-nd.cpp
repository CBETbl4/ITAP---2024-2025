#include <iostream>
#include <cmath>
using namespace std;
float summf(float x, int n)
{
	float S = 0;
	for (int i = 0; i >= n; i += 2)
	{
		S += (pow(x, i) / i);
	}
	return (S);
}
int main();
{
	float x;
	int n;
	cin >> x >> n;
	cout << summf(x, n);
	return 0;
}