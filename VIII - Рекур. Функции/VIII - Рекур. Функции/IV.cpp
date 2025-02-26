//#include <iostream>
//using namespace std;
//void printZeros(int row) {
//    if (row <= 0) return;
//    cout << "0 ";
//    printZeros(row - 1);
//}
//void printNumbers(int row, int current) {
//    if (current > row) return;
//    cout << row << " ";
//    printNumbers(row, current + 1);
//}
//void buildPyramid(int height, int current = 1) {
//    if (current > height) return;
//    printNumbers(current, 1);
//    cout << endl;
//    printZeros(current);
//    cout << endl;
//    buildPyramid(height, current + 1);
//}
//int main() {
//    int height;
//    cout << "Enter the height of the pyramid: ";
//    cin >> height;
//    buildPyramid(height);
//    return 0;
//}