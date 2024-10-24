#include <iostream>
#include <cmath>
float f(float x)
{
    if (x < 1) return ((x * x - 1) * (x * x - 1));
    else if (x > 1) return 1 / ((1 + x) * (1 + x));
    else return (0);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    float y, a, b, h;
    std::cin >> a >> b >> h;
    for (float i = a; i <= b; i += h)
    {
        /*if (f(i) == -2) std::cout << i << "    " << "Неопределена" << std::endl;
        else*/ std::cout << i << "    " << f(i) << std::endl;
    }
    return 0;
}