#include "Matrix.h"
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    // Create a 3x3 matrix filled with 3's
    cout << "A 3x4 matrix filled with 2's\n";
    Matrix matrix1(3, 4, 3);
    matrix1.print(cout);

    // Adds a barrier for neatness and clarity
    cout << "---------------------\n";

    // Create a 6x6 matrix filled with 6's
    cout << "A 6x6 matrix filed with 6's\n";
    Matrix matrix2(4, 6, 5);
    matrix2.print(cout);

      // Adds a barrier for neatness and clarity
    cout << "---------------------\n";

    // Creates a copy of matrix2 
    cout << "A different class of matrix that is a hard copy of the 4x6 matrix presented before\n";
    Matrix matrix5(matrix2);
    matrix5.print(cout);

      // Adds a barrier for neatness and clarity
    cout << "---------------------\n";

    int rows, columns, value, v, size;
    char ans;

    // create a nxm matrix filled with a single "value" (given by user)
    cout << "User inputed Rows and Columns, with a single value\n";

    do{

    cout << "Enter the number of rows: ";
    cin >> rows;
    // If user inputs anything but an int, the system will ask for a proper value.
     while (cin.fail()) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> rows;
    }

    cout << "Enter the number of columns: ";
    cin >> columns;
     while (cin.fail()) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> columns;
    }

    cout << "Enter a value to be defined in the matrix: ";
    cin >> value;
     while (cin.fail()) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> value;
    }


    cout << "---------------------\n";
    Matrix matrix3(rows, columns, value);
    matrix3.print(cout);
    cout << "---------------------\n";

    cout << "Test again or continue to next function? (Type y to test again or n to continue) ";
    cin >> ans;
    cout << endl;
    }while(ans == 'y' || ans == 'Y');

    cout << "---------------------\n";

    // create a nxm matrix filled with multiple values using vectors (given by user)
    cout << "User inputed Rows and Columns, with a multiple values\n";
    do{

    cout << "Enter the number of rows: ";
    cin >> rows;
     while (cin.fail()) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> rows;
    }

    cout << "Enter the number of columns: ";
    cin >> columns;
     while (cin.fail()) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> columns;
    }

    size = rows * columns;
    vector<int> values;
    cout << "Enter a value to be defined in the matrix: ";
    for (int i = 0; i < size; i++){
        cin >> v;
         while (cin.fail()) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> v;
    }

        values.push_back(v);
    }

    cout << "---------------------\n";
    Matrix matrix4(values, rows, columns);
    matrix4.print(cout);
    cout << "---------------------\n";

    cout << "Test again or end program? (Type y to test again or n to end) ";
    cin >> ans;
    cout << endl;
    }while(ans == 'y' || ans == 'Y');


}