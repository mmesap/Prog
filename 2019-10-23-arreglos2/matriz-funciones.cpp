#include <iostream>

const int m = 5 , n = 5;
void print(int M[][n], int m1, int n1);

int main (void)
{
  //declarar las matrices


  int A[m][n] = {{0}};
  int AT[n][m] = {{0}};
  int ii, jj;

  for ( ii = 0; ii < m; ++ii)
    {
      for ( jj = 0; jj < n; ++jj)
	{
	  A[ii][jj] = ii*n + jj;
	}
    }
  
  std::cout << " Original matrix: \n";
   print(A, m, n);
  
  //procesarla: transponerla

  for ( ii = 0; ii < m; ++ii)
    {
      for ( jj = 0; jj < n; ++jj)
	{
	  AT[jj][ii] = A[ii][jj];
	}
    }

  //imprimirla

    std::cout << " Transposed  matrix: \n";
    print(AT, m, n);


  return 0;
}

void print(int M[][n], int m1, int n1)
{
  for (int ii = 0; ii < n; ++ii)
    {
      for (int jj = 0; jj < m; ++jj)
	{
	  std::cout <<  M[ii][jj] << "   ";
	}
      std::cout << "\n";
    }





}
