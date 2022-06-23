#include "Base.hpp"

int main()
{	
  for (int i = 0; i < 100; i++) 
  {
	std::cout << i + 1 << ".\n";
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
	std::cout << "\n\n";
  }
  return 0;
	
}