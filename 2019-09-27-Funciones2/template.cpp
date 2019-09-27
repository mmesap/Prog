#include <iostream>


template <class T, typename S> //Se puede utilizar class o typename para las plantillas
T max (T a, S b) //Al poner S y T se pueden admitir dos datos, tanto enteros como flotantes.
{
  T result=0;
   if (a>=b)
    {
      result= a;
    }
  else
    {
      result= b;
    }
   return result;
}
  


int main (void)
{
  std:: cout <<max (-3,2)<< "\n";
  std:: cout <<max (-5.5,-2.3)<< "\n"; 
  return 0;
}

/* template <typename T>
T max (T a, T b)
...
*/ 
	
