// the c++ file for the matrix class
// this class has all of the math that is needed to add, subtract, and multiply matricies
// there are also functions to create and to display the matrixcies in this class
#include"matrix.h" // include the header file

matrix::matrix(int rows = 0, int columns = 0) { // the matrix constructor that gives the rows and colums default values before the user inputs thier values
	r = rows; // int variable for the matrix rows
	c = columns; // int variable for the matrix columnms
	a = new int* [r]; // takes the int of the pointer to the rows so that each row has a seperate array for its row
	int x; // int counter variable
	for (x = 0; x < r; x++){ // for loop for each row
		a[x] = new int[c];}} // a new array for each row.. 2D array for each row with the number of column in each row

/*matrix::~matrix() { // deconstructor to prevent any memory leaks
	int x; // int counter varaible 
	for (x = 0;x < r;x++) { // for loop to go through all rows
		delete[] a[x];} // deletes the arrays for the matrix
	delete[] a; // deletes the array
	delete a;} // deletes the pointers
*/

void matrix::makeMatrix() { // function to create the matrices
	std::cout << "Insert the values for the matrix..." << std::endl; // output statement
	int x; // int counter variable 
	for (x = 0; x < r; x++){ // for loop for each row
		int y; // int counter variable
		for (y = 0; y < c; y++) { // for loop for each column in the row
			std::cout << "What is Row " << x + 1 << ", " << "Column " << y + 1 << ": "; // asks for the value of the place in the matrix
			std::cin >> a[x][y];}}} // stores the value within the 2D array

matrix matrix::operator+(const matrix& matrix2) { // function that added two matricies together
	matrix temp(r, c); // creates temp values for the rows and columns to help add the values of matrix 1 to matrix 2
	int x; // int counter variable
	for (x = 0; x < r; x++) { // for loop for each row
		int y; // int counter variable
		for (y = 0; y < c; y++) { // for loop for each column
			temp.a[x][y] = a[x][y] + matrix2.a[x][y];}} // has the temp value store the result of the addition of the matricies
	return temp;} // returns the added matrix or the temp value

matrix matrix::operator-(const matrix& matrix2) { // function that subtracts the second matrix from the first
	matrix temp(r, c); // creates temp values for the rows and columns to help subtract the values of matrix 2 from matrix 1
	int x; // int counter variable
	for (x = 0; x < r; x++) { // for loop for each row
		int y; // int counter variable
		for (y = 0; y < c; y++) { // for loop for each column
			temp.a[x][y] = a[x][y] - matrix2.a[x][y];}} // has the temp value store the result of the subtraction of the matricies
        return temp;} // returns the subtracted matrix or the temp value

matrix matrix::operator*(const matrix& matrix2) { // function that multiplies two matricies together
	matrix temp(r, matrix2.c); // creates temp values for the rows in matrix 1 and columns in matrix 2
	int x; // int couter variable
	for (x = 0; x < r; x++) { // for loop for each row
		int y; // int counter variable
		for (y = 0; y < matrix2.c;y++) { // for loop for each column in matrix 2
			temp.a[x][y] = 0; // initializes the temp values within the arrays as zero
			int z; // int counter variable
			for (z = 0; z < c; z++) { // for loop for each column
				temp.a[x][y] = temp.a[x][y] + (a[x][z] * matrix2.a[z][y]);}}} // operation to multiply the matricies and store them into the temp arrays
	return temp;} // return the temp value which is the product of the matrix multiplication

std::ostream& operator <<(std::ostream& printMatrix, const matrix& matrix2) { // an insertion operater that takes the values of the matricies to print them
	int x; // int counter variable
	for (x = 0; x < matrix2.r; x++){ // for loop for each row
		int y; // counter variable
		for (y = 0; y < matrix2.c; y++){ // for loop for each column
			printMatrix << matrix2.a[x][y] << " ";} // gives the values of the 2D arrays to the printMatrix stream
		printMatrix << std::endl;} // prints the stream which is the matrix
	return printMatrix;} // returns the matrix



