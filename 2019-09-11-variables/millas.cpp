#include <iostream>

int main (void)
{
  double  x = 0;
  double result=0;
  
  std::cout << "Inserte las millas :" " \n" ;
  std::cin >> x;
  result= x*1.609;
  std::cout  <<  " Kilometros: " << result <<  "\n" ;


  
  return 0;
}
