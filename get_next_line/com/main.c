#include "get_next_line.h"
#include <fcntl.h>
/*
int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*test5;
	char	*new;
	int		fd1;
	double	elapsed;

	/*int	fd = open("foo.txt", O_RDONLY);
	test1 = get_next_line(fd);
	test2 = get_next_line(fd);
	test3 = get_next_line(fd);
	test4 = get_next_line(fd);
	test5 = get_next_line(fd);
	printf("%d\n",printf("%s",test1));
	free(test1);
	printf("%d\n",printf("%s",test2));
	free(test2);
	printf("%d\n",printf("%s",test3));
	free(test3);
	printf("%d\n",printf("%s",test4));
	free(test4);
	printf("%d\n",printf("%s",test5));
	free(test5);
	close(fd);
	*/
#include <stdio.h>
#include <time.h>
int	main(void)
{
	struct timespec start, end;
	clock_gettime(CLOCK_MONOTONIC, &start);
	// fd1 = open("big_line_with_nl", O_RDONLY);
	fd1 = open("test.txt", O_RDONLY);
	// fd1 = open("empty", O_RDONLY);
	new = get_next_line(fd1);
	printf("%d\n", printf("%s", new));
	free(new);
	close(fd1);
	clock_gettime(CLOCK_MONOTONIC, &end);
	elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
	printf("elapsed: %.6f seconds\n", elapsed);
	return (0);
}
