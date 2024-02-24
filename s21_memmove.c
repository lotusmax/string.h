typedef long unsigned s21_size_t;
#define s21_NULL ((void *)0)

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *to = (char *)dest;
    char *from = (char *)src;
    if(to == from) {
        return dest;
    }

    char *tmp =(char *)malloc(sizeof(char) *n);
    if(!tmp) {
        return s21_NULL;
    }

    if(tmp) {
        if(s21_memcpy(tmp, from, n) == s21_NULL) {
            free(tmp);
            return s21_NULL;
        }
        if(s21_memcpy(to,tmp, n) == s21_NULL) {
            free(tmp);
            return s21_NULL;
        }
        free(tmp);
    }
    return dest;
}
