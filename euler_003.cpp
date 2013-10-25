// Author Christopher Olsen

// Project Euler Problem 3
//
// Largest Prime Factor
//
// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143 ?


// The Plan
//
// To find prime factors (and only prime factors) we start at 2 and begin 
// stepping upwards until we find a factor which in this case will be 
// guaranteed to be prime.  We then divide the number (the big one not the
// factor) by the factor itself, then start the process over except we go from
// the newest factor up to (half) the new number.
 

#include <iostream>
#include <math.h> // for fmod()
using namespace std;

int main()
{
  cout.precision(15); // for debugging
  double current = 2; // everything's doubles so we can have nice things
  double number = 600851475143;
  double biggest_factor = 1; 
  
  while (current <= number)
    {
      double remainder = fmod(number,current); 
      if (0 == remainder)
	{
	  if (current > biggest_factor)
	    {
	      biggest_factor = current;
	    }
	  number = number / current;
	}
      else
	{
	  current ++;
	}
    }
  
  cout << "The largest prime factor is: " << biggest_factor << endl;
  return 0;
}


// $ g++ euler_003.cpp
// $ time ./a.out
// The largest prime factor is: 6857
//
// real	0m0.003s
// user	0m0.000s
// sys	0m0.000s
