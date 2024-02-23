#include <stdio.h>
#include <string.h>

typedef long unsigned s21_size_t;

s21_size_t s21_strcpsn(const char *str1, const char *str2) {
    s21_size_t symb = 0;
    for(const char *a= str1; *a; a++) {
        for(const char *b= str2; *b; b++) {
            if (*a == *b) {
                return symb;
            }
        }
    symb++;
    }
    return symb;
}

int main() {
    const char *str1 = "bcdefa";
    const char *str2 = "a";
    s21_size_t length = s21_strcpsn(str1, str2);
    printf("Длина начального сегмента: %zu\n", length);
    return  0;
} 



