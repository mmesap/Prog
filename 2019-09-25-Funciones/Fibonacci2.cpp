#include <iostream>

void fibonacci_loop (int N);

int main (void)
{
  int N;
  std::cout <<"Escriba el número de dígitos"<< std:: endl;
  std::cin >> N;
  fibonacci_loop (N);

  return 0;
}

void fibonacci_loop (int N){
  if (N==1){
    std::cout << "1";
  }else{
    if(N==2){
      std::cout << "1, 1,";
    }else{
      int n1 = 1;
      int n2 = 1;
      int n;
      int x=0;
      std::cout << "1, 1,";
      while (x<N){

        n = n1 + n2;
        std::cout << n <<" ,";
        n1 = n2;
        n2 = n;
        x++;
      }
    }
  }
  
}
    
    
