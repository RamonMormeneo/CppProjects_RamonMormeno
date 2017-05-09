#include "MyStack.h"



MyStack::MyStack()
{
}


MyStack::~MyStack()
{
}

void MyStack::pop()
{
	node *aux;
	aux = s++;
	delete s;
}

void MyStack::push(int a)
{
	node *t;
	t = new node{ a,s };
	s = t;
}

int MyStack::top()
{
	return 0;
}

int MyStack::size()
{
	return 0;
}

bool MyStack::isEmpty()
{
	return false;
}
