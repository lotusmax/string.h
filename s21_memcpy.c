#include <stdio.h>
#include <string.h>

typedef unsigned long s21_size_t;

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
    unsigned char *d = (unsigned char *) dest;
    unsigned char *s = (unsigned char *) src;
    for(s21_size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

typedef unsigned long s21_size_t;

int main() {
    char src[] = "Hello, World!";
    char dest[20];
    s21_memcpy(dest,src, sizeof(src));
    printf("%s\n", src);
    printf("%s\n", dest);
    return 0;
}