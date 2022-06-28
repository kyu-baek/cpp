#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
/*

1. STL(Standard Template Library)

-- c++ 표준 라이브러리의 일부분.
-- 자료구조 클래스와 알고리즘 등을 미리 만들어 놓은 라이브러리.
-- 반복자를 가지고 동작하는 c++ 표준 라이브러리의 일부분.
-- 자주 사용되는 50여개의 알고리즘과 다양한 자료구조들을 가지고 있음.
-- 템플릿이기 때문에 어떤 타입으로든 동작할 수 있다. 

참고 차이트!!! 굉장히 유용~
https://blog.daum.net/coolprogramming/76


STL은 다음과 같은 구성 요소로 이루어진 템플릿을 제공한다.

-컨테이너(container)
-반복자(iterator)
-알고리즘(algorithm)
-함수(functions)

1. 컨테이너
	-객체들을 저장하는 객체나 클래스
		-시퀀스 컨테이너 (sequence container)
			vector, list, deque
		-연관 컨테이너 (associative container)
			set, multiset, map, multimap
		-연속 메모리 기반 (컨테이너contiquous-memory container)
			데이터 여러개가 하나의 메모리 단위에 저장. 
			배열기반.
			vecror, string, deque
		-노드기 반 컨테이너 (node-based container)
			데이터 하나를 하나의 메모리 단위에 저장
			list, set, multiset, map, multimap
		-어댑터 컨테이너 (adapter container)
			간결함과 명료성을 위해 인터페이스를 제한한 시퀀스나 
			연관 컨테이너의 변형. 
			반복자를 지원하지 않으므로 
			STL 알고리즘에서는 사용할 수 없다.	
			각각의 '기반'이 되는 클래스의 인터페이스를 제한하여, 특정 형태의 동작만들 수행하도록 함.
			iterator을 지원하지 않음 (기본적으로는).
			stack, queue, priority_queue

	
2. 반복자
	-컨테이너에 저장된 요소를 순회하고 접근하는 객체나 클래스.
3. 알고리즘
	- 데이터를 다루기 위한 함수
	- find, sort, search 등
4. 함수 객체 (funcrion object), 함수자 (functor)
	- 함수처럼 동작하는 객체로 operator() 연산자를 중첩한 클래스의 객체




2. Stack

	LIFO (Last In First Out, 후입선출): 한 쪽 끝에서만 자료를 넣고 뺄 수 있는 구조. 
	즉, 가장 나중에 저장된(push) 데이터가 가장 먼저 인출(pop)되는 구조이다.
	stack은 container가 아니라 container adapter. 
	기존의 컨테이너에서 인터페이스를 제한하여 만든 것이다.
	stack은 deque, list, vector 등의 시퀀스 컨테이너를 기반으로 구현된다. 
	default는 deque 컨테이너이다.


	원형 
		아래 코드 참고

	
	사용 함수 요소
		top		 : Get a reference to the top element of the stack, does not pop it
		push	:Push an element onto the stack
		pop		:Pop off the top element of the stack
		Size	 :size	
		empty : empty





*/

//Stack 원형
template<class T, Class C = deque<T> >
class std::stack {

    protected:

        C c;

    public:

        typedef typename C::value_type value_type;

        typedef typename C::size_type size_type;

        typedef C container_type;

        explicit stack(const C& a = C()) : c(a){} // Inherit the constructor

        bool empty() const { return c.empty(); }

        size_type size() const { return c.size(); }

        value_type& top() const { return c.back(); }

        const value_type& top() const { return c.back(); }

        void push(const value_type& n) { c.push_back(n); }

        void pop() { c.pop_back(); }

};

using namespace std;

int main ()
{
	vector<int> v(5);
	cout << v.size() << " : " << v.capacity() << endl; // 5 : 5
	for(int i = 0; i < v.size(); i++) cout << v[i] << ' '; // 0 0 0 0 0
	cout <<endl;

	for(int i = 0; i < v.size(); i++) v[i] = i + 1;

	for(int i = 0; i < v.size(); i++)   cout << v[i] << ' '; // 1 2 3 4 5 10 9 8 ..
	cout <<endl;

	for (int i = 0; i < 5; i++) v.push_back(10 - i);
	vector<int>::iterator iter;

	for(iter=v.begin(); iter != v.end(); iter++) cout << *iter << ' ';
	return 0;
}
