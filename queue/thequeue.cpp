#include "thequeue.h"



void thequeue::push(int a)
{
	node *t = new node();
	t->info = a;
	t->next = nullptr;
	if (size == 0)
	{
		first = t;
		last = t;
		tam++;
	}
	else
	{
		last->next = t;
		last = t;
		tam++;
	}
}

void thequeue::pop()
{
	node *aux = first;
	first = first->next;
	delete aux;
	tam--;
	if (tam == 0)
	{
		last = nullptr;
	}
}

int thequeue::size()
{
	return tam;
}

int thequeue::front()
{
	return first->info;
}

int thequeue::back()
{
	return last->info;
}

bool thequeue::empty()
{
	return size==0;
}

thequeue::thequeue()
{
	first = nullptr;
	last = nullptr;
	tam = 0;
}

thequeue::thequeue(thequeue &a)
{
	node *aux = a.first;
	while (tam != a.tam)
	{
		push(aux->info);
		aux = aux->next;
	}
}


thequeue::~thequeue()
{
	while (tam != 0)
	{
		pop();
	}
}
