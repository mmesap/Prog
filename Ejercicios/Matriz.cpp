#include <iostream> 
#include <vector> 
#include <cmath>

bool is_orthogonal(const std::vector<double> & M, const double eps);
int main (void)
{
  const int N = 4;
  std::vector<double> A = {1, 0, 0, 0,
                           0, 0.8, 0.3, -0.52,
                           0, -0.6, 0.4, -0.69,
                           0, 0, 0.86, 0.5};
  std::cout << is_orthogonal(A, 0.001) << "\n";
  std::cout << is_orthogonal(A, 0.012) << "\n";
  std::cout << is_orthogonal(A, 0.1) << "\n";
  return 0;
}

bool is_orthogonal(const std::vector<double> & M, const double eps)
{
  
}
