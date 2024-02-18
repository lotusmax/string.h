
size_t s21_strspn(const char *str1, const char *str2) {
    size_t count =  0;
    const char *p;

    for (; *str1; str1++, count++) {
        for (p = str2; *p && *p != *str1; p++)
            ;
        if (!*p)
            break;
    }
    return count;
} 

int main() {
    const char *str = "HELLO";
    const char *chars = "PELF";
    size_t len = s21_strspn(str, chars);
    printf("%zu\n", len);
    return 0;
}