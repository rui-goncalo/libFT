#include "libft.h"

int ft_strlen(const char *s) {
    int i;

    i = 0;
    while (s[i] != '\0') { // Podemos trocar s[i] por *s
        i++; // aqui incrementamos o s (sem estrelinha)
    }

    return i;
}

//&s[0] é o mesmo que *s