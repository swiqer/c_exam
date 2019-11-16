#include <unistd.h>

int not_seen_before(char *s, int max_pos, char c)
{
    int i;

    i = -1;
    while(++i < max_pos)
        if(s[i] == c)
            return 0;
    return (1);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        
    }
}
