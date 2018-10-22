#pragma once	
#pragma once
// Lab7MyStack.h
// Jacob Silva
// COSC 2030
// 10/15/18

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <stack>
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <list>
using std::list;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

#ifndef LAB7MYSTACK_H
#define LAB7MYSTACK_H

class myStack
{
	
public:
	bool isEmpty() const;
	void push(char& c);
	char pull();
	//vector<char> data;
	list<char> data;
};

#endif