#include <iostream>

//호출되는 함수에서 매개변수에 값을 지정할 수 있다.
//이런 디폴트 매개변수를 선언할 때는 반드시 오른쪽부터 중간 빠짐 없이
//선언해야 한다. 만약 왼쪽 첫번째 변수를 디폴트로 하고 싶으면 
//나머지 변수도 모두 디폴트 매개변수여야 한다는 뜻이다.
void test(int a, int b = 10)
{
	std::cout << a <<  " " << b << std::endl;
}

int main()
{
	test(3);
	test(3, 4);
	return 0;
}