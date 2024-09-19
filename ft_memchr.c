#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    unsigned char *t = (unsigned char*)s;
    unsigned char d = c;

    while (n--) {
        if (d == *t) {
            return t;
        }
        t++;
    }
    return NULL;
}