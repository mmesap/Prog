#include <iostream>
#include <cmath>

using fptr = double (double);
double fun (double x);
double bisection (double xl ,double xu , const double eps, fptr f);
  

int main (void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  const double eps = 1.0e-6;
  double root= bisection (100,200, eps, fun);
  std::cout << root << "\n";
  
  
  return 0;
}

double fun (double x)
{

  return x + 10 - x*std::cosh(50/x);
  
}

double bisection (double xl ,double xu , double eps, fptr f)
{
  double xr = 0.0;
  while (1)
    {
      xr = (xl+xu)/2;
    if (std::fabs(f(xr))<=eps)
      {
	return xr;
      }
      else if (f(xr)*f(xl)<0)
	{
	xu = xr;
      }
      else
	{
	  xl = xr;
	}
    }
}
  
