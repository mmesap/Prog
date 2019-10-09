#include <iostream>
#include <cmath>

using fptr = double (double);
double f (double x);
double trapezoidrule (double h, double x0, double xf, fptr fun);
double trapecio_richardson(double h, double x0, double xf, fptr fun);

int main (void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  
  for (double h = 0.1; h >= 1.0e-8; h /= 2.0)
  {
	 std::cout << h << "\t"
		   <<std::fabs( trapezoidrule(h ,0.0, 2*M_PI, f)) << "\t"
		   <<std::fabs( trapecio_richardson (h ,0.0, 2*M_PI, f)) <<"\n";
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

double trapecio_richardson(double h, double x0, double xf, fptr fun)
{
  return (4*trapezoidrule(h/2, x0, xf, fun) - trapezoidrule(h, x0, xf, fun))/3;
}
