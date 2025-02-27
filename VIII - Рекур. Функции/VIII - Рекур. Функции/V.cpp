#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <typename T>
void inputMatrix(vector<vector<T>>& matrix, int rows, int cols) {
    cout << "Enter hte element (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];}}}
template <typename T>
void outputMatrix(const vector<vector<T>>& matrix, int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";}
        cout << endl;}}
template <typename T>
T calculateMatrixNorm(const vector<vector<T>>& matrix, int rows, int cols) {
    T norm = 0;
    for (int j = 0; j < cols; ++j) {
        T maxInCol = matrix[0][j];
        for (int i = 1; i < rows; ++i) {
            if (matrix[i][j] > maxInCol) {
                maxInCol = matrix[i][j];}}
        norm += maxInCol;}
    return norm;}
int main() {
    int rows, cols;
    cout << "Enter the count of rows an cols: ";
    cin >> rows >> cols;
    vector<vector<double>> matrix(rows, vector<double>(cols));
    inputMatrix(matrix, rows, cols);
    outputMatrix(matrix, rows, cols);
    double norm = calculateMatrixNorm(matrix, rows, cols);
    cout << "Standart of matrix: " << norm << endl;
    return 0;}