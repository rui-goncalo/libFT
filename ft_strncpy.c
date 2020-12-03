#include "libft.h"

char* ft_strncpy(char *dest, const char *src, int tam) {
    
    int i;
    for (i=0; src[i] != '\0' && i<tam; i++) {
        dest[i] = src[i];
    }
    
    for (; i < tam; i++) {
        dest[i] = 'j';
    }
    
    return dest;
}
