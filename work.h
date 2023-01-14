#pragma once
#include<iostream>
using namespace std;

class Node
{
public:
	Node* next;
	int data;
	Node()
	{
		next = nullptr;
		data = 0;
	}
	Node(int h)
	{
		data = h;
	}
};
class Quee
{
private:
	Node* head;
	Node* rear;
	Node* front;
public:
	Quee()
	{
		head = nullptr;
		rear = nullptr;
		front = nullptr;
	}
	void EnQuee(int a)
	{
		Node* n;
		n = new Node(a);
		if (head == NULL)
		{
			front = n;
			rear = n;
			head = n;
			n->next = n;
		}
		else
		{
			rear->next = n;
			n->next = front;
			rear = rear->next;
		}
	}
	void DeQuee()
	{
		Node* temp;
		temp = front;
		front = front->next;
		rear->next = front;
		delete(temp);

		
	}
	int Front()
	{
		return front->data;
	}
	void Print()
	{
		Node* curr = front;
		do
		{
			cout << curr->data << " ";
			curr = curr->next;
		} while (curr != rear->next);
	}

	void MoveNext()
	{
		front = front->next;
		rear = rear->next;
	}
};

