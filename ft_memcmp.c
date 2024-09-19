#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
    int c1 = 0;
    int c2 = 0;
    unsigned char *t1 = (unsigned char*)s1;
    unsigned char *t2 = (unsigned char*)s2;
    
    while (n--) {
        c1 += *t1++;
        c2 += *t2++;
    }
    return c1 - c2;
}