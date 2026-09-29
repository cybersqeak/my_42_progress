#include <stdio.h>
#include <stdlib.h>
/* here i want to implement the algorithm that will sord random numbers to be sorted by employing the radix sort method in C */

/* first generate a sequence of numbers by user inputs from commandline */





int  *radix_sort(int *array)
{
	


int	*put_numbers_in_array(int argc,char **argv)
{
	int *array;
	int index = 0;	
	int j = 1;

	while (index < argc - 1)
	{
		array[index] = atoi(argv[j]);
		index++;
		j++;
	}
	return array;
}





int main(int argc, char **argv)
{
	int *array;

	if (argc > 2) // need more than two numbers
		array = put_numbers_in_array(argc,argv);
	/* check the current  order state  	*/
	for (int i = 0; i < argc - 1 ; i++)
		printf("%d\n",array[i]);
	radix_sort(array);
	return 0;
}	
