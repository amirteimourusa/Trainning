/* 
Name:     		Amirteimour Yarmohammadi
Date: 			Feb 14 2021
Assignment #:	Project 01
Language:		C++
Status: 		Completed
-------------------------------------------------------------------------
Comments:
This program will reads 2 integers from the keyboard(user),
Then the program calculates and prints the following:
The sum of the integers,
The product of the integers,
The average of the integers,
The quotient of the integers,
The remainder of the integers.
*/

#include <iostream>				// for cin, cout, endl
using namespace std;

// declaration of function prototypes
int  getData(string);
int  findSum(int, int);
int  findProduct(int, int);
int  findAverage(int, int );
int  findQuotient(int, int);
int  findRemainder(int, int);
void  displayResult(int, int, int, int, int, int, int);

// This is the main function
int main()
{
	// decleration of variables 
	int numberOne;               // user will enetr
	int numberTwo;               // user will enter
	int sum;
	int product;
	int average;
	int quotient;
	int remainder;
	
	cout << "Hello There,"<< endl;                                // will print out "hello there" at the begining of the run. 
	cout << "This is my Project 01 due on 14 Feb, 2021." << endl;
	cout << endl;
	
	/* at this part, program uses different functions thet we defined outside the main to get the input from user 
	and also do the calculations for sum, product, average, quotient, remainder, and at the edn, display results.*/
	
    numberOne = getData("Please enter the first  number ");                                           //Input section
    numberTwo = getData("Please enter the second number ");                                           //Input section
    sum       = findSum(numberOne , numberTwo);                                                       // calculation section
	product   = findProduct(numberOne , numberTwo);                                                   // calculation section
	average   = findAverage(numberOne , numberTwo);                                                   // calculation section
	quotient  = findQuotient(numberOne , numberTwo);                                                  // calculation section
	remainder = findRemainder(numberOne , numberTwo);                                                 // calculation section
    displayResult(numberTwo , numberTwo , sum, product, average, quotient, remainder);                // displays the results
    
    system("PAUSE");
    return 0;
	 
}                 //End of main

                  // At this part all of the functions the will be used in the main and their job will be defined.

int getData(string prompt)              // This function is to get the data from keyboard(user)
{
	int value;
	cout << prompt<< "   ";              // will ask the user to add first and second number
	cin >> value;                       // will let the user to type the number in to the program
	return value;                       // return the data to the main block to the respective function 
} // end of getData

int findSum(int numberOne, int numberTwo)               // This function is to find Sum
{
	int sum = numberOne + numberTwo;
	return sum;	                                       // return the data to the main numberTwolock to the respective function 
}  //end of findSum

int  findProduct(int numberOne, int numberTwo)         // This function is to find product
{
	int product = numberOne *numberTwo;
	return product;	                                   // return the data to the main numberTwolock to the respective function
}  //end of findProduct

int  findAverage(int numberOne, int numberTwo )        // This function is to find average
{
	int average = (numberOne + numberTwo) / 2;
	return average;	                                   // return the data to the main numberTwolock to the respective function
}  //end of findAverage

int  findQuotient(int numberOne, int numberTwo)        // This function is to find quotient
{
	int quotient = numberOne / numberTwo;
	return quotient;                                   // return the data to the main block to the respective function
}  //end of findQuotient

int  findRemainder(int numberOne, int numberTwo)       // This function is to find remainder
{
	int remainder = numberOne % numberTwo;
	return remainder;                                 // return the data to the main block to the respective function
}  //end of  findReemainder
                                   
								      // This will display the result 
void displayResult(int numberOne, int numberTwo, int answerSum,int answerProduct,int  answerAverage,int answerQuotient,int answerRemainder) 
{
	cout << endl; 
	cout << "The sum       of " << numberOne << " and " << numberTwo << " is     " << answerSum << endl;
	cout << "The product   of " << numberOne << " and " << numberTwo << " is     " << answerProduct << endl;
	cout << "The average   of " << numberOne << " and " << numberTwo << " is     " << answerAverage << endl;
	cout << "The quotient  of " << numberOne << " and " << numberTwo << " is     " << answerQuotient << endl;
	cout << "The remainder of " << numberOne << " and " << numberTwo << " is     " << answerRemainder << endl;
	cout << endl;
	cout << "Thank you, "<< endl;
	cout << "Amirteimour Yarmohammadi."<< endl;
}  //end of findResult
