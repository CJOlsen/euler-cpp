// Author Christopher Olsen

// Project Euler Problem 1
//
// Multiples of 3 and 5
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, 
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main() 
{
  int total = 0;
  for (int i = 1; i < 1000; i++)
    {
      if (0 == i % 3 || 0 == i % 5)
	{
	  total += i;
	}
    }
  cout << "\n The sum is: " << total << endl;
  return 0;
}

// $ g++ make euler_001.cpp
// $ ./a.out
// The sum is: 233168
