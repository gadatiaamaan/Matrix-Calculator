#ifndef MATRIX_H_EXISTS
#define MATRIX_H_EXISTS
#include <iostream>

class matrix {
        int r; // int variable for the number of rows
	int c; // int variable for the number of columns
	int ** a; // int pointer to pointer that will be used for dynamic memory allocation for the 2D array that will store the matrix
public:
        matrix(int rows, int columns); // matrix constructor that will generate the 2D array for the matrix
        //~matrix(); // deconstructor to delete the memory and prevent memory leaks
	void makeMatrix(); // a void function that will create the matrix off of inputs
        // void showMatrix(); // a void function that will display the matrix based off of the inputs - no longer needed ever the operator was created
        matrix operator+(const matrix& matrix2); // the addition operator that will be called to add matricies
        matrix operator-(const matrix& matrix2); // the substraction operator that will be called to subtract matricies
        matrix operator*(const matrix& matrix2); // the multiplication operator that will be called to multiply matricies
        friend std::ostream& operator <<(std::ostream& printMatrix, const matrix& matrix2); // output stream operator to output the matrixes and the results to the math done to them
};
#endif
