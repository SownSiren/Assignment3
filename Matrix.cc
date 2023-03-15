#include "Matrix.h"
#include <vector>
#include <iostream>

using namespace std;

#include "Matrix.h"

// Construction
// accepts three arguments: m being the number of rows, n being the number of
// columns, and an initialization value fv for the contents. If none of the arguments
// is supplied, the above constructor acts as a default constructor with the value of m
// and n set to 0.
Matrix::Matrix(int m, int n, int fv) : rows(m), cols(n) {
    data = new int[m*n];  
    for (int i = 0; i < m*n; i++) {
        data[i] = fv;
    }
}

// Copy construction
// accepts three arguments: m being the number of rows, n being the number of
// columns, and a vector v of int containing m*n integer values. It creates a matrix with the specified rows and columns and the values provided in the parameter
// v.
Matrix::Matrix(const Matrix& M) : rows(M.rows), cols(M.cols) {
    data = new int[rows*cols];
    for (int i = 0; i < rows*cols; i++) {
        data[i] = M.data[i];
    }
}

// Construction from a vector
// The copy constructor creates a new matrix object which is an
// identical copy of the object passed via parameter.
Matrix::Matrix(vector<int> v, int m, int n) : rows(m), cols(n) {
    data = new int[rows*cols];
    for (int i = 0; i < rows*cols; i++) {
        data[i] = v[i];
    }
}

// Destructor
// Releases the dynamic memory held by the matrix object.
Matrix::~Matrix() {
    delete [] data;
}

// Index operators
const int& Matrix::operator()(int i, int j) const {
    return data[i*cols + j];
}

int& Matrix::operator()(int i, int j) {
    return data[i*cols + j];
}

// Copy assignment operator
Matrix& Matrix::operator=(const Matrix& m) {
    if (this != &m) {
        rows = m.rows;
        cols = m.cols;
        delete [] data;
        data = new int[rows*cols];
        for (int i = 0; i < rows*cols; i++) {
            data[i] = m.data[i];
        }
    }
    return *this;
}

// Output
// Member function print outputs the matrix object to the output stream sout neatly
// formatted. Minimum requirement is that the matrix is displayed as a rectangular
// array.
void Matrix::print(ostream& sout) const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sout << data[i*cols + j] << " ";
        }
        sout << endl;
    }
}

// Return number of columns
int Matrix::ncols() const {
    return cols;
}

// Return number of rows
int Matrix::nrows() const {
    return rows;
}
