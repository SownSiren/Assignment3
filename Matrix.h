#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
using namespace std;
class Matrix {
public:
// Construction
Matrix(int m = 0, int n = 0, int fv = 0);
// Copy construction
Matrix(const Matrix& M);
// Construction from a vector
Matrix(vector<int> v, int m, int n );
// Destructor
~Matrix();
// Index operators
const int& operator()(int i, int j) const; //to work on const objects
int& operator()(int i, int j);
// Copy assignment operator
Matrix& operator=(const Matrix& m);
// Compound arithmetic operators
Matrix& operator+=(const Matrix& x);
Matrix& operator-=(const Matrix& x);
// Output
void print(ostream& sout) const; //display the matrix onto output stream
// sout neatly
int ncols() const; //return the number of columns
int nrows() const; // return the number of rows
private:
int rows; // number of rows
int cols; // number of columns
int *data; //dynamic array to hold data
};
#endif