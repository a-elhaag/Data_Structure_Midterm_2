#pragma once
#include<iostream>

using namespace std;

class Stack
{
	private:
		int size;
		int* items;
		int top;

	public:
		Stack();
		~Stack();
		int is_empty();
		int is_full();
		void push(int);
		int pop();
		void display();
};

