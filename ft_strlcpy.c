#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t sz){
    const size_t srclen = ft_strlen(src);

    if (srclen + 1 < sz) {
        ft_memcpy(dest, src, srclen + 1);
    }
    else {
        ft_memcpy(dest, src, sz);
        dest[sz-1] = 0;
    }
    return srclen;
}