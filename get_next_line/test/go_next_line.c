#include "go_next_line.h"
char *go_next_line(int fd)
{
	ssize_t rd;
	static char buf[BUFFER_SIZE];
	
	printf("fd is %d\n",fd);
	rd = read(fd, buf, BUFFER_SIZE);
	printf("rd is %ld\n",rd);
	if(rd <= 0)
	{
		printf("an error occured\n");
		return NULL;
	}
	buf[rd]='\0';
	return buf;
}
