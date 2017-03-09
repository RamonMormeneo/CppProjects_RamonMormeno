#include "DynArr.hh"
#include <iostream>

void main()
{
	DynArray arr(5,7) ;
	DynArray arr2(5, 8);

	int x = arr[3];
	int y = arr2[3];
	arr2.push(20);

	std::cout << " " << x << " " << arr2[5];
}