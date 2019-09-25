#include <iostream> // valor y referencia

void ref(int m, int & n) //Para referencia se utiliza "&"
{
  m = 35;
  n = 36;
  std::cout << &m << "\n";
  std::cout << &n << "\n";
  std::cout << m << "\n";
  std::cout << n << "\n";
}

int main ()
{
  int a = 33;
  int b = 34;

  ref (a,b);
   std::cout << &a << "\n";
   std::cout << &b << "\n";
   std::cout << a << "\n";
   std::cout << b << "\n";

   return 0;
}

