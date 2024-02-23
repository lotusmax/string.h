#include <stdio.h>
#include <string.h>

typedef long unsigned int s21_size_t;

s21_size_t s21_strspn(const char *str1, const char *str2) {
    s21_size_t symb = 0;
    for(const char *a= str1; *a; a++) {
        unsigned short flag = 0;
        for(const char *b= str2; *b; b++) {
            if(*a == *b) {
                symb++;
                flag = 1;
                break;
            }
        }
        if(!flag) 
            break;
    }
    return symb;
}
 

int main() {
    const char *str1 = "Helllo, world!";
    const char *str2 = "Hel";
    s21_size_t length = s21_strspn(str1, str2);
    printf("%zu\n", length );
    return   0;
}
