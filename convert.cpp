//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 310-01
// Assignment: Assignment 1
// Due date: 01/22/2020
// Collaborators: NA
// Resources: NA
// Description: A program that converts binary to decimal and vice versa
//------------------------------------------------------------------------------
//Header file inclusion

#include<iostream>
#include<cmath>
using namespace std;

//Header file Inclusion finish

//Function declaration

long long convertDecimalToBinary(int n);
int convertBinaryToDecimal(long long n);
int inputDecimal();
long long inputBinary();

//Function declaration end

//main driver

int main()
{
		char choice;
		cout<<"Input choice for conversion: "<< endl <<"1 for binary to decimal, "
				<<"2 for decimal to binary: ";
		cin>>choice;
		switch(choice)
		{
				case '1':
				{
						long long binary = inputBinary();
						cout<<"The conversion for the binary number: "<<binary<<", is :"
								<<convertBinaryToDecimal(binary)<<endl;
						break;
				}
				case '2':
				{
						int decimal = 0;
						cout<<"Input decimal number: ";
						cin>>decimal;
						cout<<"The conversion for the decimal number: "<<decimal<<", is :"
								<<convertDecimalToBinary(decimal)<<endl;
						break;
				}
				default:
						cout<<"Invalid choice!";
		}
		return 0;
}

//main driver end


//Function definitions
//------------------------------------------------------------------------------
// Function Name: inputBinary
// incoming parameters: none 
// outgoing parameters: long long input - A long number that holds the binary
// value that has been checked for input
// Description: A function that forces the user to input in binary(0's and 1's)
//------------------------------------------------------------------------------
long long inputBinary()
{
		long long static input, x;
		int ar[10] = {0};
		bool inputNeeded = false;

		cout<<"Input binary number: ";
		cin>>input;

		x = input;
		for(int i = 0; i < 10; i++)
		{
				ar[i] = x % 10;
				if(ar[i]!=0&&ar[i]!=1)
				{
						cout<<"Please input valid binary number (0's and 1's)"<<endl;
						inputNeeded = true;
						break;
				}
				x/=10;
		}
		if(inputNeeded)
		{
				inputBinary();
		}

		return input;
}


//------------------------------------------------------------------------------
// Function Name: convertDecimalToBinary
// incoming parameters: int n - An int that holds the decimal value 
// outgoing parameters: long long binaryNumber - A long number that holds the 
// binary value
// Description: A function that converts decimal number to binary
//------------------------------------------------------------------------------
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

//Function definitions
//------------------------------------------------------------------------------
// Function Name: convertBinaryToDecimal
// incoming parameters: long long n - A long number that holds the binary value
// outgoing parameters: int decimalNumber - An int that returns with decimal 
// value 
// Description: A function that converts binary number to decimal
//------------------------------------------------------------------------------
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

//Function definition end
