#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<float> array(N);
    for (int i = 0; i < N; ++i) cin >> array[i];
    int index_1 = -1;
    int index_2 = -1;
    for (int i = 0; i < N; ++i) {
        if (array[i] < 0) {
            if (index_1 == -1) index_1 = i;
            else if (index_2 == -1) {
                index_2 = i;
                break;}}}
    if (index_1 == -1 || index_2 == -1) {
        cout << fixed << setprecision(3) << 0.0 << endl;
        return 0;}
    double sum = 0.0;
    for (int i = index_1 + 1; i < index_2; ++i) sum += array[i];
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}