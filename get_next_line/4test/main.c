#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*one;
	char	*two;
	char	*three;

	fd = open("foo.txt", O_RDONLY);
	one = get_next_line(fd);
	printf("\nprintf detect bytes of %d\n", printf("%s", one));
	two = get_next_line(fd);
	printf("\nprintf detect bytes of %d\n", printf("%s", two));
	three = get_next_line(fd);
	printf("\nprintf detect bytes of %d\n", printf("%s", three));
	free(one);
	free(two);
	free(three);
	// printf("\nprintf detect bytes of %d\n",printf("%s",get_next_line(fd)));
	close(fd);
	// printf("hello");
	return (0);
}
