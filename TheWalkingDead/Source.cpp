#include <iostream>
#include <string>
#include <ctime>

enum  WEAPONS
{
	FISTS,GUN,SHOUTGUN,REVOLVER,SNIPER,MACHINE_GUN,MAX
};
class Zombie;
class Player
{
public:
	Player();
	WEAPONS weapon;
	float precision;
	int life;
	void attack(Zombie&);
	bool isAlive()
	{
		if (life <= 0)
		{
			return false;
		}
		else
			return true;
	
	};
private:

};

Player::Player()
{
	weapon=(static_cast <WEAPONS>(rand() % 7)), precision=(rand()%(11)/10.0f), life=rand()%101;
	
}

class Zombie
{
public:
	Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attackPlayer(Player&);
	bool isAlive()
	{
		if (life <= 0)
		{
			return false;
		}
		else
			return true;
	}

private:

};

Zombie::Zombie()
{
	distanceToPlayer = rand() % (181)+20, speed = (rand() % 41) / 2.0f, damage = (rand() % 41) / 2.0f, life = rand() % 101;
}

void Zombie::attackPlayer(Player &)
{
	if (distanceToPlayer <= 0)
	{
		
	}
}


void main() 
{
	srand(time(nullptr));
	Player player;
	static Zombie zombies[10];
	std::cout << player.weapon << " " << player.life << " " << player.precision << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << zombies[i].distanceToPlayer << " " << zombies[i].life << " " << zombies[i].speed << " " << zombies[i].damage << std::endl;
	}
	
}
