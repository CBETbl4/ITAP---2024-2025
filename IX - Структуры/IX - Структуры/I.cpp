#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>
using namespace std;
struct Point {
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    double distanceTo(const Point& other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));}};
vector<Point> readPoints(const string& filename) {
    ifstream file(filename);
    vector<Point> points;
    double x, y;
    while (file >> x >> y) points.emplace_back(x, y);
    return points;}
vector<Point> findMinPerimeterTriangle(const vector<Point>& points) {
    double min_perimeter = numeric_limits<double>::max();
    vector<Point> result;
    for (size_t i = 0; i < points.size(); ++i) {
        for (size_t j = i + 1; j < points.size(); ++j) {
            for (size_t k = j + 1; k < points.size(); ++k) {
                double perimeter = points[i].distanceTo(points[j])
                    + points[j].distanceTo(points[k])
                    + points[k].distanceTo(points[i]);
                if (perimeter < min_perimeter) {
                    min_perimeter = perimeter;
                    result = { points[i], points[j], points[k] };}}}}
    return result;}
int main() {
    auto points = readPoints("points.txt");
    if (points.size() < 3) {
        cout << "Not enough points\n";
        return 1;}
    auto triangle = findMinPerimeterTriangle(points);
    for (const auto& p : triangle) cout << "(" << p.x << ", " << p.y << ") ";
    return 0;
}