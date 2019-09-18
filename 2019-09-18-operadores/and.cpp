#include <iostream>
using namespace std;

int main (void)
{
  cout << ((5==5) && (3>6)) << "\n";
  cout << ((5==5) || (3>6)) << "\n";
  cout << ((5==5) xor (3>6)) << "\n";

  int a=0;
  int b=5;
  a= (b=3, b+2);
  cout << a << "\n";

  return 0;
      
}
	  
	    
