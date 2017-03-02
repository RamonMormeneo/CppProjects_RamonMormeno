#include <iostream>
#include <string>
#include <ctime>

enum class EnemyType
{
	zombie,vampire,ghost,witch,max
};

struct Enemy
{
	EnemyType type;
	std::string name;
	int health;
};
bool operator== ( Enemy &a, Enemy &b)
{
	return ( a.name == b.name && a.type == b.type);
}
Enemy CreateRandomEnemy ()
{
	Enemy enemigo;
	int aux2 = rand() % 5;
	enemigo.type = static_cast<EnemyType>(rand()%static_cast<int>(EnemyType::max));
	switch (aux2)
	{
	case 0:
		enemigo.name = "Roberto";
		break;
	case 1:
		enemigo.name = "Anna";
		break;
	case 2:
		enemigo.name = "El Jhonny";
		break;
	case 3:
		enemigo.name = "Luna";
		break;
	case 4:
		enemigo.name = "Mariona";
		break;
	default:
		break;
	}
	enemigo.health = rand() % 100;

	return enemigo;

}
std::string returntype(EnemyType a)
{
	switch (a)
	{
	case EnemyType::ghost:
		return "Ghost";
	case EnemyType::vampire:
		return "Vampire";
	case EnemyType::zombie:
		return "Zombie";
	case EnemyType::witch:
		return "Witch";
	}
}
void main()
{
	srand(time(nullptr));
	const int enemynumber = 5;
	static Enemy arr[enemynumber];
	std::string tipo;
	for (int i = 0; i < enemynumber; i++)
	{
		arr[i] = CreateRandomEnemy();
		
		for (int j = 0; j <i; j++)
		{
			if (operator==(arr[i],arr[j])==true)
			{
				i--;
			}

		}
	}
	for (int x = 0; x < enemynumber; x++)
	{
		tipo = returntype(arr[x].type);
		std::cout << arr[x].name << " is a " << tipo << " whose life is " << arr[x].health << std::endl;
	}
}
