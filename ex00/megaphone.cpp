#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			int len = str.size();
			for (int j = 0; j < len; j++)
				str[j] = std::toupper(str[j]);
			std::cout << str << " ";
		}
		std::cout << std::endl;
	}
	return (1);
}