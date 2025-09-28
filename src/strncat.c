#include <stdio.h>

char *strncat(char *dest, const char *src, size_t n) {
    if (dest == NULL) return NULL;
    if (src == NULL || n == 0) return dest;
    
    char *original_dest = dest;
    
    while (*dest != '\0') {
        dest++;
    }
    
    for (size_t i = 0; i < n; i++) {
        *dest = *src;
        if (*src == '\0') {
            break;
        }
        dest++;
        src++;
    }
    
    *dest = '\0';
    
    return original_dest;
}

int main() {
    char dest[20] = "Hello";
    char src[] = " World!";
    int r;
    scanf("%d", &r);
    strncat(dest, src, r);
    printf("Result: %s\n", dest);
    
    return 0;
}