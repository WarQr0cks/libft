#include "libft.h"

char *ft_strrchr(const char *s, int c){
    char *n = ft_strchr(s, c);
    char *a;

    if (c == 0 || n == NULL) {
        return n;
    }
    while (n != NULL) {
        a = n;
        n = ft_strchr(n + 1, c);
    }
    return a;
}