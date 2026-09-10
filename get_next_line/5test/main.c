#include "get_next_line.h"
#include <fcntl.h>


int main(void)
{
    char *one;
    char *two;
    char *three;
    char *four;
    char *five;
    int fd = open("foo.txt",O_RDONLY);
    one = get_next_line(fd);
    two = get_next_line(fd);
    three = get_next_line(fd);
    four = get_next_line(fd);
    five = get_next_line(fd);
	printf("\nprintf detect bytes of %d\n", printf("%s", one));
	printf("\nprintf detect bytes of %d\n", printf("%s", two));
	printf("\nprintf detect bytes of %d\n", printf("%s", three));
	printf("\nprintf detect bytes of %d\n", printf("%s", four));
	printf("\nprintf detect bytes of %d\n", printf("%s", five));

    free(one);
    free(two);
    free(three);
    free(four);
    free(five);
    fd = open("goodday.txt",O_RDONLY);
    one = get_next_line(fd);
    two = get_next_line(fd);
    three = get_next_line(fd);
    four = get_next_line(fd);
    five = get_next_line(fd);
	printf("\nprintf detect bytes of %d\n", printf("%s", one));
	printf("\nprintf detect bytes of %d\n", printf("%s", two));
	printf("\nprintf detect bytes of %d\n", printf("%s", three));
	printf("\nprintf detect bytes of %d\n", printf("%s", four));
	printf("\nprintf detect bytes of %d\n", printf("%s", five));

    free(one);
    free(two);
    free(three);
    free(four);
    free(five);
    return 0;
}

