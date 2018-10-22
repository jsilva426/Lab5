// Lab7MyStack.cpp
// Jacob Silva
// COSC 2030
// 10/15/18


#include "stdafx.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <stack>
using std::stack;
#include <vector>
using std::vector;
#include <list>
using std::list;
#include "Lab7MyStack.h"

bool myStack::isEmpty() const
{
	bool empty = false;
	if (data.size() == 0)
	{
		empty = true;
	}
	else
	{
		empty = false;
	}
	return empty;
}

void myStack::push(char& c)
{

	data.insert(data.begin(),c);

	
}

char myStack::pull()
{
	char temp;
	temp= data.front();
	data.erase(data.begin());
	return temp;
}

string stringReversal1(string input)  // Takes input and reverses the characters using a stack
{
	stack <char> temp;
	string out;
	for (int index = 0; index < input.length(); index++)  // creating a stack
	{
		temp.push(input.at(index));
	}
	while (!temp.empty()) //taking first value, storing in string, then clears first value of stack
	{
		out.push_back(temp.top());
		temp.pop();
	}

	return out;
}

string stringReversal2(string input) //Takes input and reverses characters using a vector
{
	vector <char> temp;
	string out;
	for (int index = 0; index < input.length(); index++)
	{
		temp.push_back(input.at(index));
	}
	while (!temp.empty())
	{
		out.push_back(temp.back());
		temp.pop_back();
	}

	return out;
}

string stringReversal3(string input) //Takes input and reverses characters using a list
{
	list <char> temp;
	string out;
	for (int index = 0; index < input.length(); index++)
	{
		temp.push_back(input.at(index));
	}
	while (!temp.empty())
	{
		out.push_back(temp.back());
		temp.pop_back();
	}

	return out;
}

string stringReversal4(string input)
{
	myStack stack;
	string out;
	for (int index = 0; index < input.length(); index++)  // creating a stack
	{
		stack.push(input.at(index));
	}
	while (!stack.isEmpty()) //taking first value, storing in string, then clears first value of stack
	{
		out.push_back(stack.pull());
		
	}

	return out;
}
