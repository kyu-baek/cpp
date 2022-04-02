#include <iostream>

int main()
{
	int age;

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;

	char job[32];
	std::cout << "What do you do?" << std::endl;
	std::cin >> job;

	std::string name;
	std::cout << "What's your name?" << std::endl;
	std::cin >> name;

	std::cout << "Your name is " << name << " and " 
					<< "Your age is " << age << " and" 
					<< " your job is " << job << std::endl;

	return 0;
}
