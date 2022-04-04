#include <iostream>
#include <string>


int	main(void)
{
	std::string command;
	//Phonebook phonebook;

	while (true)
	{
		std::cout << "Which phonebook service?  ";
		std::getline(std::cin, command);
		if (command == "ADD")
			std::cout << "add" <<std::endl;
			// phonebook.add();
		else if (command == "SEARCH")
			std::cout << "search"<<std::endl;
			// phonebook.search();
		else if (command == "EXIT")
			break ;
	}
	std::cout << "see yaa." << std::endl;
	return (0);
}