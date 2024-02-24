char *s21_strstr(const char *haystack, const char *needle) {
    if (haystack == S21_NULL || needle == S21_NULL) {
        return S21_NULL;
    }

    s21_size_t haystack_len = s21_strlen(haystack);
    s21_size_t needle_len = s21_strlen(needle);

    if (haystack_len < needle_len) {
        return S21_NULL; // Подстрока длиннее строки
    }

    for (s21_size_t i =  0; i <= haystack_len - needle_len; i++) {
        int found =  1;
        for (s21_size_t j = i, k =  0; k < needle_len; k++, j++) {
            if (haystack[j] != needle[k]) {
                found =  0;
                break;
            }
        }
        if (found) {
            return (char *)haystack + i;
        }
    }

    return S21_NULL; 
}
