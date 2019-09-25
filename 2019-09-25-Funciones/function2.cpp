#include <iostream> //funciones 

void helloworld (int m); 

int main (void)
{
  int m = 34;
  helloworld(m);
  return 0;
}


void helloworld (int m) 
{
  std:: cout << "Hello world -> " << m << "\n";
}



