#include <iostream>
#include <cmath>

int isprime(int m);
void Primos(int m, int n);

int main (void)
{
  Primos(1,100);
  return 0;
}

int isprime(int m)
{
  if(m==1) return 0;
  int flag=1;
  for (int ii=2; ii<=std::sqrt(m); ++ii)
    {
      if (m%ii==0)
	{
	  flag=0;
	  break;
	}
    }
  return flag;
}
      

void Primos(int m, int n)
{
  for (int ii=m;ii<=n; ++ii)
    {
      
      if (isprime(ii))
	    {
	      std::cout<<ii<<std::endl;
	    }
    }
}
      
	  
