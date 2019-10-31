#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    if (dst == NULL)
        return NULL;
    char *res = dst;
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    return res;
}
