#include "go_next_line.h"
#include <fcntl.h>
int main() {
int	fd = open("foo.txt", O_RDONLY);
printf("\nprintf detect bytes of %d\n",printf("%s",go_next_line(fd)));
//printf("hello");

	return 0;
}
