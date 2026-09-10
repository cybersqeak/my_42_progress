#include "get_next_line.h"
int loop(t_sys *sys)
{
    int result;
    int read_result; 
    if (sys->flags[0] == 0)
        read_result = read_buff(sys);
    if (read_result <= 0)
        return read_result;
    while (result != 0)
    {
        result = find_newline(sys);
        if (result <= 0)
            read_new(sys);
    }
} 
   
char *get_next_line(int fd)
{
    static t_sys sys;
    sys.fd = fd;
    loop(&sys);
   return check_return(&sys);
}



