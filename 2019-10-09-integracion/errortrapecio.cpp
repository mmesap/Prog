#include <iostream>
#include <cmath>

using fptr = double (double);
double f (double x);
double trapezoidrule (double h, double x0, double xf, fptr fun);

int main (void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  for (double h = 0.1; h >= 1.0e-8; h /= 2.0)
  {
	 std::cout << h << "\t\t"
		   << trapezoidrule(h ,0.0, 2*M_PI, f) << "\n";
  }

  return 0;
}


double f (double x)
{
  return std::sin(x);
}



double trapezoidrule (double h, double x0, double xf, fptr fun)
{
  double sum = 0.0;
  double xi = 0.0;
  int n = (xf-x0)/h;
  for (int ii = 1; ii <= n-1; ii++)
    {
      xi = x0 + ii*h;
      sum += 2*f(xi);
    }
  sum += f(x0) + f(xf);
  return sum*h/2;

}
