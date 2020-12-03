#include "libft.h"


char* ft_strcpy(char *dest, const char *source) {

    int i;
    for (i = 0; source[i] != '\0'; i++) {
        dest[i] = source[i];
    }
    
    dest[i] = '\0';
    
    return dest;
}