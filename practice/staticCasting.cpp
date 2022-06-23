#include <iostream>

class A
{
public:
	void print()
	{std::cout << "A print"<< std::endl;} 
};

class B
{
public:
	void print()
	{std::cout << "B print"<< std::endl;} 
};

int main()
{
	A *a = new A();
	B *b = (B*)a; //c 스타일 캐스팅
	b->print(); //클래스 b의 print 함수를 상대주소로 찾아내서 잘 프린트해주고 있다.
				//이것은 실제로는 아주 위험한 상황.

	B *b2 = static_cast<B*>(a); //둘 사이에는 아무 연관이 없으므로
								//컴파일 단계에서 에러를 발생시켜준다.
	delete a;

}