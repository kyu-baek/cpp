#include <iostream>
#include<cmath>
#include <iomanip>

/*
	컴파일을 해보면 0.3 + 0.4  는 0.7 임에도
	else 문으로 들어가 sum is not 0.7" 가 출력된다
	이는 if 문의 한계나, 주소값의 혼재 등의 문제가 전혀 아니고,
	컴퓨터가 부동소수점을 표현하는 것의 한계 때문이다.

	실제로 2진수 부동소수점으로 저장된 num1d은
	0.3 이 아닌
	0.3000000119... 로 표현되어 끝이 없고 근사치로만 저장된다
	0.4	도 이진법으로는
	0.40000000596...이다
	고로 이를 sum 한 값은
	0.7000001xx 인 것이다.

	그렇기 때문에 소수를 비교할 때는 숫자와 변수를 그대로 비교할 게 아니라
	근사값인 0.001 까지는 흡사 동일하다고 할 수 있는 함수를
	따로 정의해주어서 사용하는 것이 좋다.
*/

bool	almostEqual(float a, float b)
{
	const float diff = std::abs(a-b);
	return diff < 0.0001;

}

bool	almost_Equal(float a, float b, int ulp)
{
	const float diff = std::fabs(a-b);
	return diff <= std::numeric_limits<float>::epsilon() * std::fabs(a+b) * ulp
			|| diff < std::numeric_limits<float>::main();

}

int main()
{
	const float num1 = 0.3f;
	const float num2 = 0.4f;
	const float num3 = 0.7f;
	const float sum = num1 + num2;
	std::cout << std::setprecision(100) << num1 << std::endl;
	std::cout << std::setprecision(100) << num2 << std::endl;
	std::cout << std::setprecision(100) << num3 << std::endl;
	std::cout << std::setprecision(100) << sum << std::endl;
	if (sum == 0.7f)
		std::cout << "sum is 0.7 " << sum << std::endl;
	else
		std::cout << "sum is not 0.7" << std::endl;

	if (almostEqual(sum, 0.7f))
			std::cout << "sum is 0.7 " << sum << std::endl;
	else
		std::cout << "sum is not 0.7" << std::endl;



}