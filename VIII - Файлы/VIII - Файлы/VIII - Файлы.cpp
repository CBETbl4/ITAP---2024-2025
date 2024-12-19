#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    if (!in.is_open()) return 1;
    string line, shortest;
    size_t min_l = SIZE_MAX;
    while (getline(in, line)) {
        size_t l = line.length();
        if (l < min_l) {
            min_l = l;
            shortest = line;}}
    if (min_l == SIZE_MAX) out << "The file is empty." << endl;
    else {
        out << "Shortest line: " << shortest << "\n";
        out << "Length: " << min_l << endl;}
    in.close();
    out.close();
    return 0;
}