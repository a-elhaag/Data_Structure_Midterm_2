#include "Circular_Queue.h"

Circular_Queue::Circular_Queue()
{
	cout << "Enter the no. of  element in the Circular_Queue: ";		cin >> size;
	items = new int[size];
	front = -1;
	rear = -1;
}

Circular_Queue::~Circular_Queue()
{
	delete[] items;
}

int Circular_Queue::is_empty()
{
	if (front == -1)
		return 1;
	return 0;
}

int Circular_Queue::is_full()
{
	if ((front == 0 && rear == size - 1) || (front == rear + 1))
		return 1;
	return 0;
}

void Circular_Queue::enqueue(int item)
{
	if (is_full()) {
		cout << "Circular queue is overflow";
		return;
	}
	if (is_empty())
		front = rear = 0;
	else {
		if (rear == size - 1)
			rear = 0;
		else
			rear++;
	}
		items[rear] = item;
}

int Circular_Queue::dequeue()
{
	if (is_empty()) {
		cout << "queue is underflow";
		return -1;
	}
	int item = items[rear];
	if (front == rear)
		front = rear = -1;
	else {
		if (front == size - 1)
			front = 0;
		else
			front++;
	}
	return item;
}

void Circular_Queue::display()
{
	int pos_front = front, pos_rear = rear;
	if (is_empty()) {
		cout << "queue is underflow";
		return;
	}
	if (pos_front <= pos_rear)
		while (pos_front <= pos_rear)
			cout << items[pos_front++] << " ";
	else {
	while(pos_front<=size-1)
		cout << items[pos_front++] << " ";
	pos_front = 0;
	while (pos_front <= pos_rear)
		cout << items[pos_front++] << " ";
	}
}