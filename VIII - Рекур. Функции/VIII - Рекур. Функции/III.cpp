//#include <iostream>
//#include <climits>
//using namespace std;
//void findMaxRecursive(int mass[], int size, int index, int& maxValue, int& maxIndex) {
//    if (index >= size) {
//        return;}
//    if (mass[index] > maxValue) {
//        maxValue = mass[index];
//        maxIndex = index;}
//    findMaxRecursive(mass, size, index + 1, maxValue, maxIndex);
//}
//int main() {
//    int size;
//
//    cout << "Enter a size of array: ";
//    cin >> size;
//
//    int* arr = new int[size];
//
//    cout << "Enter the elements: ";
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];}
//    int maxValue = INT_MIN;
//    int maxIndex = -1;
//    findMaxRecursive(arr, size, 0, maxValue, maxIndex);
//    cout << "Maximam element: " << maxValue << endl;
//    cout << "Index of it: " << maxIndex << endl;
//    return 0;
//}