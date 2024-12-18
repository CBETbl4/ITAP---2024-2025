/*
    вводим длину массива, далее определяем его длину через 12 строку.
    используем long long для предотвращения переполнения int при очень больших числах
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; ++i) cin >> array[i];
    long long p = 1;
    for (int i = 0; i < n; ++i) p *= array[i];
    if (p >= 100 && p <= 999) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}