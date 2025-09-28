#ifndef STRNCAT_H
#define STRNCAT_H

#include <stddef.h>

/* 
 * Добавляет строку src в конец строки dest длиной до n символов
 */
char *strncat(char *dest, const char *src, size_t n);

#endif /* STRNCAT */