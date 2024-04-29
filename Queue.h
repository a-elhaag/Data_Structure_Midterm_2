#pragma once
#include<iostream>

using namespace std;

class Queue
{
private:
	int size;
	int* items;
	int front;
	int rear;

public:
	Queue();
	~Queue();
	int is_empty();
	int is_full();
	void enqueue(int);
	int dequeue();
	void display();
};

