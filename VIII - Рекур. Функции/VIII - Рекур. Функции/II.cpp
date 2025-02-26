//#include <iostream>
//#include <string>
//using namespace std;
////int counter(const string &f)
////{
////	int i = 0;
////	for (char c : f)
////		if (isdigit(c))
////			i++;
////	return i;
////}
//int i = 0;
//int counter(const string& f, int a) {
//	if (a >= 1) { if (isdigit(f[a-1])) i++; }
//	else {
//		int j = i;
//		i = 0;
//		return j;
//	}
//	a = a - 1;
//	counter(f, a);
//}
//int main()
//{
//	string sent1, sent2;
//	cin >> sent1 >> sent2;
//	if (counter(sent1,sent1.size()) > counter(sent2, sent2.size()))
//		(cout << "Sentence 1 has more digits than Sentence 2") << endl;
//	else if (counter(sent1, sent1.size()) > counter(sent2, sent2.size()))
//		(cout << "Sentence 2 has more digits than Sentence 1") << endl;
//	else (cout << "Sentence 1 and 2 has equal count of digits") << endl;
//	cout << counter(sent1, sent1.size()) << endl << counter(sent2, sent2.size()) << endl;
//	i = 0;
//}