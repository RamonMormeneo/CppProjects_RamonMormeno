#include <list>
#include <iostream>
#include <algorithm>
#include <set>
std::list <int> superMerge(std::list <int> &a, std::list <int> &b)
{
	std::list <int> result(a);
	bool insert = false;
	for (std::list <int>::iterator it = b.begin(); it != b.end(); it++)
	{
		int aux = *it;
		for (std::list <int>::iterator it2 = result.begin(); it2 != result.end(); it2++)
		{
			if (aux >= *it2 && insert == false)
			{
				result.insert(it2 , aux);
				insert = true;
			}
		}
		std::list <int>::reverse_iterator it3 = result.rbegin();
		if (aux <= *it3)
		{
			result.push_back(aux);
		}
		insert = false;
	}
	return result;
}
void change(std::list <int> &a)
{
	int aux1 = a.front();
	int aux2 = a.back();
	a.pop_back();
	a.pop_front();
	a.push_back(aux1);
	a.push_front(aux2);
}
int getelementpos(std::list <int> &a,int pos)
{
	std::list<int>::iterator it = a.begin();
	std::advance(it, pos-1);
	int result = *it;
	return result;
}

void removeduplicates(std::list <int> &a)
{
	int aux;
	for (std::list<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		aux = *it;
		for (std::list<int>::iterator it2 = a.begin(); it2 != a.end(); it2++)
		{
			if (aux == *it2 && it2!= it)
			{
				a.erase(it2++);
				it2--;
			}
		}
	}
}
void removeElement(std::list <int> &a, int num)
{
	for (std::list<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it == num)
		{
			a.erase(it++);
			it--;
		}
	}
}

bool palindro(std::list <int> &a)
{
	std::list<int>::iterator it = a.begin();
	std::list <int>::reverse_iterator it2 = a.rbegin();
	bool result = true;
	int aux = 0;
	while (aux < a.size())
	{
		if (*it != *it2)
		{
			result = false;
		}
		it++;
		it2++;
		aux++;
	}
	if (result = true)
	{
		std:: cout << "HOLA";
	}
	return result;
}

void main()
{
	std::list<int> l1({ 5,4,3,2 });
	std::list<int> l2({ 9,8,7,6,1 });
	std::list<int> l3(superMerge(l1, l2));
	for (std::list<int>::iterator it = l3.begin(); it != l3.end(); it++)
		std::cout << ' ' << *it;


	std::cout << std::endl;

	change(l1);
	for (std::list<int>::iterator it2 = l1.begin(); it2 != l1.end(); it2++)
		std::cout << ' ' << *it2;

	std::cout << std::endl;

	std::cout << getelementpos(l2, 3)<< std:: endl;
	

	std::list<int> l4({ 9,8,9,9,6 });
	removeduplicates(l4);
	for (std::list<int>::iterator it3 = l4.begin(); it3 != l4.end(); it3++)
		std::cout << ' ' << *it3;

	std::list<int> l6({ 8,9,9,6 });
	removeElement(l6, 9);
	std::cout << std::endl;
	for (std::list<int>::iterator it4 = l6.begin(); it4 != l6.end(); it4++)
		std::cout << ' ' << *it4;

	std::list<int> l7({ 8,9,9,8 });
	palindro(l6);

}