/*
	객체지향 언어는 class 뿐만 아니라 생성자와 소멸자를 지원한다.


*/

#include <iostream>
using namespace std;

class CTest 
{
public:
	CTest()
	{
		cout << "CTest() : "<< endl;
	}
};

//제작자 코드
class CTest
{
	public:
	//CTest 클래스의 '생성자 함수' 선언 및 정의
	CTest()
	{
		//인스턴스가 생성되면 멤버 데이터를 '자동으로' 초기화한다.
		cout << "CTest() : 생성자 함수" << endl;
		m_data = 10;
	}

	//멤버 데이터 선언
	int m_data;

	//멤버 함수 선언 및 정의
	void PrintData(void)
	{
		//멤버 데이터에 접근하고 값을 출력
		cout << "PrintData() : " << m_data << endl;
	}
};

//사용자 코드
int main()
{
	cout << "main() :  함수 시작" << endl;
	
	CTest t; //26번째 줄 생성자 호출
	t.PrintData();
	
	cout << "main() :  함수 끝" << endl;

	return (0);
}