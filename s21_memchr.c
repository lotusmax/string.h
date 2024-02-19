typedef long unsigned s21_size_t;
#define s21_NULL ((void *)0)
#include <stdio.h>
#include <string.h>

void *s21_memchr(const void *str, int c, s21_size_t n) {
    const unsigned char *p = str;
    while (n--) {
        if (*p ==c) {
            return(void *)p;
        }
        p++;
    }
    return s21_NULL;
}

int main() {
    const char str[] = "aysen";
    int c = 'e';
    s21_size_t n = strlen(str);
    void *ptr;

    ptr = s21_memchr(str, c, n);

    if (ptr != s21_NULL) {
        printf("Символ '%c' найден на позиции %ld.\n", c, (char*)ptr - str +  1);
    } else {
        printf("Символ '%c' не найден.\n", c);
    }

    return  0;
}
