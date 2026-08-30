#include "go_next_line.h"

int update_buffer(t_sys *sys)
{
	size_t i;
	char *tmp = malloc((sizeof(sys->buff)) + BUFFER_SIZE); //its essencially always tmp = sys->buff * n (n = 2,3,4...)
	if (!tmp)
	{
		free(sys->buff);
		return 0;
	}
	i = 0;
	while (i < sizeof(sys->buff)) //lucky for char is 1byte
		tmp[i++] = sys->buff[i++]; // copy current buffer
	free(sys-buff);
	sys->buff = tmp; // new buffer with free space +BUFFERSIZE!
	return 1;
}


ssize_t read_one_chunk(t_sys *sys)
{
	ssize_t pre_count;
	
	pre_count = sys->count;
	sys->rd = read(sys->fd, sys->buff, BUFFER_SIZE); // rd holds how many bytes read so max is bufsize
	sys->count += rd;
	printf("last rd was %ld, And count is now %ld\n", sys->rd, sys->count);
	if (count <= pre_count) // i think this prevent from inf loop in next outher if statement
	{
		if (count == pre_count) //end
		{
			printf("if you reading this, that means reached to an end for sure!!!!\n");
			sleep(1);
			return 1; // success!
		}
		return -1; //error
	}
	if (sys->count % BUFFER_SIZE != 0)  //this alone cause inf loop for certain case for sure
	{
		printf("it has been read all by now\n");
		return 0;
	}
	update_buffer(sys); // i need to consider where to update...  
	return read_one_chunk(sys);
}






