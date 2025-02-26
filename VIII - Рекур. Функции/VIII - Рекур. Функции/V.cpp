//#include <iostream>
//#include <cmath>
//using namespace std;
//double calculateY(double x) {
//    double term1 = sqrt(x * x + 1);
//    double term2 = sqrt(x * x + 5);
//    return term1 - term2;
//}
//void buildTable(double a, double b, double h, double current) {
//    if (current > b) return;
//    double y = calculateY(current);
//    if (isnan(y)) cout << "Function is undefined at x = " << current << endl;
//    else cout << "x = " << current << ", y = " << y << endl;
//    buildTable(a, b, h, current + h);
//}
//int main() {
//    double a, b, h;
//    cout << "Enter the start of the interval (a): ";
//    cin >> a;
//    cout << "Enter the end of the interval (b): ";
//    cin >> b;
//    cout << "Enter the step (h): ";
//    cin >> h;
//    buildTable(a, b, h, a);
//    return 0;
//}