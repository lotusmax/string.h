#include <stdio.h>
#include <string.h> // Для использования стандартной функции strtok и других функций работы со строками

typedef unsigned long s21_size_t;
#define s21_NULL ((void *)0)

char *s21_strtok(char *str, const char *delim) {
    static int next_null =  0, tok =  0;
    static s21_size_t ind =  0;
    static char *max_ptr = s21_NULL;
    static char *addr = s21_NULL;

    // Если str не NULL, инициализируем переменные для новой строки
    if (str) {
        tok =  1;
        ind =  0;
        next_null =  0;
        addr = str + s21_strspn(str, delim); // Пропускаем начальные разделители
        max_ptr = str + s21_strlen(str);
    }

    char *res = s21_NULL; // Инициализируем возвращаемое значение как NULL

    // Проверяем, не достигнут ли конец строки или не установлен ли флаг next_null
    if (!(addr >= max_ptr || next_null)) {
        int non_delim =  1;
        for (int i =  0; addr[i]; i++) {
            s21_size_t step = s21_strspn(addr + i, delim);
            if (step) {
                non_delim =  0;
                for (s21_size_t j = i; j < i + step; j++) addr[j] = '\0';
                ind = step + i;
                break;
            }
        }

        // Если это первый вызов для данной строки и текущий символ не является разделителем,
        // устанавливаем флаг next_null
        if (tok ==  1 && non_delim) next_null =  1;

        res = addr; // Указываем на начало строки
        addr += ind; // Сдвигаем указатель на начало новой строки
    }

    tok++; // Увеличиваем счетчик вызовов
    return res; // Возвращаем найденный токен или NULL, если больше токенов нет
}

#include <stdio.h>
#include <string.h> // Для использования стандартной функции strtok и других функций работы со строками

// Предполагаем, что функция s21_strtok уже определена в этом файле или включена через заголовочный файл

int main() {
    // Определение исходной строки и разделителей
    char str[] = "Привет, мир! Это пример работы функции s21_strtok.";
    const char delim[] = "                   321"; // Используем пробел, запятую и точку в качестве разделителей

    // Использование s21_strtok для разбиения строки на токены
    char *token = s21_strtok(str, delim);

    // Вывод каждого токена на новой строке
    while (token != s21_NULL) {
        printf("%s\n", token);
        token = s21_strtok(s21_NULL, delim); // Для последующих вызовов функции передаем NULL
    }

    return  0;
}
