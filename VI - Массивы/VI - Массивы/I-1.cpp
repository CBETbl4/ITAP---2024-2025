 #include <iostream>
 #include <cmath>
 using namespace std;
 int main()
 {
 	int n; cout << "n="; cin >> n;
 	int *a=new int[n+1], P = 1;
 	for (int i = 0; i < n; ++i)
 	{
 		cout << "a[" << i << "]="; cin >> a[i];
 	}
     for (int i = 0; i < n; ++i)
 	{
 		P*=a[i];
 	}
     if ((P/100)<10) cout<<"Yea";
     else "No";
     return 0;
 }