/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int primeNumber;
	for (int i = 2; i <= testcase; i++)
	{
		primeNumber = 2;
		while (i % primeNumber != 0)
		{
			primeNumber++;
		}

		if (primeNumber == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
