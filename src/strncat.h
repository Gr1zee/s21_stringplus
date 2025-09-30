#ifndef STRNCAT_H
#define STRNCAT_H

#include <stddef.h> //!Заменить на наш NULL и size_t

/* 
 * Добавляет строку src в конец строки dest длиной до n символов
 */
char *strncat(char *dest, const char *src, size_t n);

#endif /* STRNCAT */