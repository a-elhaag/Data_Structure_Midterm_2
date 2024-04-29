#include <iostream>
#include "Stack.h"
#include "Circular_Queue.h"
#include "Queue.h"

// Functions Prototypes
void Stack_test();
void Circular_Queue_test();
void Queue_test();

using namespace std;
int main()
{
	cout << "### Stack Test ###\n";
	Stack_test();
	cout << endl << endl;
	cout << "### Circular Queue Test ###\n";
	Circular_Queue_test();
	cout << endl << endl;
	cout << "### Queue Test ###\n";
	Queue_test();
	return 0;
}

void Stack_test()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.pop();
	s.pop();
	s.display();
}

void Circular_Queue_test()
{
	Circular_Queue cq;
	cq.enqueue(10);
	cq.enqueue(20);
	cq.enqueue(30);
	cq.enqueue(40);
	cq.dequeue();
	cq.dequeue();
	cq.enqueue(50);
	cq.display();
}

void Queue_test()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.dequeue();
	q.dequeue();
	q.enqueue(50);
	q.display();
}

