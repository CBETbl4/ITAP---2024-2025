#include <iostream>
using namespace std;
int nod(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> d >> c;
    int nm = a * c + d * b;
    int dm = b * c;
    int cd = nod(nm, dm);
    cout << nm / cd << '/' << dm / cd;
}