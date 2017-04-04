#include <vector>
#include <iostream>
std::vector<int> AddVectors(const std::vector<int>a, const std::vector<int>b)
{
	std::vector<int>sum(a.size());
	if (a.size() == b.size())
	{
		for (int i = 0; i < a.size(); i++)
		{
			sum[i] = a[i] + b[i];
		}
		return sum;
	}
	else
	{
		std::cout << "No tienen el mismo tamaño" << std::endl;
		return sum;
	}
}
/*
void ConcatVectors(std::vector<int>a, const std::vector<int>b)
{
	for (int i = 0; i < b.size; i++)
	{
		a.push_back(b[i]);
	}
}
void ShifRight(std::vector<int>a)
{
	int aux;
	int aux2;
	for (int i = 0; i < a.size() - 1; i++)
	{
		aux = a[i + 1];
		aux2 = a[i];
		a[i + 1] = aux2;
		a[i] = aux;
	}
	a[0] = rand() % (100);
}
void RotateLeft(std::vector<int>a)
{
	int firstnum = *a.begin();
	int aux;
	int aux2;
	for (int i = a.size(); i > 1; i++)
	{
		aux = a[i + 1];
		aux2 = a[i];
		a[i + 1] = aux2;
		a[i] = aux;
	}
	a[a.size()] = firstnum;
}
void SearchAdjecent(std::vector<int>a)
{

}*/

void main()
{
	std::vector<int>v1{ (1,2,3,4,5) };
	std::vector<int>v2{ (3,4,5,1,2) };
	std::vector<int>v3(v1.size());
	v3=AddVectors(v1, v2);
	for (int i = 0; i < v3.size(); i++)
	{
		std::cout << v3[i] << " ";
	}
}
