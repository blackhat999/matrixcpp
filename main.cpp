#include <iostream>
#include "matrix.h"

/*
Matrix.cpp: simple cmdline exec frontend for Matrix library
Part of the Matrix library project
Author: blackhat999

Released under the CC0 1.0 Rights Waiver.
All rights nullified.
*/

/*
okay so it looks like i should split this into three parts:

(1): the parser: converts a 1d text entry (iostream obj) into a 2d matrix
(2): the martrix class: takes care of storing the 2d matrix in memory
(3): the matrix operators: manipulate the matrix
*/

void opParse(char, class )

void main(int argc){
    
    if(argc == 3 || argc == 2)
    else{
    cout << "Please enter the first matrix: "
    cin >> Matrix m1;
    cin >> char op;
    cin >> Matrix m2;
    cout << opParse()
    }
}

template<class C> class Matrix{ //used template to allow selection of float, double, int, or long matrix
private:
C **data;
int rows, cols;
public:

}
