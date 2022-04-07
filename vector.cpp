/*
	c++ 에서 백터는 동적 할당을 편하게 할 수 있는 컨테이너다.

*/
#include <iostream>
#include <vector>

int main()
{
	/*
	일반적으로 heap 영역을 사용할 때
	*/
	int *numptr = new int[5];
	for (int i = 0; i < 5; i++)
		numptr[i] = i;
	delete numptr;

	/*
	vetor 를 사용해 heap 영역을 사용 할 때 
	delete 를 사용하지 않아도 된다.
	*/
	//1.  5개 짜리 메모리 영역을 선언 후 뒤 이러 초기화
	std::vector<int> num1(5);
	for (int i = 0; i < 5; i++)
		num1[i] = i;

	//2. 선언과 초기화를 동시에, 초기화하는 인자의 개수로 자동 메모리 할당
	std::vector<int> num2{0, 1, 2, 3, 4};
	std::cout <<num2.size() << std::endl;

	//vetor 에서 메모리 영역을 늘리고 뒤에 새로운 인자를 초기화 할때
	//이렇게 되면 사이즈가 하나 추가 되어 6개의 배열이 된다. (원래는 5개)
	num2.emplace_back(5);
	std::cout <<num2.size() << std::endl;

	//마지막 배열을 없애기. 사이즈가 다시 5가 된다.
	num2.pop_back();
	std::cout <<num2.size() << std::endl;


	//출력 방식 
	//1. 기본형
	for (std::size_t i=0; i < num2.size(); i++)
		std::cout << num2[i] << std::endl;

	//2.begin end 사용
	for (auto itr = num2.begin(); itr != num2.end(); itr++)
		std::cout << (*itr) << std::endl;

	//ranged for
	for (const int & num : num2)
		std::cout << num <<std::endl;
}