typedef long unsigned s21_size_t;
#include <string.h>
#include <stdio.h>

void *s21_memset(void *str, int c, s21_size_t n) {
    char *s = (char *)str;
    for(s21_size_t i = 0; i < n; i++) {
        s[i] = c;
    }
    return str;
}

int main() {
    char buffer[50];
    s21_memset(buffer, 'A', sizeof(buffer));
    printf("%s", buffer);
    return  0;
}