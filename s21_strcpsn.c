#include <stdio.h>

typedef long unsigned s21_size_t;

s21_size_t s21_strcspn(const char *str1, const char *str2) {
    const char *p = str1;
    const char *q;

    while (*p) {
        for (q = str2; *q && *q != *p; q++);
        if (*q)
            break;
        p++;
    }

    return p - str1;
}

int main() {
    const char *str1 = "bcdefa";
    const char *str2 = "a";
    s21_size_t length = s21_strcspn(str1, str2);
    printf("Длина начального сегмента: %zu\n", length);
    return  0;
} 



