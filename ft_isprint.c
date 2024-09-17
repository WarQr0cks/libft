#include "libft.h"

int ft_isprint(int c){
    return ft_isspace(c) || ft_isgraph(c);
}