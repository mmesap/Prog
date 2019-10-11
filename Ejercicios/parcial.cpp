#include <iostream>
#include <fstream>
#include <cmath>

double potential(double x);
double dev_central(double x, double h);
double dev_central_richardson(double x, double h);
double electricfield(double x, double h);

int main(void)
{
  
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  std::ofstream fout;
  fout.open("campo.txt"); 
  
  double x = M_PI/3.0;
  double h= 0.02;

  for(x=0.0; x<= 2.5; x+=0.02)
    {
      std::cout << x << "\t\t"
		<<-1*(2*std::sin(x)+2*x*std::cos(x))
		<< "\t\t"
		<<electricfield(x,h)<< "\n";
    }
  return 0;

}

double potential(double x)
{
  return 2*x*std::sin(x);

}

double dev_central(double x, double h)
{
   return (potential(x+h/2)-potential(x-h/2))/h; 

}

double dev_central_richardson(double x, double h)
{

  double result1= dev_central(x, h);
  double result2= dev_central(x, h/2);

  return (4*result2 - result1)/3;

}

double electricfield(double x, double h)
{
  double camp= dev_central_richardson (x,h)*(-1);
  return camp;
}
