#include <stdio.h>

typedef long unsigned int s21_size_t;

s21_size_t s21_strspn(const char *str1, const char *str2) {
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
    const char *str1 = "Hello, world!";
    const char *str2 = "w";
    s21_size_t length = s21_strspn(str1, str2);
    printf("%zu\n", length );
    return   0;
}
