#include "libft.h"

char *ft_strdup(char *s){
    unsigned long size = ft_strlen(s) + 1;
    char *p = malloc(size);

    if (!s) {
        return NULL;
    }
    ft_strlcpy(p, s, size);
    return p;
}