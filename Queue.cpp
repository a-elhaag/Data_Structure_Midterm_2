#include "Queue.h"

Queue::Queue()
{
	cout << "Enter the no. of  element in the Queue: ";		cin >> size;
	items = new int[size];
	front = -1;
	rear = -1;
}

Queue::~Queue()
{
	delete[] items;
}

int Queue::is_empty()
{
	if (front == -1 || front > rear)
		return 1;
	return 0;
}

int Queue::is_full()
{
	if (rear == size - 1)
		return 1;
	return 0;
}

void Queue::enqueue(int item)
{
	if (is_full()) {
		cout << "Queue is Overflow";
		return;
	}
	if (is_empty())
		front = 0;
	items[++rear] = item;
}

int Queue::dequeue() {
	if (is_empty()) {
		cout << "Queue is underFlow";
		return -1;
	}
	int item = items[front];
	if (front == rear)
		front = rear = -1;
	else
		front++;
	return item;
}

void Queue::display()
{
	if (is_empty()) {
		cout << "Queue is underFlow";
		return;
	}
	for (int i{ front };i <= rear;i++)
		cout << items[i] << " ";
}