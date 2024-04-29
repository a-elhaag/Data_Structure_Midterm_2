#pragma once
#include<iostream>

using namespace std;

class Circular_Queue
{
private:
	int size;
	int* items;
	int front;
	int rear;

public:
	Circular_Queue();
	~Circular_Queue();
	int is_empty();
	int is_full();
	void enqueue(int);
	int dequeue();
	void display();

};

