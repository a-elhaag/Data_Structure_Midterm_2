#include "Stack.h"

Stack::Stack()
{
	cout << "Enter the no. of  element in the Stack: ";		cin >> size;
	items = new int[size];
	top = -1;
}

int Stack::is_empty() 
{
	if (top == -1)
		return 1;
	return 0;
}

int Stack::is_full()
{
	if (top == size - 1)
		return 1;
	return 0;
}

void Stack::push(int item)
{
	if (is_full()) {
		cout << "stack is overflow";
		return;
	}
	items[++top] = item;
}

int Stack::pop()
{
	if (is_empty()) {
		cout << "Stack is underFlow";
		return -1;
	}
	return items[top--];
}

void Stack::display()
{
	if (is_empty()) {
		cout << "Stack is Empty";
		return;
	}
	for (int i{ top };i >= 0;i--)
		cout << items[i] << endl;
}

Stack::~Stack()
{
	delete[] items;
}