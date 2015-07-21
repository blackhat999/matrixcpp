#include "matrix.h"

/*
Matrix.cpp: code for the matrix template class
Part of the Matrix library project
Author: blackhat999

Released under the CC0 1.0 Rights Waiver
and the Unlicense.
All rights nullified.
*/


Matrix::Matrix(long int r, long int c, bool noinit){
    data = malloc(r*sizeof(C));
    for(long int rl = 0; rl < r; ++rl){
        data + rl = malloc(c*sizeof(C));
        for(long int cl = 0, cl < c; ++cl){
           if (noinit == true) *(*(data + rl) + cl) = 0;
        }
    }
}

inline Matrix::Matrix(long int r, long int c) Matrix(r,c,false);