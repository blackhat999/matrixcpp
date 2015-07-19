#include <isostream>

/*
Matrix.cpp:  forthe Matrix template class
Part of the Matrix library project
Author: blackhat999

Released under the CC0 1.0 Rights Waiver
and the Unlicense. See UNLICENSE
All rights nullified.
*/

#ifndef MATRIX_CPP_LIB_INCLUDED //prevent repeated includes
#define MATRIX_CPP_LIB_INCLUDED

template<class C> class Matrix{  //used template to allow selection of float, double, int, or long matrix
    private:                   // these members must be private to avoid leaking memory
    C **data;                  // stores a pointer the type-indepen
    int rows, cols;
    public:
    void setRows(int r);       // These functions resize the matrix's length and width 
    void setColumns(int c);    // by adding zero to grow the matrix and discarding data
    void Resize(int, r int c); //setRows(r); setColumns(c);
    
    
}

#endif