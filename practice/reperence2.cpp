#include <iostream>

int main()
{
	int input = 0;
	std::cout << "input number: ";
	std::cin >> input;

	int &&rdata = input + 5;
	rdata += 10;
	std::cout << rdata << std::endl;
	return 0;
}