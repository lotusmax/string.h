char *s21_strpbrk(const char *str1, const char *str2) {
    if (str1 == S21_NULL || str2 == S21_NULL) {
        return S21_NULL;
    }

    for (const char *a = str1; *a; a++) {
        for (const char *b = str2; *b; b++) {
            if (*a == *b) {
                return (char *)a;
            }
        }
    }

    return S21_NULL;
}
