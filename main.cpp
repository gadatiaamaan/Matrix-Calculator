#include <iostream>
#include "matrix.h" // Including the matrix header file

using namespace std;

// Function to multiply two matrices
int Multiply() {
    int r1, r2, c1, c2; // Variables to store matrix dimensions

    // Prompting the user to input matrix dimensions
    cout << "Enter the number of rows in the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> c1;
    cout << "Enter the number of rows in the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> c2;

    // Checking if the matrices can be multiplied
    while (c1 != r2) {
        cout << "These matrices cannot be multiplied! The number of columns in the first matrix is not equal to the number of rows in the second matrix.\nPlease try again..." << endl;
        cout << "Enter the number of rows in the first matrix: ";
        cin >> r1;
        cout << "Enter the number of columns for the first matrix: ";
        cin >> c1;
        cout << "Enter the number of rows in the second matrix: ";
        cin >> r2;
        cout << "Enter the number of columns for the second matrix: ";
        cin >> c2;
    }

    // Creating two matrix objects with the given dimensions
    matrix x(r1, c1), y(r2, c2);

    // Making matrices by taking user input for matrix elements
    x.makeMatrix();
    cout << "\nThe first matrix is:\n" << endl;
    cout << x;

    y.makeMatrix();
    cout << "\nThe second matrix is:\n" << endl;
    cout << y;

    // Printing the result of matrix multiplication
    cout << "\nThe result of multiplying these matrices is...\n" << endl << x * y;
    return 0;
}

// Function to add two matrices
int Add() {
    int r1, r2, c1, c2; // Variables to store matrix dimensions

    // Prompting the user to input matrix dimensions
    cout << "Enter the number of rows in the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> c1;
    cout << "Enter the number of rows in the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> c2;

    // Checking if the matrices can be added
    while (c1 != c2 || r1 != r2) {
        cout << "These matrices cannot be added! The dimensions of the matrices are not compatible for addition.\nPlease try again..." << endl;
        cout << "Enter the number of rows in the first matrix: ";
        cin >> r1;
        cout << "Enter the number of columns for the first matrix: ";
        cin >> c1;
        cout << "Enter the number of rows in the second matrix: ";
        cin >> r2;
        cout << "Enter the number of columns for the second matrix: ";
        cin >> c2;
    }

    // Creating two matrix objects with the given dimensions
    matrix x(r1, c1), y(r2, c2);

    // Making matrices by taking user input for matrix elements
    x.makeMatrix();
    cout << "\nThe first matrix is:\n" << endl;
    cout << x;

    y.makeMatrix();
    cout << "\nThe second matrix is:\n" << endl;
    cout << y;

    // Printing the result of matrix addition
    cout << "\nThe result of adding these matrices is...\n" << endl << x + y;
    return 0;
}

// Function to subtract one matrix from another
int Subtract() {
    int r1, r2, c1, c2; // Variables to store matrix dimensions

    // Prompting the user to input matrix dimensions
    cout << "Enter the number of rows in the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> c1;
    cout << "Enter the number of rows in the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> c2;

    // Checking if the matrices can be subtracted
    while (c1 != c2 || r1 != r2) {
        cout << "These matrices cannot be subtracted! The dimensions of the matrices are not compatible for subtraction.\nPlease try again..." << endl;
        cout << "Enter the number of rows in the first matrix: ";
        cin >> r1;
        cout << "Enter the number of columns for the first matrix: ";
        cin >> c1;
        cout << "Enter the number of rows in the second matrix: ";
        cin >> r2;
        cout << "Enter the number of columns for the second matrix: ";
        cin >> c2;
    }

    // Creating two matrix objects with the given dimensions
    matrix x(r1, c1), y(r2, c2);

    // Making matrices by taking user input for matrix elements
    x.makeMatrix();
    cout << "\nThe first matrix is:\n" << endl;
    cout << x;

    y.makeMatrix();
    cout << "\nThe second matrix is:\n" << endl;
    cout << y;

    // Printing the result of matrix subtraction
    cout << "\nThe result of subtracting these matrices is...\n" << endl << x - y;
    return 0;
}

// Function to display the start menu and handle user input
int startMenu() {
    // Displaying the menu options
    cout << "Welcome to the Matrixulator!" << endl;
    cout << "What would you like to do?" << endl;
    cout << "0 - Quit!" << endl;
    cout << "1 - Addition of Matrices!" << endl;
    cout << "2 - Subtraction of Matrices!" << endl;
    cout << "3 - Multiplication of Matrices!" << endl;
    int menuchoice;
    cin >> menuchoice; // Taking user input for menu choice

    // Switching based on user's choice
    switch(menuchoice) {
        case 0:
            cout << "I hope I was able to help!" << endl;
            return 0;
        case 1:
            cout << "Let's Add Matrices!" << endl;
            Add(); // Calling the function to add matrices
            break;
        case 2:
            cout << "Let's Subtract Matrices!" << endl;
            Subtract(); // Calling the function to subtract matrices
            break;
        case 3:
            cout << "Let's Multiply Matrices!" << endl;
            Multiply(); // Calling the function to multiply matrices
            break;
        default:
            cout << "Sorry, I can't do that... Try something else maybe?" << endl;
            return -1;
    }
    return 0;
}

// Main function to start the program
int main() {
    startMenu(); // Calling the start menu function
    return 0;
}
