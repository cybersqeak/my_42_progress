#include "go_next_line.h"
#include <fcntl.h>
int main() {
int	fd = open("foo.txt", O_RDONLY);
printf("%s\n",go_next_line(fd));

	return 0;
}
