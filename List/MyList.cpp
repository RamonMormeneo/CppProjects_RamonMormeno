#include "MyList.h"



MyList::MyList()
{
	size = 0;
	last = nullptr;
	first = nullptr;
}

MyList::MyList(MyList &a)
{
	node *t=new node();
	node *aux = a.first;
	t->info = aux->info;
	size++;
	first = t;
	aux = aux->next;
	while (size!=a.size)
	{
		node *p= new node();
		p->info = aux->info;
		size++;
		t = p;
		aux = aux->next;
	}
	last = t;

}


MyList::~MyList()
{

}

void MyList::push_front(int num)
{
	node *t=new node ();
	t->info = num;
	if (size == 0)
	{
		last = t;
		first = t;
		size++;

	}
	else
	{
		first->previous = t;
		t->next = first;
		first = t;
		size++;
	}
}
