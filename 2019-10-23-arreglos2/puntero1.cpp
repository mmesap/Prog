#include <iostream>

int main()
{
  int a = 25;
  int * b = &a;

  std::cout << a << "\n";
  std::cout << &a << "\n";
  std::cout << b << "\n";
  std::cout << &b << "\n";
  std::cout << *b << "\n";

  return 0;
}
