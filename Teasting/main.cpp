#include <vector>
#include <iostream>
#include <map>
#include <string>


void main()
{
	std::map <std::string, int> ranking;
	ranking["Juan"] = 3000;
	ranking["Michaleco"] = 0;
	ranking["Jhony"] = 5000;
	ranking["Anna"] = 2550;
	
	int puntuacion ;
	bool nameonosue = true;
	do
	{
		nameonosue = true;
		int numofplayers = 4;
		std::string jugador;
		std::cin >> jugador;
		int uhavit = 0;
		for (std::map<std::string, int>::iterator it = ranking.begin(); it != ranking.end(); ++it)
		{
			std::string name = it->first;
			if (jugador!=name)
			{
				uhavit++;
			}
			if (uhavit == numofplayers)
			{
				numofplayers++;
				nameonosue == false;
			}
		}
	
	} while (nameonosue ==true);



}
