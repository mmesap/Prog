#include <iostream>
#include <cmath>

int prime (int m);
void print (int x, int y);

int main (void)
{
  print(2,30);
  return 0;
}

int prime(int m)
{
  int flag=1;
  if(m==2) return flag;
  for (int ii=2; ii<m; ii+=1)
  {
    if (m%ii==0)
    {
      flag=0;
      break;
    }
  }
  return flag;
}

void print (int x, int y)
{
  for (int i=x; i<=y; i+=1)
  {
    std::cout << i << "\t\t" << prime (i) << "\n";
  }
}
