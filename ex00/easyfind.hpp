
#ifndef EASY_FIND_H
# define EASY_FIND_H

# include <iterator>

template<typename T>
typename T::iterator	easyfind(T & cont, int n)
{
	typename T::iterator it;
	for (it = cont.begin(); it != cont.end(); it++)
	{
		if (*it == n)
			return (it);
	}
	return (cont.end());
}

#endif
