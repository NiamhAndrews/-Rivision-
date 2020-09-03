/// <summary>
/// @author Niamh
/// @date 03/09/2020
/// </summary>

#include <iostream>
#include <vector>
#include <memory>



int main()
{
	std::cout << "please work \n";


	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
	}

	
	const int HELP_ME = 667;

	int helpMe2[HELP_ME];

	for (int i = 0; i < HELP_ME; i++)
	{
		helpMe2[i] = i;
		std::cout << helpMe2[i] << ", ";
	}

	int pointless = 7;

	int *pointy = nullptr;
	
	pointy = &pointless;
	std::cout << *pointy;

	*pointy = 80085;

	std::cout << pointless;

	std::cout << std::endl;

	std::vector <int> numberwang;

	numberwang.push_back(4);
	numberwang.push_back(0);
	numberwang.push_back(4);

	for(int &i : numberwang)
	{ 
		i++;
		std::cout << i << std::endl;
	}

	for (int i : numberwang)
	{
		std::cout << i << std::endl;
	}

	std::shared_ptr<int> bob = std::make_shared<int>(pointless);

	std::shared_ptr<int> bobsWife = bob;


	std::cout << bob << std::endl;

	std::cout << *bobsWife;

	std::unique_ptr<int> weirdSon = std::make_unique<int>(pointless);

	std::cout << *weirdSon;

	//std::shared_ptr<int> anyPossessions = weirdSon;

	std::weak_ptr<int> bankBalance;

	if (true)
	{
		std::shared_ptr<int> numbersOrSomething = std::make_shared<int>(0);

		bankBalance = numbersOrSomething;

		std::cout << "\n" << *bankBalance.lock();
	}

	
	//std::cout << "\n" << *bankBalance.lock();

	system("PAUSE");
	return 0;
}