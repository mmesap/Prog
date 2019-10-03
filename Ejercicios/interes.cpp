#include <iostream>
#include <cmath>

double money (double i, double n, double P);


int main (void)
{
  double i=0;
  double n=0;
  double P=0;
  std::cout << "Digite el interes: " << "\n";
  std::cin>> i;
  std::cout << "Digite el numero de periodos: " << "\n";
  std::cin>> n;
  std::cout << "Digite la cantidad inicial: " << "\n";
  std::cin>> P;
  std::cout << "El dinero final es: " << money (i,n,P) << "\n";



  return 0;
}

double money (double i, double n, double P)
{
  double F=P*(std::pow((1+i),n));
  return F;

}
