#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double b1=2, b2=1, b;
	int n;
	cin >> n;
	cout <<"b(1) = "<< b1<<endl<<"b(2) = "<< b2<<endl;
	for (int i = 3;i<=n;i++)
	{
		b = (2. / 3) * b1 - (1. / 3) * b2 * b2;
		b1 = b2;
		b2 = b;
		cout << "b(" << i << ") = " << b << endl;
	}
	return 0;
}
