using namespace std;
#include <iostream>
#include <string>
<<<<<<< HEAD
bool incl_num(string s)
{
	for (int i = 0;i <= s.size();i++)
		if (isdigit(s[i])) return true;
	return false;
}
=======
//bool incl_num(string s)
//{
//	for (int i = 0;i <= s.size();i++)
//		if (isdigit(s[i])) return true;
//	return false;
//}
>>>>>>> 0aa58eb87e6c8fe5cd81e57d0b201b16f8e3c2a2
int main()
{
	string str;
	cin >> str;
<<<<<<< HEAD
	char m = 0;
	for (int i = 0;i<=str.size();i++)
		if (isdigit(str[i]))
			if (m < str[i]) m = str[i];
	if (incl_num(str)==false) cout<<"No numbers";
=======
	char m = '/';
	for (int i = 0; i <= str.size(); i++)
		if (isdigit(str[i]))
			if (m < str[i]) m = str[i];
	if (m < '0') cout << "No numbers";/*if (incl_num(str)==false) cout<<"No numbers";*/
>>>>>>> 0aa58eb87e6c8fe5cd81e57d0b201b16f8e3c2a2
	else cout << m;
}