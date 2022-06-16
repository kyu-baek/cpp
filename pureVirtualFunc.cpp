#include <iostream>


/*

	1. 순수 가상 함수(pure virtual function)

	------------------------
	 virtual void foo() = 0;  	-> 이렇게 버추얼 함수 뒤에 = 0 클래스 내부에 미리 선언된 것 
	------------------------


	함수의 정의 (내용) 이 없이 함수만 선언한 것을 말한다.
	또한 이렇게 선언 된 순수 가상 함수가 있다면 이를  추상클래스(abstract class)라고 부른다.
	이 추상클래스는 객체로 만들지 못하고 상속으로만 사용. 
	그리고 추상클래스를 상속받은 자식 클래스는 무조건 해당 순수 가상 함수를 override 시켜주는 것이 필수
	부모 쪽에서는 cpp 파일에 따로 함수의 내용을 정의 하지 않는다.

	2. 순수 가상 함수를 사용하는 경우

	추상 클래스는 객체 지향 프로그래밍에서 중요한 특징인 다형성을 가진 함수의 집합을 정의할 수 있게 해줍니다.
	반드시 사용되어야 하는 멤버 함수를 추상 클래스에 순수 가상 함수로 선언해 놓으면, 
	이 클래스로부터 파생된 모든 클래스에서는 이 가상 함수를 반드시 재정의해야 합니다.
	이렇게 되면 어떠한 파생 클래스에서 재정의 할 가상 함수를 만들지 않아 부모 함수가 호출 되고
	또한 그런 부모함수가 인터페이스처럼 추상적인 의미로 사용 될때 나올 실수를 방지할 수 있다.

	예를 들어 동물이라는 부모 클래스는 여러 동물의 종류를 자식 클래스로 가질 수 있지만,
	동물이라는 개념 자체는 포괄적이고 개념적이기 때문에 어떤 행동을 명확하게 정의 할 수 없다.
	동물이 우는 소리는?
	할 때 강아지 울음 소리나 고양이 울음소리 처럼 명확한 정의가 없다.
	동물은 강아지나 고양이를 모두 포함하는 추상 개념이므로. 
	




	3. 추상 클래스의 용도 제한

	C++에서 추상 클래스는 다음과 같은 용도로는 사용할 수 없다.

	1. 변수 또는 멤버 변수
	2. 함수의 전달되는 인수 타입
	3. 함수의 반환 타입
	4. 명시적 타입 변환의 타입


*/





class A
{
private:
	virtual void purefunc(void) = 0; //private 에 있어도 자식에서 사용가능
};

class B : public A
{
public:
	void purefunc(void)
	{
		std::cout << "purefunc work" << std::endl;
	}
};




class C
{
	private:
		virtual void something(void) = 0;

	public:
		C(void)
		{
			std::cout << "C Default Constructor" << std::endl;
		}

		~C(void)
		{
			std::cout << "C Destructor" << std::endl;
		}
};

class D : public C
{
	public:
		void something(void)
		{
			std::cout << "hi" << std::endl;
		}

		D(void)
			:	C()
		{
			std::cout << "D Default Constructor" << std::endl;
		}

		~D(void)
		{
			std::cout << "D Destructor" << std::endl;
		}
};

int main(void)
{

	/*
		클래스 A와 B는 순수 추상 함수가 private 에 있어도
		 자식에서 사용가능 하다는 것을 보여주는 예시
	*/
	B b;
	b.purefunc();


	/*
		추상 클래스 타입의 포인터와 참조는 바로 사용할 수 있습니다.
		클래스 C와 D는 순수 추상 함수에서도 일반적인 생성자 소멸자 복사생성자 등이 
		사용되는 예시

	*/
	D d;
	d.something();
	return (0);
	return (0);
}

