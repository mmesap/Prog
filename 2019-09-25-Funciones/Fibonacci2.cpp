#include <iostream>

int fibonacci_loop (int N);
int fibonacci_recursive (int N);
  

int main (void)
{
  std::cout <<fibonacci_loop(N) << std:: endl;
  std::cout <<fibonacci_recursive(N) << std:: endl;
  return 0;
}



int fibonacci_loop (int N)
{
  int suma = 0;
  if ((N==0 or (N==1))
    {
      return 1;
    }
    int aold1=1;
    int aold2=1;
    int a;
    for (int ii = 2; ii <= N; ++ii)
      {
	a= aold1 + aold2;
	suma +=a;
	aold2 = aold1;
	aold1 = a;
      }
    
    
