#include <iostream>
#include <vector>

const int nreads = 3;
const int min = 10;
const int max = 100;

int main (void)
{
  //declarar el arreglo
  std::vector<int> numbers;

  // leer nreads
  int num;
  for (int iread = 0; iread < nreads; ++iread)
    {
      std::cin >> num;
      if (10 <= num and num <= 100)
	{
	  bool inarray = false;
	  for (const auto & val : numbers)
	    {
	      if (val == num)
		{
		  inarray = true;
		  break;
		}
	    }
	  if (false == inarray)
	    {
	      numbers.push_back(num);
	    }
	}
    }
  //verificar que lo leído no este en el arreglo, en ese caso guardar
  //imprimir lo leido
 
  for (const auto & x : numbers)
    {
      std::cout << x << "    ";
    }
  std::cout << "\n";
}

