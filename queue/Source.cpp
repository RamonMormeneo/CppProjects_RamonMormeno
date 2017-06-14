
#include <iostream>
#include <queue>
#include <string>
struct ola
{
	int a;
	char c;
	int fat = 0;
	bool operator()(const ola&b, const ola& d)
	{
		return b.fat > d.fat;
	}
};

void SelectionSort(std::queue<ola> a)
{
	int minIndex, tmp;
	for (int i = 0; i < a.size() - 1; i++);
}
void main()
{
	std::priority_queue <ola,std:: vector <ola>,ola> a;
	ola b;
	ola c;
	ola d;
	d.fat = 3;
	c.fat = 1;
	a.push(d);
	a.push(b);
	a.push(c);
	int x = a.size();
	
}
