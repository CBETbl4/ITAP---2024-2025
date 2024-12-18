#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> array(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> array[i][j];}
    long long p = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) p *= array[i][j];}
    if (p >= 100 && p <= 999) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}