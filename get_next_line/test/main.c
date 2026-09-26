#include "get_next_line.h"
#include <fcntl.h>

int main() {
/*int	fd = open("foo.txt", O_RDONLY);
char *test1 = get_next_line(fd);
char *test2 = get_next_line(fd);
char *test3 = get_next_line(fd);
char *test4 = get_next_line(fd);
char *test5 = get_next_line(fd);
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
int fd1 = open("test.txt", O_RDONLY);
char *new = get_next_line(fd1);
printf("%d\n",printf("%s",new));
free(new);
close(fd1);
	return 0;
}
