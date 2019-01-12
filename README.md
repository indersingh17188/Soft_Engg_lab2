# Soft_Engg_lab2
Laboratory no 2 for Software Engineering MSCV 2018-2020

This lab was all about Functions, arrays, and pointers. 

1 Preliminaries
Create and add to your project two files called Labs2.h and Labs2. Labs2.h  (it is your first personal header file and is going to contain all the signatures of the procedures and functions that will be implemented in the Labs2.cpp file. It may also contain variable definitions. 

2.2 How to pass parameters to a function
2.2.1 On passing parameters by value or by reference
Implement two functions called swap_1(int, int) and swap_2(int &, int &) that are supposed
to swap two values. Display the final values just before the end of each function, and display the results from the main function, before and after the call. What can you remark?


2.2.2 On passing parameters using pointers
Same question as before, but will now use pointers. Explain the differences with the previous question.


2.3 Multiple returned values
The keyword return an only return one value. You may sometimes need to return several values, sometimes an error code and several results as well. To do so, pass arguments by references to "return" multiple results. 


2.4 Default parameters
Implement a function IsMultipleOf(. . .) that determines if a number p is a multiple of number q. By default, q will be assigned to 2. In the main function, test this fun
tion with a given value for q, or without providing a value for q.


2.5 Recursive functions
A recursive functions is a function that calls itself during its execution. Declare and implement a recursive function called Prime which determines if a number p is a prime number (only multiple of 1 and p).


2.6 Monodimensional array
Declare and implement a function called ArraysExample1. Within this function, declare and
allocate a static array of 10 integers. Declare and allocate a dynamic array of 10 integers. For both arrays, each element at index i contains the value i. Display both arrays.


2.7 Bidimensional array - Pascal's triangle 
revisited the following exercise should be done for the following 2 cases:

1. Use a bidimensional array statically allocated
2. Use a bidimensional array dynamically allocated, thus using pointers of pointers. 


2.8 Multidimensional arrays as functions parameters (read and write)

In the main function: Declare and initialize two bidimensional arrays, A and B, with 3 × 3 elements. Values are up to you to verify the computations. Declare and initialize one bidimensional array, C, with 3×3 null elements. Declare and implement a function MultMatrix(. . .) that has A, B, C as parameters.
After the function call, matrix C should contain the results of the matricial product of A × B.
