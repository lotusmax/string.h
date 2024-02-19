typedef long unsigned s21_size_t;

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *cdest = (char *)dest;
    const char *csrc = (const char *)src;

    if (csrc < cdest) {
        csrc += n;
        cdest += n;
        while (n--) {
            *--cdest = *--csrc;
        }
    } else {

        while (n--) {
            *cdest++ = *csrc++;
        }
    }

    return dest;
}
