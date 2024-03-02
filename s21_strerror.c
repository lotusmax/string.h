#include "s21_strerror.h"
#include <stdio.h>
#include <string.h>

////////BUFF_SIZE НАДО ОБЬЯВИТЬ STRING.H

// Определение функции s21_strerror, которая возвращает строку описания ошибки
char *s21_strerror(int errnum) {
    // Создание статического массива символов для хранения результата
    static char res[BUFF_SIZE] = {'\0'}; // Инициализация массива нулевыми символами

    // Проверка, находится ли номер ошибки в допустимом диапазоне
    if(errnum < 0 || errnum >= S21_ERRLIST_SIZE) // Если номер ошибки меньше 0 или больше размера списка ошибок
        // Форматирование строки с сообщением об ошибке в случае, если номер ошибки неизвестен
        sprintf(res, "Unknown error: %d", errnum); // Использование стандартной функции sprintf для форматирования строки
    else
        // Копирование строки ошибки из списка ошибок в буфер res
        strcpy(res, s21_errorlist[errnum]); // Использование стандартной функции strcpy для копирования строки

    // Возвращение указателя на результат
    return res;
}

int main() {
    // Инициализация переменной с кодом ошибки
    int errnum = -1; // Код ошибки
    // Вызов функции s21_strerror с переданным кодом ошибки
    char *error_message = s21_strerror(errnum); // Получение сообщения об ошибке
    // Вывод сообщения об ошибке
    printf("сообщение об ошибке: %s\n", error_message); // Использование printf для вывода сообщения
    return 0; // Завершение программы с кодом возврата 0
}