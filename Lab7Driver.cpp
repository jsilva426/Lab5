// Lab7Driver.cpp
// Jacob Silva
// COSC 2030
// 10/15/18

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "Lab7MyStack.h" 

int main()
{
	string input;
	cout << "Enter a string and it will be reversed using a stack : ";
	cin >> input;
	cout << endl << "Input: " << input << " Reversed: " << stringReversal1(input) << endl; //Test for reversal using stack

	cout << "Enter a string and it will be reversed using a vector : ";
	cin >> input;
	cout << "Input: " << input << " Reversed: " << stringReversal2(input) << endl; //test for reversal using vector

	cout << "Enter a string and it will be reversed using a List : ";
	cin >> input;
	cout << "Input: " << input << " Reversed: " << stringReversal3(input) << endl; //test for reversal using vector

	cout << "Enter in a string and it will be reversed using MyStack class: ";
	cin >> input;
	cout << "Input: " << input << " Reversed: "<< stringReversal4(input)<<endl;

	
	return 0;
}
