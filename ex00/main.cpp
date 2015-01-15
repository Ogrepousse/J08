#include "easyfind.hpp"
#include <vector>
#include <set>
#include <list>
#include <iostream>

int		main()
{
	{
		std::set<int> array;

		array.insert(1);
		array.insert(2);
		array.insert(3);

		std::set<int>::iterator it = easyfind(array, 10);

		if (it != array.end())
			std::cout << *it << std::endl;
		else
			std::cout << "not found" << std::endl;
	}
	{
		std::list<int> list;

		list.push_back(1);
		list.push_back(2);
		list.push_back(3);

		std::list<int>::const_iterator it = easyfind(list, 4);

		if (it != list.end())
			std::cout << *it << std::endl;
		else
			std::cout << "not found" << std::endl;
	}

	return (0);
}
