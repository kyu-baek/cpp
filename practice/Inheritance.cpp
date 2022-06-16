

/*

상속은 객체 단위로 코드를 재사용 하는 방법이다.

문법 : class 하위클래스이름 : 접근지시자 상위클래스이름

*접근지시자 종류*
public : 상위 클래스의 멤버 변수의 접근 제어자를 변경하지 않고 상속한다.
protected : 상위 클래스에서 protected 접근제어자보다 접근 범위가 넓은 멤버는 모두 protected로 바꾸어 상속한다.
private : 상위 클래스에서 private 접근제어자보다 접근 범위가 넓은 멤버는 모두 private 접근제어자로 바꾸어 상속한다.

*하위 클래스 생성, 소멸 순서*
생성 : 하위 클래스 생성자 호출 -> 상위 클래스 생성자 호출 -> 상위 클래스 클래스 변수 초기화 -> 하위 클래스 클래스 변수 초기화
소멸 : 하위 클래스 소멸자 호출 -> 상위 클래스 소멸자 호출 

*참조 형식과 실형식*
하위형식은 부모형식으로 포인팅할 수 있다.
메서드는 일반형식, virtual형식, static 형식으로 나뉘는데
이때 일반메서드는 접근형식(참조형식)을 따르고, 
virtual메서드는 실 형식을 따른다. virtual메서드는 <- 상속 + 재정의 한 것을 호출 (미래를 호출)
ex) A *pdata = new B;
	A = 접근형식(기본)
	B = 실 형식 (파생)


가상함수란?
가상함수는 부모 클래스에서 상속받을 클래스에서 재정의할 것으로 기대하고 정의해놓은 함수입니다. 
virtual이라는 예약어를 함수 앞에 붙여서 생성할 수 있으며 이렇게 생성된 
가상함수는 파생 클래스에서 재정의하면 이전에 정의되었던 내용들은 모두 새롭게 정의된 내용들로 교체됩니다

생성자 함수에서는 객체 자신을 초기화 할 때만 쓴다.
파생생성자에서는 부모 데이터를 초기화하는 것이 불가능!!!

오버로딩(Overloading) : 같은 이름의 메서드 여러개를 가지면서 매개변수의 유형과 개수가 다르도록 하는 기술

오버라이딩(Overriding) : 상위 클래스가 가지고 있는 메서드를 하위 클래스가 재정의해서 사용



*/
// 다중 상속은 클래스가 둘 이상의 클래스에서 상속받는 기능이다.
// 다중 상속은 여러 개의 상위 클래스로부터 멤버를 모두 상속받을 수 있다는 장점을 가지고 있지만, 
// 하나의 기본 클래스를 간접적으로 두 번 이상 상속받을 수도 있고, 
// 상속받은 여러 상위 클래스에 같은 이름의 멤버가 존재할 때 이를 구분할 수 없다는 문제점을 가지고 있다
// Class Diamiond : public FragTrap, public ScavTrap
//{
	/* If there's no revision on FragTrap & ScavTrap
	**              A             A
	**              |             |
  	**              B             C
	**              \-------------/
  	**                     |
	**                     |
	**                     D	
	
	
	주석과 같은 구조가 문제가 되는 이유는 
	최상위 기반 클래스인 ClapTrap 클래스의 멤버 변수를 접근하려 할 때 
	해당 멤버 변수가 중복으로 존재하므로 어느 멤버 변수로 접근할 지 
	Ambiguity (모호성)이 발생하기 때문이다. 
	따라서 이번 서브젝트에서 DiamondTrap 클래스에게 원하는 사항 중 하나는
	 ClapTrap 클래스의 생성자가 한 번만 호출되도록 만드는 것이다. 
	이를 만족하기 위해 FragTrap 클래스 혹은 ScavTrap 클래스 하나만 상속 받기


	mp.BorrowableItem::checkOut();
	작금의 모호성을 해소하려면, 위와 같이 호출할 기본 클래스의 함수를 손수 지정해 주어야 합니다.
	*/
//};


#include <iostream>
using namespace std;

class Parent{
public:
    void func1() {
        cout << "이곳은 Parent의 func1입니다." << endl;
    }
    virtual void func2() {
        cout << "이곳은 Parent의 func2입니다." << endl;
    }
    void func3() { //가상함수 X
        cout << "이곳은 Parent의 func3입니다." << endl;
    }
};

class Child : public Parent{
public:
    void func1() {
        cout << "이곳은 Child의 func1입니다." << endl;
    }
};

int main() {
    Parent* p = new Parent;
    Child* c = new Child;
    
    p->func1();
	c->func1();

	/*
	*****p 를 c 로 대입 한 뒤  p->func1(); 에서 Parent의 가 호출 되는 이유*****
	p포인터의 주소를 child로 바꾸어주었음에도 불구하고 정적바인딩으로 인해
	컴파일 당시 호출될 함수의 번지가 이미 결정나버렸기 때문에,
	부모의 함수가 호출되는 것입니다. 
	이를 해결하려면 정적바인딩이 아닌 동적바인딩을 해야 합니다. 
	동적바인딩을 하려면 일반 함수들을 가상함수로 바꾸어주시면 됩니다. 
	가상함수로 선언하면 포인터의 타입이 아닌 포인터가 가리키는 객체의 타입에 따라 멤버 함수를 선택하게 됩니다.
	*/
	p = c;
    p->func1();
    p->func2();
    c->func2();
    p->func3();
    c->func3();
}