

/*

바인딩 (binding)
	변수와 함수에 대한 메모리 할당이나 함수 호출이 발생했을 때 
	실제로 처리해야 하는 명령어들이 결정되는 시점

	-정적(static) 바인딩, early
		컴파일 시 변수의 위치와 함수가 실행할 명령이 결정되는 경우
		static 변수나 overloading의 경우
	-동적(dynamic) 바인딩, late
		run time 때 결정이 되는 경우
		지역변수나 overriding의 경우



//가상함수
	-오버라이딩을 구현하는 방법
	-동적 바인딩 (런타임시)
	-가상함수를 정의하기 위해 기본 클래스 멤버함수 앞에 버추얼이라고 쓴다
	-가상함수는 하나의 이름으로 여러개의 수단과 방법을 제공하는 객체지향 프로그래밍의 다형성을 구현하는 한 방법
	-기본 클래스에서 상속 받았는데 파생 클래스에서 멤버함수를 재정의 하는 이유는
		어떠한 경우라도 기본 클래스의 멤버함수를 버리고 파생클래스의 멤버함수를 사용하려는 것
	-기존 클래스의 모든 내용을 모두 현재 프로그램에 사용할 수 있는데 특정 함수가 걸맞지 않을 경우,
		기존 클래스를 고치느니 상속을 받고 가상함수를 이용하여 맘에 들지 않는 함수만 고쳐서 사용함

*/

#include <iostream>

class A
{
public:
	//1. virtual int ss(int i){return (i*2);}
	int ss(int i){return (i*2);}
	//dd함수 안 내용에서 연결된 ss함수는 컴파일 당시 바로 위 ss함수를 호출하도록 미리 지정되어 있다!!!!!!!
	int dd(int i){return (ss(i)*2);}
};

class B: public A
{
public:
	int ss(int i) {return (i*3);} //재정의 되었지만 이 코드에서는 사용되지 못함 1.의 주석을 지우면 됨

};

int main()
{
	B bb;
	A *pA = new A;
	A *pB = new B; //부모 클래스의 포인터는 자식 클래스를 가질 수 있다.

	std::cout << bb.dd(2) << std::endl;
	std::cout << pA->dd(2) <<std::endl;
	std::cout << pB->dd(2) <<std::endl;

	delete pA;
	delete pB;
	return 0;


}