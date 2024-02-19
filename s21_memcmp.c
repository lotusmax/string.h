typedef long unsigned s21_size_t;
#define s21_NULL ((void *)0)

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
    const unsigned char *p1 = str1;
    const unsigned char *p2 = str2;
    for (s21_size_t i =  0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
        }
    }
    return  s21_NULL;
}

