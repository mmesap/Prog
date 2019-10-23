#include <iostream>

int main (void)
{
  //declarar las matrices

  const int m = 5 , n = 5;
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
  for ( ii = 0; ii < m; ++ii)
    {
      for ( jj = 0; jj < n; ++jj)
	{
	  std::cout <<  A[ii][jj] << "   ";
	}
      std::cout << "\n";
    }
  
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
  for ( ii = 0; ii < n; ++ii)
    {
      for ( jj = 0; jj < m; ++jj)
	{
	  std::cout <<  AT[ii][jj] << "   ";
	}
      std::cout << "\n";
    }



  return 0;
}
