//Se ejecuta pero el código está mal porque billy [10] no existe. Se puede ver ejecutando con g++ -Wall -g -fsanitize=address -fsanitize=leak -fsanitize=undefined array3.cpp


#include <iostream>
int main() 
{
  int billy [10] = {1};
  std::cout << billy[1] << "\n";
  billy [10]=7;
  std::cout << billy[10] << "\n";
  return 0;
}
