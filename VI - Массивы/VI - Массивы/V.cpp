//#include <iostream>
//#include <vector>
//using namespace std;
//void insert(vector<int>& arr, int newElement)
//{
//    int maxValue = *max_element(arr.begin(), arr.end());
//    for (auto iterator1 = arr.begin(); iterator1 != arr.end(); ++iterator1) {
//        if (*iterator1 == maxValue) iterator1 = arr.insert(iterator1 + 1, newElement) + 1;
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> array(n);
//    for (int i = 0; i < n; ++i) cin >> array[i];
//    //vector<int> array = { 1, 3, 5, 3, 5, 2, 5, 4 }; //проверка
//    insert(array, 99);
//    for (int num : array) cout << num << " ";
//    cout << endl;
//    return 0;
//}