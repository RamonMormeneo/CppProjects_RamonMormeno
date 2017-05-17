#pragma once
class forwardList
{
public:
	struct node
	{
		int info;
		node *next;
	};
	node *first;
	forwardList();
	forwardList(forwardList &a);
	void push_front(int a);
	void pop_front();
	void insertafter(node *a, int elemen);
	~forwardList();
};

