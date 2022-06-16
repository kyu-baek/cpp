#include <iostream>

#include <iostream>
using namespace std;

//제작자 코드
class CTest
{
public:
	CTest()
		:m_data(0)
	{
		//cout << "CTest() : 생성자 함수" << endl;
		m_data = 10;
	}
	~CTest()
	{
		//cout << "~CTest() : 소멸자 함수" << endl;
	}

	void PrintData(void)
	{
		cout << "PrintData() : " << m_data << endl;
		cout << "PrintData() this : " << this<< " data = "<< this->m_data<<  endl;
	}

protected:
	int m_data;
};

//사용자 코드
int main()
{	
	CTest a;
	cout << &a << endl;
	//실제로 함수를 호출할 때는 괄호가 비었다 해도 내부적으로는
	//a.PrintData(&a); 로 파라미터를 주소값으로 보내고, 
	//나중에 히든 매개변수 &a는 호출자의 this가 가리키는 주소값이 된다. 
	a.PrintData(); 
	
	CTest b;
	cout << &b << endl;
	b.PrintData();
	return (0);
}
