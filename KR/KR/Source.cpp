#include <iostream>
#include <vector>
int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<std::vector<int>> array(N, std::vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) std::cin >> array[i][j];
    }
    int counter = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (array[i][j] % 2 != 0) counter++;
        }
    }
    std::cout << counter;
    return 0;
}