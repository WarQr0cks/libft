#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n){
    char *t1 = (char*)s1;
    char *t2 = (char*)s2;
    char *a = t2;

    if (ft_strlen(s2) == 0) {
        return (char*)s1;
    }
    while (*t1 != 0 && n--) {
        if (*t1 == *t2) {
            if (*t1 == *a) {
                a = t1;
            }
            t2 += 1;
            if (*t2 == 0) {
                return a;
            }
        }
        else {
            t2 = (char*)s2;
        }
        t1++;
    }
    return NULL;
}