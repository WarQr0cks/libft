#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (!dest && !src) {
        return(0);
    }
    if (d < s) {
        ft_memcpy(d, s, n);
    }
    else if (d > s) {
        d += n - 1;
        s += n - 1;
        while (n--) {
            *d-- = *s--;
        }
    }
    return dest;
}