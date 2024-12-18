///*
//    we enter the length of the array, then we determine its length after line 12.
//    we use long long to prevent int overflow with very large numbers
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> array(n);
//    for (int i = 0; i < n; ++i) cin >> array[i];
//    long long p = 1;
//    for (int i = 0; i < n; ++i) p *= array[i];
//    if (p >= 100 && p <= 999) cout << "Yes" << endl;
//    else cout << "No" << endl;
//    return 0;
//}