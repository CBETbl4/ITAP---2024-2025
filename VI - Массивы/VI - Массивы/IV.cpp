#include <iostream>
#include <vector>
using namespace std;
void fill(int n1, std::vector<std::vector<int>>& matrix)
{
    int currentNumber = 1;
    for (int n = 0; n < n1; ++n) {
        if (n % 2 == 0) {
            for (int m = 0; m < n1; ++m) matrix[n][m] = currentNumber++;
        }
        else {
            for (int m = n1 - 1; m >= 0; --m) matrix[n][m] = currentNumber++;
        }
    }
}
vector<int> twins(const vector<vector<int>>& matrix)
{
    int n = matrix.size();
    vector<int> r(n, -1);
    for (int j = 0; j < n; ++j) { // �������� �� ������� �������
        for (int i = 0; i < n; ++i) { // �������� �� ������� � ������� �������
            for (int k = 0; k < i; ++k) { // ��������� ��� ���������� �������� � ���� �������
                if (matrix[i][j] == matrix[k][j]) {
                    r[j] = k;
                    break;
                }
            }
            if (r[j] != -1) {
                break;
            }
        }
    }
    return r;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 2, 5},
        {1, 6, 3}
    };
    vector<int> result = twins(matrix);
    for (int j = 0; j < result.size(); ++j) cout << "������� " << j << ": " << result[j] << endl;
    return 0;
}