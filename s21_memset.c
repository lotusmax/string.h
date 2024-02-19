typedef long unsigned s21_size_t;

void *my_memset(void *str, int c, s21_size_t n) {
    unsigned char *ptr = str;
    while (n--) {
        *ptr++ = (unsigned char)c;
    }
    return str;
}
