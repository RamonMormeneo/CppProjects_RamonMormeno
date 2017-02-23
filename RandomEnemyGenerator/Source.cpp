#include <iostream>
#include <string>
#include <ctime>

enum EnemyType
{
	zombie,vampire,ghost,witch,max
};

struct Enemy
{
	EnemyType type;
	std::string name;
	int health;
};

Enemy CreateRandomEnemy ()
{
	Enemy enemigo;
	int aux = rand() % 5;
	int aux2 = rand() % 6;
	switch (aux)
	{
	case 1:
		enemigo.type = zombie;
		break;
	case 2:
		enemigo.type = vampire;
		break;
	case 3:
		enemigo.type = ghost;
		break;
	case 4:
		enemigo.type = witch;
		break;
	default:
		break;
	}
	switch (aux2)
	{
	case 1:
		enemigo.name = "Roberto";
		break;
	case 2:
		enemigo.name = "Anna";
		break;
	case 3:
		enemigo.name = "El Jhonny";
		break;
	case 4:
		enemigo.name = "Luna";
		break;
	case 5:
		enemigo.name = "Mariona";
		break;
	default:
		break;
	}
	enemigo.health = rand() % 100;

	return enemigo;

}

void main()
{
	 const int enemynumber = 5;
	static Enemy arr[enemynumber];
	for (int i = 0; i < enemynumber; i++)
	{

	}
	EnemyType t = zombie;
	std::cout << t;
}
