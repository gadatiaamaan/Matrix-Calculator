# Matrix Calculator

## Overview
This program serves as a matrix calculator where users can perform addition, subtraction, and multiplication operations on matrices. It takes inputs for the dimensions of the matrices and performs the selected operation accordingly. The program ensures compatibility between matrices for the chosen operation and displays the resulting matrix.

## Technologies Used
- **C++**: The primary programming language used for implementing the matrix calculator. C++ offers powerful features such as operator overloading and dynamic memory allocation, making it suitable for this project.
- **GNU Make**: Utilized for building and managing the project. Makefiles simplify the compilation process and help in organizing the project structure.
- **Valgrind**: Used for memory leak detection and debugging. Valgrind's tools provide insights into memory-related issues, ensuring the program's stability and reliability.
- **UML Diagrams**: Used for initial planning and design of the program structure. Unified Modeling Language (UML) diagrams help visualize the class relationships and functionalities.

## Algorithms and Concepts
- **Dynamic Memory Allocation**: Utilized to create a 2D array for storing matrix elements. Dynamic memory allocation allows flexible memory management, enabling matrices of varying sizes to be handled efficiently.
- **Operator Overloading**: Used to define custom behaviors for operators such as addition, subtraction, and multiplication. Operator overloading simplifies the syntax for performing matrix operations, enhancing code readability.
- **Object-Oriented Programming (OOP)**: Implemented classes and objects to encapsulate data and functionality related to matrices. OOP principles such as encapsulation, inheritance, and polymorphism promote code reusability and maintainability.
- **User Input Validation**: Ensured that user inputs for matrix dimensions are valid and compatible with the selected operation. Input validation prevents erroneous inputs and enhances the user experience.
- **Debugging Techniques**: Employed techniques such as printing intermediate results and using tools like Valgrind for memory leak detection to debug the program. Debugging techniques help identify and resolve issues, ensuring the program functions as intended.

## Usage
To use the matrix calculator, follow these steps:
1. **Compile the program**: Use `make` to compile the program and generate the executable.
2. **Run the program**: Execute the program by running `./matrix` in the terminal.
3. **Choose operation**: Select the desired operation (addition, subtraction, or multiplication) from the menu.
4. **Enter matrix dimensions**: Input the dimensions (rows and columns) of the matrices as prompted.
5. **Input matrix elements**: Enter the values for each element of the matrices.
6. **View result**: The program will display the resulting matrix after performing the operation.
