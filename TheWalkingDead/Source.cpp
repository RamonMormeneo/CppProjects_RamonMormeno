#include <iostream>
#include <string>
#include <ctime>

enum  WEAPONS
{
	FISTS, GUN, SHOUTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX
};
class Zombie;
class Player
{
public:
	Player();
	WEAPONS weapon;
	float precision;
	int life;
	void attack(Zombie &z);
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
class Zombie
{
public:
	Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attackPlayer(Player&z);
	bool isAlive()
	{
		return life>0;
	}

private:

};


Player::Player()
{
	weapon = (static_cast <WEAPONS>(rand() % 7)), precision = (rand() % (11) / 10.0f), life = rand() % 101;

}

void Player::attack(Zombie &z)
{
	z.life = z.life - (weapon*precision);
}




Zombie::Zombie()
{
	distanceToPlayer = rand() % (181) + 20, speed = (rand() % 41) / 2.0f, damage = (rand() % 41) / 2.0f, life = rand() % 101;
}

void Zombie::attackPlayer(Player &z)
{
	if (distanceToPlayer <= 0)
	{
		z.life = z.life - damage;
	}
	else
		distanceToPlayer = distanceToPlayer - 1;
}


void main()
{
	srand(time(nullptr));
	Player player;
	static Zombie zombies[10];
	bool ZombiesareAlive = true;

	do
	{
		std::cout << player.weapon << " " << player.life << " " << player.precision << std::endl;
		ZombiesareAlive = false;
		for (int i = 0; i < 10; i++)
		{
			if (zombies[i].life > 0)
			{
				player.attack(zombies[i]);
				zombies[i].attackPlayer(player);
				ZombiesareAlive = true;
			}
			std::cout << zombies[i].distanceToPlayer << " " << zombies[i].life << " " << zombies[i].speed << " " << zombies[i].damage << std::endl;
		}
		std::cout << "_" << std::endl;

	} while (player.isAlive() && ZombiesareAlive);

	if (ZombiesareAlive == true)
	{
		std::cout << "You lose" << std::endl;
	}

	else {
		std::cout << "You Win" << std::endl;
	}
}
