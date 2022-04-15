

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


생성자 함수에서는 객체 자신을 초기화 할 때만 쓴다.
파생생성자에서는 부모 데이터를 초기화하는 것이 불가능!!!
*/

#include <iostream>
using namespace std;


class a
{

};

class b: public a
{

};


int main()
{


}