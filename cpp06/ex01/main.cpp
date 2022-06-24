#include "Data.hpp"

int	main()
{

	std::cout << "\n-----Make Data Struct----\n\n";
	Data*			dataToSerial = new Data(2022, "Hot Summer");
	std::cout << *dataToSerial <<std::endl;
	std::cout << "\n-----Serialized Adrr----\n\n";
	std::cout << "dataToSerial addr	      : " << &dataToSerial << std::endl;
	std::cout << "dataToSerial data addr      : " << dataToSerial << std::endl;
	std::cout << "dataToSerial Hex  data addr : " << std::hex << dataToSerial << std::dec << std::endl;


	uintptr_t serial = serialize(dataToSerial);
	std::cout << "\n-----Serialized Adrr----\n\n";
	std::cout << "serial addr	      : " << &serial << std::endl;
	std::cout << "serial data addr      : " << serial << std::endl;
	std::cout << "serial Hex  data addr : " << std::hex << serial << std::dec << std::endl;

	Data* dataToDeserial = deserialize(serial);
	std::cout << "\n----Deserialized Adrr----\n\n";
	std::cout << *dataToDeserial << std::endl;

	std::cout << std::boolalpha << " ptr = ptr2 is " << (dataToSerial == dataToDeserial) << std::endl;

	delete dataToSerial;
	return 0;



}