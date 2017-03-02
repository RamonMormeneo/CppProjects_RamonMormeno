#include <iostream>
#include <string>
#include <ctime>

enum class WEAPONS
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
		return life>0;
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
	weapon = (static_cast <WEAPONS>(rand() % static_cast<int>(WEAPONS :: MAX))), precision = (rand() % (10) / 10.0f), life = rand() % 101;
}

void Player::attack(Zombie &z)
{
	z.life = z.life - (static_cast<int>(weapon)*precision);
}




Zombie::Zombie()
{
	distanceToPlayer = rand() % (180) + 20, speed = (rand() % 200) / 10.0f, damage = (rand() % 200) / 10.0f, life = rand() % 101;
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
	const int nummzombies = 10;
	srand(time(nullptr));
	Player player;
	static Zombie zombies[nummzombies];
	bool ZombiesareAlive = true;
	
	do
	{
		
		std::cout << player.life << " " << player.precision << std::endl;
		ZombiesareAlive = false;
		for (int i = 0; i < nummzombies; i++)
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
