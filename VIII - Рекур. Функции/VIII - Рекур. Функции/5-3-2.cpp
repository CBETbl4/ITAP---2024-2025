#include <iostream>
using namespace std;
unsigned int nod(unsigned int a, unsigned int b)
{
    if (a < b) {
        swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        swap(a, b);
    }
    return b;
}
unsigned int nok(unsigned int a, unsigned int b) 
{
    return (a * b) / nod(a, b);
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> d >> c ;
    a = a / nod(b, a); b = b / nod(b, a);
    c = c / nod(c, d); d = d / nod(c, d);
    a = a * (nok(b, c) / c); d = d * (nok(b, c) / b);
    cout << a + d << '/' << nok(b, c);
}
