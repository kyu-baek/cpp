#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong Input" << std::endl;
		return (1);
	}
	else if (*argv[1] == '\0')
	{
		std::cout << "Empty input" << std::endl;
		return (1);
	}
	
	try
	{
		Convert	convert(argv[1]);
		std::cout << convert << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}