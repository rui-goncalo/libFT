#include "libft.h"
#include <string.h>
#include <stdio.h>

int main () {
    char *array="ola, eu chamo-me Rui.";
    char *source="O século XX iniciou em 1 de janeiro de 1901 e terminou em 31 de dezembro de 2000.";
    char destino[ft_strlen(source)];
    int size;
    char dest[20] = "aaaaaaaaaa";
    char *sour = "BBBG";
    

    
    size = ft_strlen(array);
    printf("%d\n", size);

    if (ft_strlen(array) == strlen(array)) {
        puts ("Verdade.");
    } 
    
    if (ft_strcpy(destino, source) == strcpy(destino, source)) {
        puts ("verdade");
    }
    
    if (ft_strncpy(destino, source, 7) == strncpy(destino, source, 7)) {
        puts ("verdade");
    }
    
    printf ("%s\n", ft_strncpy(destino, source, 7));
    printf ("%s\n", strncpy(destino, source, 7));   
     
    if (ft_strcat(dest, sour) == strcat(dest,sour)) {
        puts ("VERDADE");
    }
    
    printf("%s", ft_strcat(dest, sour));
        
    return 0;   
}

