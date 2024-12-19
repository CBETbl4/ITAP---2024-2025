#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> twins(const vector<vector<int>>& matrix)
//{
//    int n = matrix.size();
//    vector<int> r(n, -1);
//    for (int j = 0; j < n; ++j) {
//        for (int i = 0; i < n; ++i) { // Проходим по строкам в текущем столбце
//            for (int k = 0; k < i; ++k) { // Проверяем все предыдущие элементы в этом столбце
//                if (matrix[i][j] == matrix[k][j]) {
//                    r[j] = k;
//                    break;
//                }
//            }
//            if (r[j] != -1) break;
//        }
//    }
//    return r;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<vector<int>> matrix(n, vector<int>(n)); 
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) cin >> matrix[i][j];}
//    //запуск через вводимую матрицу
//    /*vector<vector<int>> matrix = {
//        {1, 2, 4},
//        {4, 2, 5},
//        {1, 6, 3}
//    };*/
//    //запуск через определённую матрицу
//    vector<int> result = twins(matrix);
//    for (int j = 0; j < result.size(); ++j) cout << "col " << j << ": " << result[j] << endl;
//    return 0;
//}