#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float x;
	cout << "x = ";
	cin >> x;
	cout << setprecision(5) << (log(abs(cos(x)))) / log(1 + pow(x, 2));
	return 0;
}