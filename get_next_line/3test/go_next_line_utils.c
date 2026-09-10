#include "go_next_line.h"



int init(t_sys *sys, int fd)
{
	sys->fd = fd;

	if (read_one_chunk(sys) == -1)
		return -1; // error
	sys->buff[sys->count]='\0';// need a terminator!!!
	sys->flag = 1; //whole file saved to buff
	return 1;
}

void truncate_tail(t_sys *sys, size_t pos)
{
	size_t index = 0;
	char *tmp = malloc(pos + 1 + 1); //BS - (BS -(pos + 1)) + nullteminator
	if (!tmp)
		return ;
	while (index <= pos)
	{
		tmp[index] = sys->buff[index];
		index++;
	}
	//free(sys->buff);
	sys->current_buff = tmp;
}


int check_newline(t_sys *sys)
{
	size_t i = 0;
	while (i < BUFFER_SIZE)
	{
		if (sys->buff[i] == '\n')
		{
			printf("found newline character in current buff! at index %zu\n",i);
			truncate_tail(sys, i);
			sys->index = i;
			return 1;
		}
		i++;
	}
	printf("No newline character detected at current buff\n");
	return 0;
}

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
	if (sys->count <= pre_count) // i think this prevent from inf loop in next outher if statement
	{
		if (sys->count == pre_count) //end
			return 1; // success!
		return -1; //error
	}
	if (sys->count % BUFFER_SIZE != 0)  //this alone cause inf loop for certain case for sure
		return 1;
	if(update_buffer(sys) == -1)
		return -1;
	return read_one_chunk(sys);
}






