#ifndef DATA_HPP
# define DATA_HPP
#include <iostream>


struct Data
{
	int number;
	std::string str;
	Data(int num, std::string s);
	~Data(void);
};


std::ostream &operator<<( std::ostream & os, Data const & data);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif