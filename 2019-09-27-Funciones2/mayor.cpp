#include <iostream>

int max( int a, int b);
double max(double a, double b);

int main (void)
{
  std:: cout <<max (-3,2)<< "\n";
  std:: cout <<max (5.6,-2.9)<< "\n"; //Utiliza la función que más se ajuste a los datos (int o double)
  return 0;
}

int max (int a, int b)
{
  if (a>=b)
    {
      return a;
    }
  else
    {
      return b;
    }
}

double max(double a, double b)
{
  if (a>=b)
    {
      return a;
    }
  else
    {
      return b;
    }
}

	
