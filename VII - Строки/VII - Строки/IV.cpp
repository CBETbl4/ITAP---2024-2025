using namespace std;
#include <iostream>
#include <string>
//bool incl_num(string s)
//{
//	for (int i = 0;i <= s.size();i++)
//		if (isdigit(s[i])) return true;
//	return false;
//}
int main()
{
	string str;
	cin >> str;
	char m = '/';
	for (int i = 0; i <= str.size(); i++)
		if (isdigit(str[i]))
			if (m < str[i]) m = str[i];
	if (m < '0') cout << "No numbers";/*if (incl_num(str)==false) cout<<"No numbers";*/
	else cout << m;
}