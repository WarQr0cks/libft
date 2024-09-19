#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    int c1 = 0;
    int c2 = 0;

    n = ft_min(ft_min(n, ft_strlen(s1)), ft_strlen(s2));
    while (n--) {
        c1 += *s1++;
        c2 += *s2++;
    }
    return c1 - c2;
}