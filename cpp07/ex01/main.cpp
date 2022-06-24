#include "iter.hpp"

int main()
{
	std::string a[3] = {"aaaa", "bbbb", "cccc"};
	char		c[3] = {'a', 'b', 'c'};
	int			i[3] = {1, 2, 3};
	double		d[3] = {1.1, 2.2, 3.3};

	//-----------------------------------------

	iter(a, 3, print);
	iter(c, 3, print);
	iter(i, 3, print);
	iter(d, 3, print);

	return 0;

}