
#include <exception>
#include <iostream>



// 1.일반적으로 exception을 발생시키는 기본 코드
int main(void)
{
	std::string			key;

	while (true)
	{
		std::cin >> key;
		if (key == "cause")
			throw (std::exception()); 
	}
	return (0);
}


/*
2. class 를 생성하고 std::exception을 상속 받아 
	커스텀한 나만의 익셉션을 만든 코드.

3. what()
 여기서 what(void) 는 기본적으로 const char * 타입을 반환한다.
  매개변수는 없다.
 가상 함수로서, 파생 클래스는 특정 값이 반환되도록 이 함수를 재정의할 수 있다.

*/
class CustomException :public std::exception
{
	public:
		const char* what(void) const throw()
		{
			return ("Custom");
		}
};


/*
try		-  try내부에서 예외가 있는지 탐색을 하는 부분입니다.
throw	- try에서 에외를 탐색하면 throw의 인자로 준 변수를 catch로 던집니다.
catch	-  throw에서 던진 변수를 인자로 받아서
			catch 내부에 프로그래머가 정의한 예외처리를 실시합니다.


*/
