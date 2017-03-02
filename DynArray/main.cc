#include "DynArr.hh"
#include <iostream>

void main()
{
	DynArray arr(5,7) ;
	DynArray arr2(5, 8);

	int x = arr[3];
	int y = arr2[3];
	bool soniguales = arr == arr2;

	std::cout << soniguales << " " << x << " " << arr2[4];
}