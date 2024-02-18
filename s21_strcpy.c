#include <stdio.h>

typedef long unsigned s21_size_t;

char *s21_strcpy(char *dest, const char *src) {
    char *start = dest;

    while ((*dest++ = *src++));

    return start;
}

int main() {
    char src[] = "Строка";
    char dest[20];

    s21_strcpy(dest, src);

    printf("%s\n", dest);
    return 0;
}