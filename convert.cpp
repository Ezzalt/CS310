#include<iostream>
#include<cmath>
using namespace std;

long long convertDecimalToBinary(int n);
int convertBinaryToDecimal(long long n);
int inputDecimal();
long long inputBinary();

int main()
{
		long long binary = inputBinary();
		cout<<binary<<", "<<convertBinaryToDecimal(binary)<<endl;
		return 0;
}

long long inputBinary()
{
		long long input, x;
		int ar[10] = {0};
		boolean inputNeeded = false;

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
				}
				x/=10;
		}
		if(inputNeeded)

		return input;
}

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
