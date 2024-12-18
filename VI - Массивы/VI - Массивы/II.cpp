#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double* arrow = new double[n];
    for (int i = 0; i < n; ++i) cin >> arrow[i];
    double maxNeg = numeric_limits<double>::lowest();
    bool test_for_negative = false;
    for (int i = 0; i < n; ++i) {
        if (arrow[i] < 0) test_for_negative = true;
            if (arrow[i] > maxNeg) maxNeg = arrow[i];}
    if (test_for_negative) cout << maxNeg << endl;
    else cout << "No negative in massive" << endl;
    return 0;
}