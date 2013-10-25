// Author Christopher Olsen

// Project Euler Problem 2
//
// Even Fibonacci Numbers
//
// Each new term in the Fibonacci sequence is generated by adding the previous
// two terms. By starting with 1 and 2, the first 10 terms will be:
//
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose values do not
// exceed four million, find the sum of the even-valued terms.
//

#include <iostream>
using namespace std;

int main() 
{
  int first = 1;
  int second = 1;
  int current = 2;
  int total = 0;
  while (current < 4000000)
    {
      if (0 == current % 2)
	{
	  total += current;
	}
      first = second;
      second = current;
      current = first + second;
    }
  cout << "\nThe total is: " << total << endl;
  return 0;
}

// $ g++ euler_002.cpp
// $ time ./a.out
// The total is: 4613732
//
// real	0m0.005s
// user	0m0.000s
// sys	0m0.000s