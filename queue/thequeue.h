#pragma once
class thequeue
{
public:
	struct node
	{
		int info;
		node *next;
	};
	node *first;
	node *last;
	int tam;
	void push(int a);
	void pop();
	int size();
	int front();
	int back();
	bool empty();
	thequeue();
	thequeue(thequeue &a);
	~thequeue();
};

