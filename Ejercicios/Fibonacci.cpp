#include <iostream>
using namespace std;

int main(void)
{
    int x=0;
    int num=0;
    int i=1;
    int m=x+i;
    cout << "Numero limite de la serie Fibonacci:"<< "\n";
    cin >> num;

    while (m<num)
    {

      cout <<m<< "\n";
      m=x+i;
      x=i;
      i=m;
      
    }

    return 0;
}
