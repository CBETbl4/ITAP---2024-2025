#include <iostream>
#include <cmath>
int main()
{
	double S=0, fact=1;
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		S += (1/fact);
	}
	std::cout << S;
	return 0;
}