#include "Data.hpp"

Data::Data(int num, std::string s)
{
	number = num;
	str = s;
}

Data::~Data(void)
{}



uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

std::ostream &operator<<( std::ostream & os, Data const & data)
{
	os <<"ptr = " << &data  << "\n" << "num = "<<data.number << "\n" <<"str = "<< data.str << "\n";
	return (os);
}