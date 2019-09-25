#include <iostream>

void helloworld (void); //Declaración de la función

int main (void)
{
  helloworld();
  return 0;
  
}
void helloworld (void) // Implementación: qué hace y cómo lo hace
{
  std:: cout << "Hello world from a function\n";
}


