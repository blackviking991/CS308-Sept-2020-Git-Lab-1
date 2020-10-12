/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// ENter the number you want the sqrt for

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input < 0)
	{
		float tmp = sqrt(input * -1);
		printf("Sqrt of %d is %fi\n", input, tmp);
	}
	else
	{
		printf("Sqrt of %d is %f\n", input, sqrt(input));
	}

	printf("End of the program, Exiting\n");
	return (0);

} // end main
