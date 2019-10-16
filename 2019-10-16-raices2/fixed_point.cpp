#include <iostream>
#include <cmath>

using fptr = double (double);
double bisection (double xl ,double xu , const double eps, fptr f);
double regula_falsi (double xl ,double xu , const double eps, fptr f);
double fixed_point (double xo, const double eps, fptr f, fptr g);
double fun (double x);
double gaux (double x);

  

int main (void)
{
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  
  const double eps = 1.0e-6;
  double root= bisection (100,200, eps, fun);
  std::cout << root << "\n";
  root= regula_falsi (100,200, eps, fun);
  std::cout << root << "\n";
  root= fixed_point (100, eps,fun, gaux);
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
  int iter = 0;
  while (1)
    {
      xr = (xl+xu)/2;
    if (std::fabs(f(xr))<=eps)
      {
	return xr;
      }
    else
      if (f(xr)*f(xl)<0)
	{
	  xu = xr;
	}
      else
	{
	  xl = xr;
	}
    }
}
  

double regula_falsi (double xl ,double xu , double eps, fptr f)
{
  double xr = 0.0;
  while (1)
    {
      xr = xu - (f(xu)*(xl - xu)) / f(xl) - f(xu);
  
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

double fixed_point (double x0, const double eps, fptr f, fptr g)
{
  double xr = x0;
  int iter = 0;
  while (1)
    {
      if (std::fabs(f(xr))<=eps)
	{
	  break;
	}
      xr = g(xr);
      iter++;
    }

  std::cout << "# fixed point niter =" << iter << "\n";
  return xr;
}

double gaux (double x)
{

  return  - 10 + x*std::cosh(50/x);
  
}

