#include <iostream>

int main()
{
	//메모리 할당 기본 형식 차이
	//c
	int *pnData = (int *)malloc(sizeof(int));
	free(pnData);

	//c++
	int *pnNewData = new int;
	delete pnNewData;


/*
	메모리 할당에 원하는 만큼의 크기를 추가 할 때 ex) 5
	이 경우 할당해제 시에 c++은 배열 형식으로 delete 해준다
*/
	//c
	int *pnData = (int *)malloc(sizeof(int) * 5);
	for (int i = 0; i <5; i++)
		pnData[i] = (i + 1) * 10;
	for (int i = 0; i <5; i++)
			printf("%d\n", pnNewData[i]);
	free(pnData);

	//c++
	int *pnNewData = new int[5];
	for (int i = 0; i <5; i++)
		pnNewData[i] = (i + 1) * 10;
	for (int i = 0; i <5; i++)
			std::cout << pnNewData[i] << std::endl;
	delete [] pnNewData;

	return 0;
}
