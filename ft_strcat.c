#include "libft.h"

char* ft_strcat (char *dest, const char *src) {
    
    int i, j;
    i=0;
    
    while(dest[i]) { // desta forma o array é percorrido até ao \0 (inclusive).
        i++;
    } 
    
    j=0;
    while (src[j] != '\0') {
        dest[i+j] = src[j];
        j++;
    }
    dest[i+j] = '\0';
    
                                            /*
                                            for (j=0; src[j] != '\0'; j++) {
                                                dest[i+j] = src[j];
                                            }
                                            dest[i+j] = '\0';
                                            */
    
    return dest;
} 
