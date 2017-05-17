#include <deque>
#include <vector>
#include <iostream>
#include <queue>

/*
void main()
{
	std::deque <float> prices(10, 10.5);
	prices[9] = 32.43;
	prices.pop_front();
	std::deque <float>prices2(prices);
	prices2.push_front(5.64);
	prices2.push_front(20.31);
	prices2.insert(prices2.begin()+1,10);
	for (auto it = prices.end()-1; it != prices.begin()-1; --it)
	{
		std::cout <<*it <<"-";
	}
	std::cout << std::endl;
	for (auto i= prices2.begin(); i != prices2.end(); ++i)
	{
		std::cout << *i << "-";
	}
	std::cout << std::endl;
	std::cout << "Ahora con vectors" << std::endl;
	std::vector<float> pricesv(10, 10.5);
	pricesv[9] = 32.43;
	pricesv.erase(pricesv.begin());
	std::vector<float>prices2v(pricesv);
	prices2v.insert(prices2v.begin(), 5.64);
	prices2v.insert(prices2v.begin(), 20.31);
	prices2v.insert(prices2v.begin() + 1, 10);
	for (auto i = pricesv.end()-1; i !=pricesv.begin()-1; i--)
	{
		std::cout << *i << "-";
	}
	std::cout << std::endl;
	for (auto i = prices2v.begin(); i != prices2v.end(); i++)
	{
		std::cout << *i << "-";
	}

}*/

std::priority_queue <int> SuperMergeP(std::priority_queue <int> &a, std::priority_queue <int> &b)
{
	std::priority_queue <int> result;
	std::priority_queue <int> aux1=a;
	std::priority_queue <int> aux2=b;
	while (!aux1.empty())
	{
		result.push(aux1.top());
		aux1.pop();
	}
	while (!aux2.empty())
	{
		result.push(aux2.top());
		aux2.pop();
	}
	return result;
}

std::queue <int> concatQueue(std::queue <int> &a, std::queue <int> &b)
{
	std::queue <int> result;
	std::queue <int> aux1 = a;
	std::queue <int> aux2 = b;
	while (!aux1.empty())
	{
		result.push(aux1.front());
		aux1.pop();
	}
	while (!aux2.empty())
	{
		result.push(aux2.front());
		aux2.pop();
	}
	return result;
}