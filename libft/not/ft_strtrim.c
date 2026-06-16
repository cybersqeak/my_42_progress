#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*
char *second_set_pointer(const char *src, char const *set,size_t start_index)
{
		size_t matched_index = 0;
		size_t scan_index = start_index;
		char *pointer = NULL;
		while (s1[scan_index] &&(s1[scan_index] == set[matched_index]))
		{
			scan_index++;
			matched_index++;
		}
		if (set[matched_index] == '\0')
		{
			pointer = &s1[start_index];
			return (pointer);
		}
		return (NULL);
}
*/


size_t string_length(char *first_end_pointer,char *second_first_pointer)
{
	size_t length = 0; /// I am tring to caluclate the length of letters useing pointers of edges...
	while (first_end_pointer != second_first_pointer)
		length++;
	return (length);
}

char *set_pointer(const char *src, char const *set,size_t start_index)
{
		size_t matched_index = 0;
		size_t scan_index = start_index;
		char *pointer = NULL;
		while (s1[scan_index] &&(s1[scan_index] == set[matched_index]))
		{
			scan_index++;
			matched_index++;
		}
		if (set[matched_index] == '\0')
		{
			pointer= &s1[start_index];
			return (pointer);
		}
		return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t index = 0;
	while (str[index])
		index++;
	return (index);
}
/*
void	activate_the_first_trim(char *trim_start_pointer, size_t set_length)
{
	size_t count = 0;
	while (count < set_length)
	{
		trim_start_pointer[index]
*/

char *ft_strtrim(char const *s1, char const *set)
{
	size_t src_length = ft_strlen(s1);
	size_t set_length = ft_strlen(set);
	size_t string_size = src_length - set_length + 1;// this is not correct.
	size_t index = 0;
	const char *frist_pointer = NULL;
	const char *second_pointer = NULL:
	
	while (s1[index])
	{
		first_pointer = set_pointer(s1,set,index);
		if (first_pointer)
			break;
		index++;
	}

	while (s1[index])
	{

		second_pointer = set_pointer(s1,set,index);
		if (second_pointer)
			break;
		index++;
	}
	
	char *first_end_pointer = first_pointer + set_length;
	char *trimmed_string = malloc((string_size(first_pointer + set_length, second_pointer) + 1) * sizeof(char));
	if (!(trimmed_string))
		return (NULL);
	index = 0;
	
	while ()
	{




		

	
		

   		


