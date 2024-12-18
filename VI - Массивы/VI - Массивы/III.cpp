#include <iostream>
#include <vector>
void fill(int n1, int m1, std::vector<std::vector<int>>& matrix)
{
    int currentNumber = 1;
    for (int n = 0; n < n1; ++n) {
        if (n % 2 == 0) {
            for (int m = 0; m < m1; ++m) matrix[n][m] = currentNumber++;
        }
        else {
            for (int m = m1 - 1; m >= 0; --m) matrix[n][m] = currentNumber++;
        }
    }
}
void transpose(const std::vector<std::vector<int>>& matrix, std::vector<std::vector<int>>& transponed)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) transponed[j][i] = matrix[i][j];
    }
}
void print(const std::vector<std::vector<int>>& matrix)
{
    for (const auto& n : matrix) {
        for (int num : n) std::cout << num << " ";
        std::cout << std::endl;
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    if (n > 0) {
        std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
        fill(n, m, matrix);
        std::vector<std::vector<int>> transposed(m, std::vector<int>(n));
        transpose(matrix, transposed);
        print(transposed);
    }
    else std::cout << "Error" << std::endl;

    return 0;
}