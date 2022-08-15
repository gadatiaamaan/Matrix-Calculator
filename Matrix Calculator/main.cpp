// main function of the entire matrix calculator
// does not do much but calls other functions 
// takes in the input of the main menu to direct the user to their place
// has functios for the operations they would like to do
// ensures matricies are doable for the specific operations
#include <iostream>
#include "matrix.h"



int Multiply() { // multiply function that multplies the matricies
	int r1, r2, c1, c2; // int variables that stores the values the of the rows and columns of the matricies off of the users inputs
	std::cout << "Enter the amounts of rows in the first matrix: ";
	std::cin >> r1;
	std::cout << "Enter the amount of columns for the first matrix: ";
	std::cin >> c1;
	std::cout << "Enter the amounts of rows in the second matrix: ";
	std::cin >> r2;
	std::cout << "Enter the amount of columns for the second matrix: ";
	std::cin >> c2;

	while (c1!=r2){ // while loop that ensures the columns of the first matrix is equal to the rows of the second. if not, the user is prompted to input the rows and columns again
		std::cout << "These matrices can not be multiplied! The columns of first matrix is not equal to rows of second.\n please try again...";
		std::cout << "\nEnter the amounts of rows in the first matrix: ";
		std::cin >> r1;
		std::cout << "Enter the amount of columns for the first matrix: ";
		std::cin >> c1;
		std::cout << "Enter the amounts of rows in the second matrix: ";
		std::cin >> r2;
		std::cout << "Enter the amount of columns for the second matrix: ";
		std::cin >> c2; }
        matrix x(r1, c1), y(r2, c2); // gives the matrix its values for the rows and columns of each matrix
        x.makeMatrix(); // creates the first matrix through the function in the matrix.cpp
        std::cout << "\nThe first matrix is:\n" << std::endl;
        std::cout << x; // prints the first matrix
        y.makeMatrix(); // creates the second matrix through the function in the matrix.cpp
        std::cout << "\nThe second matrix is:\n" << std::endl;
        std::cout << y; // prints the second matrix        	
	std::cout << "\nThe final answer to the multiplication of these matrices is...\n" << std::endl << x * y; // prints the final matrix
	return 0; }

int Add() { // addition function that adds two matricies together
	int r1, r2, c1, c2; // int variables that stores the values the of the rows and columns of the matricies off of the users inputs
        std::cout << "Enter the amounts of rows in the first matrix: ";
        std::cin >> r1;
        std::cout << "Enter the amount of columns for the first matrix: ";
        std::cin >> c1;
        std::cout << "Enter the amounts of rows in the second matrix: ";
        std::cin >> r2;
        std::cout << "Enter the amount of columns for the second matrix: ";
        std::cin >> c2;

	while (c1 != c2 || r1 != r2) { // while loop that ensures the size of the first matrix is equal to the size of the second. if not, the user is prompted to input the rows and columns again

		std::cout << "These matrices can not be added! The columns and rows of first matrix is not equal to the columns and rows of second.\n please try again...";
                std::cout << "\nEnter the amounts of rows in the first matrix: ";
                std::cin >> r1;
                std::cout << "Enter the amount of columns for the first matrix: ";
                std::cin >> c1;
                std::cout << "Enter the amounts of rows in the second matrix: ";
                std::cin >> r2;
                std::cout << "Enter the amount of columns for the second matrix: ";
                std::cin >> c2; }
        matrix x(r1, c1), y(r2, c2); // gives the matrix its values for the rows and columns of each matrix
        x.makeMatrix(); // creates the first matrix through the function in the matrix.cpp
        std::cout << "\nThe first matrix is:\n" << std::endl;
        std::cout << x; // prints the first matrix
        y.makeMatrix(); // creates the second matrix through the function in the matrix.cpp
        std::cout << "\nThe second matrix is:\n" << std::endl;
        std::cout << y; // prints the second matrix        	
	std::cout << "\nThe final answer to the addition of these matrices is...\n" << std::endl << x + y; // prints the final added matrix
        return 0; }

int Subtract() { // subtraction function that subtracts the second matrix from the first
	int r1, r2, c1, c2; // int variables that stores the values the of the rows and columns of the matricies off of the users inputs
        std::cout << "Enter the amounts of rows in the first matrix: ";
        std::cin >> r1;
        std::cout << "Enter the amount of columns for the first matrix: ";
        std::cin >> c1;
        std::cout << "Enter the amounts of rows in the second matrix: ";
        std::cin >> r2;
        std::cout << "Enter the amount of columns for the second matrix: ";
        std::cin >> c2;

        while (c1 != c2 || r1 != r2) { // while loop that ensures the size of the first matrix is equal to the size of the second. if not, the user is prompted to input the rows and columns again

                std::cout << "These matrices can not be subtracted! The columns and rows of first matrix is not equal to the columns and rows of second.\n please try again...";
                std::cout << "\nEnter the amounts of rows in the first matrix: ";
                std::cin >> r1;
                std::cout << "Enter the amount of columns for the first matrix: ";
                std::cin >> c1;
                std::cout << "Enter the amounts of rows in the second matrix: ";
                std::cin >> r2;
                std::cout << "Enter the amount of columns for the second matrix: ";
                std::cin >> c2; }
        matrix x(r1, c1), y(r2, c2); // gives the matrix its values for the rows and columns of each matrix
	x.makeMatrix(); // creates the first matrix through the function in the matrix.cpp
        std::cout << "\nThe first matrix is:\n" << std::endl;
	std::cout << x; // prints the first matrix
        y.makeMatrix(); // creates the second matrix through the function in the matrix.cpp
        std::cout << "\nThe second matrix is:\n" << std::endl;
	std::cout << y; // prints the second matrix        
        std::cout << "\nThe final answer to the subtraction of these matrices is...\n" << std::endl << x - y; // prints the final subtracted matrix
	return 0; }

int startMenu() { // the beginning menu that will be shown to the user and they will be able to pick what they would like to do.
        std::cout << "Welcome to the Matrixulator!" << std::endl;
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "0 - Quit!" << std::endl;
        std::cout << "1 - Addition Matricies!" << std::endl;
        std::cout << "2 - Subtraction of Matrices!" << std::endl;
        std::cout << "3 - Multiplication of Matricies!" << std::endl;
	int menuchoice; // creates a variable for the menu choice
	std::cin >> menuchoice; // takes the input of the choice

        switch(menuchoice) { // takes the input and sends them to one of the 4 cases between 0 and 3
                case 0:
                        std::cout << "I hope I was able to help!" << std::endl;
                        return 0;
                case 1:
                        std::cout << "Let's Add Matricies!" << std::endl;
                        Add();
			break;
                case 2:
                        std::cout << "Let's Subtract Matricies!" << std::endl;
                        Subtract();
			break;
                case 3:
			std::cout << "Let's Multiply Matricies!" << std::endl;
                        Multiply();
                        break;                
		default:
			std::cout << "Sorry, I can't do that... Try something else maybe?" << std::endl;
}}
int main() { // this function starts the program and call the main menu to take it from here.
	startMenu();
	return 0;
}
