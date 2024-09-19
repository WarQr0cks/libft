#include "libft.h"

int ft_atoi(const char *s){
    int nb = 0;

    while (*s != 0) {
        if (!ft_isdigit(*s)) {
            return 0;
        }
        nb = nb*10 + (*s - 48);
        s++;
    }
    return nb;
}