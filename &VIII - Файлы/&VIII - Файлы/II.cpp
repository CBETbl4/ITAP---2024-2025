#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream in("input1.txt");
    ofstream out("output.txt");
    vector<double> numbers;
    double num;
    while (in >> num) numbers.push_back(num);
    if (numbers.size() % 2 == 0) {
        for (size_t i = 0; i < numbers.size(); i += 2) {
            out << (numbers[i] + numbers[i + 1]) / 2 << endl;
        }
    }
    else {
        for (size_t i = 0; i < numbers.size()-1; i += 2) {
            out << (numbers[i] + numbers[i + 1]) / 2 << endl;
        }
        out << numbers.back();
    }
    return 0;
}