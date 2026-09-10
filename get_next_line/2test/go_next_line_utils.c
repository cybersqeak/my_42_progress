#include "go_next_line.h"

int update_buffer(t_sys *sys)
{
	size_t i;
	size_t j;
	static int n = 2;
	char *tmp = malloc((BUFFER_SIZE * n++)); //its essencially always tmp = sys->buff * n (n = 2,3,4...)
	if (!tmp)
	{
		free(sys->buff);
		return -1;
	}
	i = 0;
	j = 0;
	while (i < sys->count) //lucky for char is 1byte
		tmp[i++] = sys->buff[j++]; // copy current buffer
	free(sys->buff);
	sys->buff = tmp; // new buffer with free space +BUFFERSIZE!
	return 1;
}

ssize_t read_one_chunk(t_sys *sys)
{
	ssize_t pre_count;
	ssize_t rd;
	
	pre_count = sys->count;
	rd = read(sys->fd, &sys->buff[sys->count] , BUFFER_SIZE); // rd holds how many bytes read so max is bufsize
	sys->count += rd;
	printf("last rd was %ld, And count is now %ld\n", rd, sys->count);
	if (sys->count <= pre_count) // i think this prevent from inf loop in next outher if statement
	{
		if (sys->count == pre_count) //end
		{
			printf("lady! about to flash!!\n");
			sleep(1);
			return 1; // success!
		}
		return -1; //error
	}
	if (sys->count % BUFFER_SIZE != 0)  //this alone cause inf loop for certain case for sure
	{
		printf("boy! about to flash!!\n");
		sleep(1);
		return 1;
	}
	if(update_buffer(sys) == -1)
		return -1;
	return read_one_chunk(sys);
}






