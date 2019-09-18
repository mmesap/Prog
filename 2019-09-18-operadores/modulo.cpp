#include <iostream>
using namespace std;

int main (void)
{
  int a = 0.0;
  cin >> a;
  if (a%3==0) {
    cout << "Number " << a << " can be divided by 3\n";
  }
  else {
    cout << "Number " << a << " cannot be divided by 3\n";
      }

  return 0;
}
