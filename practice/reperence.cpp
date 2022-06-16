#include <iostream>
void	test(int &data);
/*
참조자 형식
참자자는 c에는 없는 형식으로 포인터와 구조적으로는 비슷하나, 겉모습은 전혀 다르다.
다음과 같은 선언과 동시에 반드시 초기화 해야하는 특징이 있다.
***형식 &이름 = 원본;***
***int *data = &3;	-> 불가능
***int &data = 3;	-> 상수에 대한 참조는 불가능
***int &data;		-> 참조 원본이 없으므로 불가능
*/
int main()
{
	int data = 10;

	std::cout << data << std::endl;
	//data 변수에 대한 참조자 선언
	int &ref = data;
	std::cout << &data << std::endl;
	std::cout << &ref << std::endl;
	//참조자의 값을 변경하면 원본도 변경됨
	ref = 20;
	std::cout << data << std::endl;

	//함수를 참조자 형식을 사용해서 변경
	//만약 c 처럼 &data 형식으로 보내면 컴파일 오류가 뜬다.
	test(data);
	std::cout << data << std::endl;
	
}

void	test(int &data)
{
	data = 100;
}