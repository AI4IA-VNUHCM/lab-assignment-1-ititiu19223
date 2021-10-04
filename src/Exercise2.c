#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc], i;
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i + 1]) == 0)
		{
			argc = i;
			break;
		}
		else
			testcase[i] = atoi(argv[i + 1]);
	}
	//Your codes here
	int max = 0, min = 1e6;
	for (int i = 0; i < argc; i++)
	{
		if (max < testcase[i])
			max = testcase[i];
		if (min > testcase[i])
			min = testcase[i];
	}

	printf("Max: %d", max);
	printf("\nMin: %d", min);
	return 0;
}