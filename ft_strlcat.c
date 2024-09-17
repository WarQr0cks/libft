#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t sz){
    char *d = dest;

    while (*d != 0) {
        d++;
    }
    ft_strlcpy(d, src, sz);
    return ft_strlen(dest) + ft_strlen(src);
}