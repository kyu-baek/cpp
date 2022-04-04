#include <iostream>

/*
	c++ 에서 다중 정의는 하나의 함수 이름이나 변수가 
	여러 의미를 동시에 갖는 것을 말한다.
	반환값과는 상관없이 매개변수의 다형성만을 허용합니다.
*/
int add(int a, int b, int c)
{
	std::cout << "add(int, int, int) : ";
	return a + b + c;
}

int add(int a, int b)
{
	std::cout << "add(int, int) : ";
	return a+ b;
}

double add(double a, double b)
{
	std::cout << "add(double, double) : ";
	return a+ b;
}

int main()
{
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3, 4, 5) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;

	return 0;
}