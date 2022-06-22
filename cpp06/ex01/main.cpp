#include "Data.hpp"

int	main()
{

	std::cout << "\n-----Make Data Struct----\n\n";
	Data*			dataToSerial = new Data(2022, "Hot Summer");
	std::cout << *dataToSerial <<std::endl;


	uintptr_t serial = serialize(dataToSerial);
	std::cout << "\n-----Serialized Adrr----\n\n";
	std::cout << "serial Hex: " << std::hex << serial << std::dec << std::endl;
	std::cout << "serial    : " << &serial << std::endl;

	Data* dataToDeserial = deserialize(serial);
	std::cout << "\n----Deserialized Adrr----\n\n";
	std::cout << *dataToDeserial << std::endl;

	std::cout << std::boolalpha << " ptr == ptr2 is " << (dataToSerial == dataToDeserial) << std::endl;

	delete dataToSerial;
	return 0;



}