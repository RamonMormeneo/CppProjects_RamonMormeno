#pragma once
class MyStack
{
public:
	struct node
	{
		int info;
		node *next;
	};
	node *s;
	MyStack();
	MyStack(MyStack &a);
	MyStack(int size, int num);
	~MyStack();
	void pop();
	void push(int a);
	int top();
	int size();
	bool isEmpty();
};

