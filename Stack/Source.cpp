#include <stack>
#include <iostream>
#include <queue>
#include "MyStack.h"
std::stack<int> SuperMerge(const std::stack<int> a, const std::stack<int> b)
{
	std::stack<int> resultad;
	std::stack<int> aux1(a);
	std::stack<int> aux2(b);
	std::stack<int> aux3;
	std::priority_queue <int> ordenar;
	while (!aux1.empty())
	{
		ordenar.push(aux1.top());
		aux1.pop();

	}
	while (!aux2.empty())
	{
		ordenar.push(aux2.top());
		aux2.pop();

	}
	while (!ordenar.empty())
	{
		aux3.push(ordenar.top());
		ordenar.pop();
	}
	while (!aux3.empty())
	{
		resultad.push(aux3.top());
		aux3.pop();
	}
	return resultad;
}

std::queue <int> transformToQ( std::stack<int> a)
{
	std::stack<int> aux2(a);
	std::queue <int> resultado;
	while (!aux2.empty())
	{
		resultado.push(aux2.top());
		aux2.pop();
	}

	return resultado;
}

std::stack <int> putHat(const std::stack<int> a, const std::stack<int> b)
{
	std::stack<int> resultad;
	std::stack<int> aux1(b);
	std::stack<int> aux2(a);
	std::stack<int> aux3;
	while (!aux1.empty())
	{
		aux3.push(aux1.top());
		aux1.pop();

	}
	while (!aux3.empty())
	{
		resultad.push(aux3.top());
		aux3.pop();
	}

	while (!aux2.empty())
	{
		aux3.push(aux2.top());
		aux2.pop();

	}
	while (!aux3.empty())
	{
		resultad.push(aux3.top());
		aux3.pop();
	}

	return resultad;
}
bool isHat(const std::stack<int> a, const std::stack<int> b)
{
	std::stack<int> aux1(a);
	std::stack<int> aux2(b);
	int contador = 0;
	while (!aux1.empty() && a.size() <= b.size())
	{
		int x = aux1.top();
		int y = aux2.top();
		if (aux1.top() == aux2.top())
		{
			contador++;
		}
		aux1.pop();
		aux2.pop();
	}
	if (contador == a.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool balancedP(std::queue<char>a)
{
	std::queue <char> aux(a);
	int derecha = 0;
	int izquierda = 0;
	while (!aux.empty())
	{
		char comprobante = aux.front();
		if (comprobante == '(')
		{
			derecha++ ;
		}
		if (comprobante == ')')
		{
			izquierda++;
		}
		aux.pop();
	}
	if (izquierda == derecha)
	{
		return true;
	}
	else
	{
		return false;
	}

}

std::stack <int> change(std::stack <int> &a)
{
	std::stack <int> aux(a);
	std::stack <int> aux2(a);
	int primero = aux.top();
	int last;
	while (!aux.empty())
	{
		last = aux.top();
		aux.pop();
	}
	aux2.pop();
	aux2.push(primero);
	std::stack<int> result;
	while (!aux2.empty())
	{
		if (aux2.size() == 1)
		{
			result.push(last);
		}
		else
		{
			result.push(aux2.top());
		}
		aux2.pop();
	}
	return result;
}
void main()
{
	std::stack <int> a;
	/*
	std::stack <int> a;
	std::stack <int> b;
	a.push(5);
	a.push(7);
	b.push(3);
	b.push(6);
	std::stack<int> print1(SuperMerge(a, b));
	std::stack<int> aux1(print1);
	while (!aux1.empty())
	{
		std::cout << aux1.top() << " ";
		aux1.pop();
	}
	std::cout << std::endl;
	std::stack<int> print2(putHat(a, b));
	std::stack<int> aux2(print2);
	while (!aux2.empty())
	{
		std::cout << aux2.top() << " ";;
		aux2.pop();
	}
	std::cout << std::endl;
	std::queue <int> cola (transformToQ(a));
	std::queue <int> aux3(cola);
	while (!aux3.empty())
	{
		std::cout << aux3.front() << " ";;
		aux3.pop();
	}
	std::cout << std::endl;
	if (isHat(a, print2))
	{
		std::cout << "Hola";
	}
	std::cout << std::endl;
	std::queue <char> ufff;
	ufff.push('(');
	ufff.push(')');
	if (balancedP(ufff))
	{
		std::cout << "Hola";
	}
	std::stack <int> nose;
	nose.push(1);
	nose.push(2);
	nose.push(3);
	std::stack <int> print3(change(nose));
	std::stack <int> aux4(print3);
	std::cout << std::endl;
	while (!aux4.empty())
	{
		std::cout << aux4.top() << " ";;
		aux4.pop();
	}*/

	MyStack algo;
	algo.push(2);
	algo.push(3);
	algo.pop();
}