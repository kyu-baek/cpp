/*
	객체지향 언어는 class 뿐만 아니라 생성자와 소멸자를 지원한다.
	public		: 멤버에 관한 모든 외부 접근 허용
	protected	: 멤버에 관한 모든 외부 접근이 차단. 
					단, 상속 관계에 있는 파생 클래스에서는 접근 허용.
	private		: 외부 접근 뿐만 아니라 파생 클래스로부터의 접근까지 모두 차단.
					클래스를 선언할 때 별도로 접근 제어 지시자를 기술하지 않으면
					자동 private으로 간주됨. 기본 지시자!
	
	*생성자와 소멸자는 클래스 객체가 생성 및 소멸될 때 '자동으로' 호출되는 함수.
	이 두 함수의 가장 큰 특징은 함수임에도 반환 형식이 없다는 것과, 
	함수 이름이 클래스 이름과 같다는 점이다. 
	다만 소멸자 이름 앞에는 ~가 붙는다.
	둘의 차이점은 생성자는 다중 정의가 가능, 소멸자는 불가능하다는 점.
	ex)
	클래스이름();	-> 생성자
	~클래스이름();	-> 소멸자
	위처럼 매개변수가 하나도 없는 생성자는 디폴트 생성자라고 하며, 
	디폴트 생성자의 특징은 클래스 제작자가 디폴트 생성자와 소멸자를 기술하지 않아도
	컴파일러가 알아서 만들어 넣어준다. 
	아무튼 생성자와 소멸자가 없는 클래스는 없다고 생각하자.


	클래스(Class)란 현실 세계에서 존재하는 대상이나 개념을 소프트웨어로 표현한 것이다.

	객체(Object)란 클래스를 통해 소프트웨어에 구현할 대상을 의미한다.

	인스턴스(Instance)란 소프트웨어에 구현된 구체적인 실체를 의미한다.
*/

#include <iostream>
using namespace std;

// class CTest 
// {
// public:
// 	CTest()
// 	{
// 		cout << "CTest() : "<< endl;
// 	}
// 	~CTest()
// 	{
// 		cout << "~CTest()" << endl;
// 	}
// };

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
	~CTest()
	{
		cout << "~CTest() : 소멸자 함수" << endl;
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
	
	CTest t; //48번째 줄 생성자 호출
	t.PrintData();
	
	cout << "main() :  함수 끝" << endl;

	return (0);
} //나갈 때 소멸자 호출