#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int val)
	{
		data = val;
		next = NULL;
	}
};
struct queue{
	Node *front=NULL;
	Node *rear = NULL;
	void enqueue(int val)
	{
		Node *newNode = new Node(val);
		if(front == NULL && rear == NULL)
		{
		front = rear = newNode;
    	}
    	rear->next = newNode;
    	rear=newNode;
	}
	void dequeue()
	{
		if(front == NULL)
		{
			cout << "Queue is Empty" << endl;
			return;
		}
		Node *temp=front;
		front = front->next;
		delete temp;
	}
	int peek()
	{
		if(front == NULL)
		{
			cout << "Queue is Empty" << endl;
			return -1;
		}
		else
		{
			cout << front->data << endl;
		}
	}
	void display()
	{
		
		if(front == NULL)
		{
			cout << "Queue is Empty" << endl;
			return;
		}
		 Node *temp = front;
        cout << "Queue: " << endl;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
	}
	bool isempty()
	{
			if(front == NULL)
		{
			cout << "True" << endl;
		}
		else
		{
			cout<< "False" << endl;
		}
		
	}
};
#endif

