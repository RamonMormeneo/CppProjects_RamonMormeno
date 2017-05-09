#include "MyStack.h"



MyStack::MyStack()
{
}


MyStack::~MyStack()
{
}

void MyStack::pop()
{
	node *t = s;
	s = s->next;
	delete t;
}

void MyStack::push(int a)
{
	node *t;
	t = new node{ a,s };
	s = t;
}

int MyStack::top()
{
	return s->info;
}

int MyStack::size()
{
	return 0;
}

bool MyStack::isEmpty()
{
	return;
}
