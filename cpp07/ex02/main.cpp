#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int test(void) {

    std::cout << "1. int Test" << std::endl;
    Array<int> a(10);
    for (unsigned int i = 0; i < 10; i++)
        a[i] = i;
    try 
    {   
        for (unsigned int i = 0; i < 11; i++)
            std::cout << a[i] <<std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


  std::cout << "\n2. char Test" << std::endl;
      Array<char> c(10);
    for (unsigned int i = 0; i < 10; i++)
        c[i] = i + '0';
    try 
    {
        for (unsigned int i = 0; i < 11; i++)
            std::cout << c[i] <<std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "\n3. string Test\n" << std::endl;
    Array<std::string> arr1(3);
    arr1[0] = "hi";
    arr1[1] = "hello";
    arr1[2] = "안녕";

    for (unsigned int i = 0 ; i < arr1.size() ; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;


    std::cout << "3.2\n" << std::endl;
    Array<std::string> arr2(arr1);
    for (unsigned int i = 0 ; i < arr1.size() ; ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
    try {
        arr1[3] = "worng";
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
  return 0;
}


int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//


    std::cout << "\n\n------Custom Test Start------\n\n" << std::endl;
    test();

    return 0;
}