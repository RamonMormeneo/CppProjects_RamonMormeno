#include "forwardList.h"



forwardList::forwardList()
{
	first = nullptr;
}

forwardList::forwardList(forwardList & a)
{
	node *t = new node();
	node *aux = a.first;
	t->info = aux->info;
	t->next = nullptr;
	first = t;
	aux = aux->next;
	while (aux != nullptr)
	{
		node *p = new node();
		p->info = aux->info;
		p->next = first;
		first = p;
		aux = aux->next;
	}

}

void forwardList::push_front(int a)
{
	node *t = new node();
	t->next = first;
	t->info = a;
	first = t;
}

void forwardList::pop_front()
{
	node *t = first;
	first = t->next;
	delete t;
}

void forwardList::insertafter(node *a, int elemen)
{
	node *t = new node();
	t->info = elemen;
	t->next = a->next;
	a->next = t;
}


forwardList::~forwardList()
{
}
