/*
	네임스페이스는 c++ 이 지원하는 각종 요소(변수, 함수, 클래스)들을
	한 범주로 묶어주기 위한 문법이다.
	의미상으로는 소속이나, 구역, 가문의 개념이다.

	*****컴파일시 식별자 우선순위****
	전역 함수인 경우
	1. 현재 블록 범위
	2. 현재 블록 범위를 포함하고 있는 상위 블록 범위
	3. 가장 최근에 선언된 전역 변수나 함수
	4. using 선언된 네임스페이스 혹은 전역 네임스페이스, 단 두 곳에
		동일한 식별자가 존재할 경우 컴파일 오류 발생.

	클래스 메서드인 경우
	1. 현재 블록 범위
	2. 현재 블록 범위를 포함하고 있는 상위 블록 범위
	3. 클래스의 멤버
	4. 부모 클래스의 멤버
	5. 가장 최근에 선언된 전역 변수나 함수
	6. 호출자 코드가 속한 네임스페이스의 상위 네임스페이스
	7. using 선언된 네임스페이스 혹은 전역 네임스페이스, 단 두 곳에
		동일한 식별자가 존재할 경우 컴파일 오류 발생.
*/
#include <iostream>

// 기본 형
namespace test1
{
	int g_data = 100;

	void testf(void)
	{
		std::cout << "test1:: testf() " << std::endl;
	}
}

int main()
{
	test1::testf();
	std::cout << test1::g_data << std::endl;

	return 0;
}




//std 까지 네임스페이스로 지정

//std 네임 스페이스를 using 예약어로 선언
using namespace std;

namespace test2
{
	int g_data = 100;
	void testf(void)
	{
		//cout 에 대해서 범위를 지정하지 않아도 된다.
		cout << "test2::testf()" << endl;
	}
}

//test 네임스페이스에 using 선언
using namespace test2;

int main()
{
	//testf() 나 g_data 에도 범위 지정을 할 필요가 없다
	testf();
	cout << g_data << endl;

	return 0;
}