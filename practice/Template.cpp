
/*
	함수 템플릿이 유용할 때 : 인자의 데이터타입에 따른 함수 오버로딩을 하지 않아도 됨.


*/


template <typename T>
T add(T a, T b)
{
	return ( a + b );
}

template <typename A>
A getArraySum(const A arr[], int n)
{
	A sum = 0;
	for (int i =0; i < n; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	int 	a = add<int>(1, 2);
	double	b = add<double>(1.1, 2.2);
	float	f = add<float>(1.1f, 2.2f);


	//or

	auto 	aa = add(1, 2);
	auto	ab = add(1.1, 2.2);
	auto	af = add(1.1f, 2.2f);


	//-----------------------------------------

	int iarr[5] = { 3, 1, 4, 1, 5};
	float farr[5] = { 3.1, 1.1, 4.1, 1.1, 5.1};

	int isum = getArraySum<int>(iarr, 5);
	float fsum = getArraySum<float>(farr, 5);


	return 0;
}
